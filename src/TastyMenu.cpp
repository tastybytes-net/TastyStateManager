#include "../include/TastyMenu.h"
// #include "../include/TastyState.h"

class TastyMenu;
uint16_t TastyMenu::defaultMenuTimeout;
TastyState* TastyMenu::defaultTimeoutState = nullptr;

/**
 * > Constructs a TastyMenu with a specified number of states.
 *
 * This constructor initializes the menu with a given number of states
 * and links them together in a circular manner.
 *
 * @param len The number of states to be added to the menu.
 * @param ... A variable number of TastyState pointers representing the states.
 *
 * @example
 * TastyState state1("State 1");
 * TastyState state2("State 2");
 * TastyState state3("State 3");
 * TastyMenu menu(3, &state1, &state2, &state3);
 */
TastyMenu::TastyMenu(uint8_t len, ...) {
    length = len;

    va_list items;
    va_start(items, len);
    TastyState* prevItem = va_arg(items, TastyState*);
    TastyState* currItem;

    initializeState(prevItem, 0);
    head = prevItem;

    Serial.println(" ---- New Submenu ---- ");
    Serial.printf("Adding State: %s", prevItem->name);
    Serial.println();

    for (uint8_t i = 1; i < len; ++i) {
        currItem = va_arg(items, TastyState*);
        currItem->onUpClickState = prevItem;
        initializeState(currItem, i);

        prevItem->onDownClickState = currItem;
        Serial.printf("Adding State: %s", currItem->name);
        Serial.println();

        prevItem = currItem;
        currItem = nullptr;
    }

    // activeState = head;
    Serial.printf("Head State: %s", head->name);
    Serial.println();
}

/**
 * > Initializes a state with event handlers and timeout settings.
 *
 * This function sets up the event handlers for a given state and
 * assigns a timeout if it is not already set.
 *
 * @param state Pointer to the TastyState to initialize.
 * @param index The index of the state in the menu.
 */
void TastyMenu::initializeState(TastyState* state, uint8_t index) {
    state->onEvent(TastyEventType::TICK, TastyMenu::drawFn);
    state->onEvent(TastyEventType::LONG_CLICK, TastyMenu::activateBackMenu);
    state->menu = this;
    addTimeoutToState(state);
}

/**
 * > Adds a timeout to a state if not already set.
 *
 * This function checks if the state has a timeout set; if not, it
 * assigns the default menu timeout. It also sets the default timeout
 * state if not already assigned.
 *
 * @param state Pointer to the TastyState to which the timeout will be added.
 */
void TastyMenu::addTimeoutToState(TastyState* state) {
    if (state->timeout == 0) {
        state->setTimeout(TastyMenu::defaultMenuTimeout);
    }
    if (state->onTimeoutState == nullptr && TastyMenu::defaultTimeoutState != nullptr) {
        state->onTimeoutState = TastyMenu::defaultTimeoutState;
    }
}

/**
 * > Sets the drawing function for the menu.
 *
 * This static function allows the user to assign a custom function
 * to display the menu.
 *
 * @param dFn A function pointer to the drawing function.
 *
 * @example
 * void customDrawFunction() {
 *     // Custom drawing logic
 * }
 * TastyMenu::setDrawFn(customDrawFunction);
 */
handler_t TastyMenu::drawFn;
void TastyMenu::setDrawFn(handler_t dFn) {
    TastyMenu::drawFn = dFn;
}

/**
 * > Inserts a new menu state after an existing state.
 *
 * This function links a new state to an existing state in the menu,
 * maintaining the order of states.
 *
 * @param existingState Pointer to the TastyState after which the new state will be added.
 * @param newState Pointer to the TastyState to be added.
 *
 * @example
 * TastyState newState("New State");
 * menu.addNextMenuState(&state1, &newState);
 */
void TastyMenu::addNextMenuState(TastyState* existingState, TastyState* newState) {
    if (existingState == nullptr || newState == nullptr) {
        logerr("Error: Attempt to add a null state.");
        return; // Handle null pointers gracefully
    }
    if (existingState->onDownClickState == nullptr) {
        existingState->onDownClickState = newState;
    } else {
        newState->onDownClickState = existingState->onDownClickState;
        existingState->onDownClickState->onUpClickState = newState;
        existingState->onUpClickState = newState;
    }
    newState->onUpClickState = existingState;
    newState->menu = this; // set the menu for the new state
    calculateIndices(existingState);
}

/**
 * > Inserts a new menu state before an existing state.
 *
 * This function links a new state to an existing state in the menu,
 * maintaining the order of states.
 *
 * @param existingState Pointer to the TastyState before which the new state will be added.
 * @param newState Pointer to the TastyState to be added.
 *
 * @example
 * TastyState newState("New State");
 * menu.addPreviousMenuState(&state2, &newState);
 */
void TastyMenu::addPreviousMenuState(TastyState* existingState, TastyState* newState) {
    if (existingState == nullptr || newState == nullptr) {
        logerr("Error: Attempting to add a null state.");
        return; // Handle null pointers gracefully
    }
    if (existingState->onUpClickState != nullptr) {
        newState->onUpClickState = existingState->onUpClickState; // set the up click state of b to the up click state of a
        existingState->onUpClickState->onDownClickState = newState; // set the previous state to the new state
    }
    existingState->onUpClickState = newState; // set the previous state
    newState->onDownClickState = existingState; // set the previous state for the new state
    newState->menu = this; // set the menu for the new state
    calculateIndices(existingState);
}

/**
 * > Calculates the indices of menu items for display purposes.
 *
 * This function traverses the menu states and assigns an index to each
 * state, which can be useful for displaying a position indicator.
 *
 * @param curr Pointer to the current TastyState from which to start calculating indices.
 */
void TastyMenu::calculateIndices(TastyState* curr) {
    // Move to the top of the stack
    while (curr != nullptr) {
        curr = curr->onUpClickState;
    }

    uint8_t i;
    for (i = 0; curr->onDownClickState != nullptr; curr = curr->onDownClickState) {
        curr->index = i;
    }
    length = i;
}

/**
 * > Attaches a submenu to a state.
 *
 * This function links a submenu to an existing state, allowing for
 * nested menus.
 *
 * @param existingState Pointer to the TastyState to which the submenu will be attached.
 * @param menu Pointer to the TastyMenu that will be attached as a submenu.
 *
 * @example
 * TastyMenu submenu(...);
 * menu.addSubmenu(&state1, &submenu);
 */
void TastyMenu::addSubmenu(TastyState* existingState, TastyMenu* menu) {
    if (existingState == nullptr) {
        logerr("Error: Attempting to add a menu to a null state.");
        return; // Handle null pointers gracefully
    }
    if (menu == nullptr || menu->head == nullptr) {
        logerr("Error: Attempting to add an empty menu to a state.");
        return;
    }

    logdbg("Adding Menu to state");
    existingState->print();
    menu->backMenu = this;
    existingState->addEvents(menu->head);

    existingState->onRightClickState = menu->head;
    TastyState* s = menu->head;
    do {
        loginfo_f("Setting up back menu for state %s -> %s", s->name, existingState->name);
        addBackMenu(s, this);
        s->onLeftClickState = existingState;

    } while (s = s->onDownClickState);
}

/**
 * > Attaches a back menu to a state.
 *
 * This function links a back menu to an existing state, allowing for
 * navigation back to a previous menu.
 *
 * @param existingState Pointer to the TastyState to which the back menu will be attached.
 * @param menu Pointer to the TastyMenu that will be attached as a back menu.
 *
 * @example
 * TastyMenu backMenu(...);
 * menu.addBackMenu(&state2, &backMenu);
 */
void TastyMenu::addBackMenu(TastyState* existingState, TastyMenu* menu) {
    existingState->backMenu = this;
}

/**
 * > Activates a submenu if it exists.
 *
 * This function checks if a state has a forward menu and activates it
 * if available.
 *
 * @param state Pointer to the TastyState to check for a submenu.
 * @param unused Unused parameter for compatibility.
 *
 * @return true if the submenu was activated, false otherwise.
 */
bool TastyMenu::activateSubMenu(TastyState* state, void*) {
    if (state != nullptr && state->forwardMenu != nullptr) {
        TastyStateManager::getInstance().setState(state->forwardMenu->head);
        return true;
    }
    return false;
}

/**
 * > Activates a back menu if it exists.
 *
 * This function checks if a state has a back menu and activates it
 * if available.
 *
 * @param state Pointer to the TastyState to check for a back menu.
 * @param unused Unused parameter for compatibility.
 *
 * @return true if the back menu was activated, false otherwise.
 */
bool TastyMenu::activateBackMenu(TastyState* state, void*) {
    if (state->menu->backMenu != nullptr) {
        TastyStateManager::getInstance().setState(state->onLeftClickState);
        return true;
    }
    return false;
}

// bool TastyMenu::eventPassthrough( TastyEventType e, )