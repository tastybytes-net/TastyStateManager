#include "../include/TastyStateManager.h"

/**
 * @class TastyStateManager
 * @brief Manages the state of a system with timeout and LED control.
 *
 * The TastyStateManager class is responsible for handling different states of a system,
 * managing transitions between states based on events, and controlling an LED based on the current state.
 * It uses a timer to manage state timeouts and LED blinking.
 *
 * Example usage:
 * @code
 * TastyStateManager& manager = TastyStateManager::getInstance();
 * manager.begin(defaultState, timeoutState, ledPin);
 *
 * // In the main loop
 * while (true) {
 *     manager.tick();
 *     // Handle button presses
 *     if (buttonPressed) {
 *         manager.onClick();
 *     }
 * }
 * @endcode
 */

Timer<> TastyStateManager::timer = Timer<>();
Timer<>::Task TastyStateManager::timeoutTask = NULL;
Timer<>::Task TastyStateManager::ledTask = NULL;

Timeout TastyStateManager::timeout = { nullptr, 999 };

TastyStateManager::TastyStateManager() {};


/**
 * @brief Handles state timeout events.
 *
 * @param unused Pointer to unused data.
 * @return true if the timeout was handled successfully.
 */
bool TastyStateManager::stateTimeoutHandler(void*) {
    if (TastyStateManager::getInstance().activeState->handleEvent(TastyEventType::TIMEOUT)) {
        loginfo("Continue Timeout");
        TastyStateManager::getInstance().setState(TastyStateManager::timeout.state);
    }
    return true;
}

/**
 * @brief Toggles the LED state.
 *
 * @param unused Pointer to unused data.
 * @return true if the LED state was toggled successfully.
 */
bool TastyStateManager::toggleLed(void*) {
    TastyStateManager::getInstance().ledState.on = !TastyStateManager::getInstance().ledState.on;
    return true;
}

/**
 * @brief Gets the singleton instance of TastyStateManager.
 *
 * @return Reference to the singleton instance of TastyStateManager.
 */
TastyStateManager& TastyStateManager::getInstance() {
    static TastyStateManager instance;
    return instance;
}

/**
 * @brief Initializes the state manager with default and timeout states.
 *
 * @param defaultS Pointer to the default state.
 * @param timeoutS Pointer to the timeout state.
 * @param ledPin The pin number for the LED.
 */
void TastyStateManager::begin(TastyState* defaultS, TastyState* timeoutS, int8_t ledPin) {
    loginfo(F("[ State Manager ] Begin 1"));
    logdbg(defaultS->name + " -> " + timeoutS->name);

    if (ledPin != NOT_A_PIN) {
        setupLed(ledPin);
    }
    setupDefaultStates(defaultS, timeoutS);
}

/**
 * @brief Initializes the state manager with RGB LED pins.
 *
 * @param defaultS Pointer to the default state.
 * @param timeoutS Pointer to the timeout state.
 * @param ledPin RGBLed structure containing pin numbers for R, G, and B.
 */
void TastyStateManager::begin(TastyState* defaultS, TastyState* timeoutS, RGBLed ledPin) {
    loginfo(F("[ State Manager ] Begin 2"));
    if (ledPin.r != NOT_A_PIN && ledPin.g != NOT_A_PIN && ledPin.b != NOT_A_PIN) {
        setupLed(ledPin.r, ledPin.g, ledPin.b);
    }
    setupDefaultStates(defaultS, timeoutS);
}

/**
 * @brief Initializes the state manager with default states only.
 *
 * @param defaultS Pointer to the default state.
 * @param timeoutS Pointer to the timeout state.
 */
void TastyStateManager::begin(TastyState* defaultS, TastyState* timeoutS) {
    loginfo(F("[ State Manager ] Begin 3"));
    setupDefaultStates(defaultS, timeoutS);
}

/**
 * @brief Sets up the default states for the state manager.
 *
 * @param defaultS Pointer to the default state.
 * @param timeoutS Pointer to the timeout state.
 */
void TastyStateManager::setupDefaultStates(TastyState* defaultS, TastyState* timeoutS) {
    loginfo(F("--- setupDefaultStates ---"));
    TastyStateManager::timer.tick();
    if (timeoutS != nullptr) {
        defaultTimeoutState = timeoutS;
        loginfo_f("Timeout State: %s", defaultTimeoutState->name);
    }

    if (defaultS != nullptr) {
        defaultState = defaultS;
        loginfo_f("Default State: %s", defaultState->name);
        delay(250);
        setState(defaultState);
    }
}

/**
 * @brief Sets the default state for the state manager.
 *
 * @param state Pointer to the state to be set as default.
 */
void TastyStateManager::setDefaultState(TastyState* state) {
    loginfo(F("[ State Manager ] Set Default State "));
    logdbg_f("%s -> %s", state->name, state->nextState->name);
    defaultState = state;
}

/**
 * @brief Sets the timeout state for the state manager.
 *
 * @param state Pointer to the state to be set as timeout.
 */
void TastyStateManager::setTimeoutState(TastyState* state) {
    loginfo(F("[ State Manager ] Set Timeout State "));
    logdbg_f("%s -> %s", state->name, state->nextState->name);
    defaultTimeoutState = state;
}

/**
 * @brief Sets up the LED with a single pin.
 *
 * @param ledPin The pin number for the LED.
 */
void TastyStateManager::setupLed(int8_t ledPin) {
    LED = ledPin;
    pinMode(LED, OUTPUT);
}

/**
 * @brief Sets up the RGB LED with separate pins for R, G, and B.
 *
 * @param ledR The pin number for the red LED.
 * @param ledG The pin number for the green LED.
 * @param ledB The pin number for the blue LED.
 */
void TastyStateManager::setupLed(int8_t ledR, int8_t ledG, int8_t ledB) {
    LED_R = ledR;
    LED_G = ledG;
    LED_B = ledB;

    pinMode(LED_R, OUTPUT);
    pinMode(LED_G, OUTPUT);
    pinMode(LED_B, OUTPUT);
}

/**
 * @brief Updates the state manager and applies LED settings.
 *
 * This method should be called periodically to update the state manager and apply any LED changes.
 */
void TastyStateManager::tick() {
    TastyStateManager::timer.tick();
    applyLed();
    activeState->handleEvent(TastyEventType::TICK);
}

/**
 * @brief Sets the next state for the state manager.
 *
 * @param nextState Pointer to the state to transition to.
 */
void TastyStateManager::setState(TastyState* nextState) {
    logdbg(F("--- Setting State ---"));
    logdbg_f("Active State: %s, Next State: %s", activeState != nullptr ? activeState->name : " --- ", nextState != nullptr ? nextState->name : " --- ");

    if (TastyStateManager::timeoutTask != NULL) {
        TastyStateManager::timer.cancel(TastyStateManager::timeoutTask);
    }
    if (TastyStateManager::ledTask != NULL) {
        TastyStateManager::timer.cancel(TastyStateManager::ledTask);
    }

    lastState = activeState;
    activeState = nextState;

    if (lastState != nullptr) {
        logdbg("lastState::LEAVE");
        lastState->handleEvent(TastyEventType::LEAVE);
    }
    if (activeState != nullptr) {
        logdbg("activeState::ENTER");
        activeState->handleEvent(TastyEventType::ENTER);
    }

    logdbg_f("New Active State: %s", activeState->name);

    ledState.color = nextState->ledColor;
    ledState.speed = nextState->ledSpeed;

    TastyStateManager::timeout.state = getTimeoutState();
    TastyStateManager::timeout.time = getTimeout();
    TastyStateManager::timer.tick();
    setTimeoutTask();

    if (blinkSpeedValues[activeState->ledSpeed]) {
        TastyStateManager::ledTask = TastyStateManager::timer.every(blinkSpeedValues[activeState->ledSpeed], TastyStateManager::toggleLed);
    } else {
        ledState.on = false;
    }
    logdbg(F("--- Set State Complete ---"));
}

/**
 * @brief Sets the timeout task for the current state.
 *
 * This method configures the timeout for the current active state.
 */
void TastyStateManager::setTimeoutTask() {
    logdbg_f("Setting Timeout for %s -> %s in %i", activeState->name, TastyStateManager::timeout.state->name, TastyStateManager::timeout.time);
    if (TastyStateManager::timeoutTask != NULL) {
        TastyStateManager::timer.cancel(TastyStateManager::timeoutTask);
    }
    TastyStateManager::timer.tick();
    TastyStateManager::timeoutTask = TastyStateManager::timer.in(TastyStateManager::timeout.time, TastyStateManager::stateTimeoutHandler);
}

/**
 * @brief Applies the LED settings based on the current state.
 *
 * This method controls the LED output based on the current LED state and color settings.
 */
void TastyStateManager::applyLed() {
    // loginfo_f("Led Status %i", ledState.on);
    if (!ledState.on) {
        if (LED_R != NOT_A_PIN && LED_G != NOT_A_PIN && LED_B != NOT_A_PIN) {
            analogWrite(LED_R, LOW);
            analogWrite(LED_G, LOW);
            analogWrite(LED_B, LOW);
        }
        if (LED != NOT_A_PIN) {
            analogWrite(LED, LOW);
        }
        return;
    } else {
        if (ledState.on) {
            if (LED_R != NOT_A_PIN && LED_G != NOT_A_PIN && LED_B != NOT_A_PIN) {
                analogWrite(LED_R, ledState.color.r);
                analogWrite(LED_G, ledState.color.g);
                analogWrite(LED_B, ledState.color.b);
            }
            if (LED != NOT_A_PIN) {
                analogWrite(LED, 255);
            }
        }
    }
}

/**
 * @brief Retrieves the timeout state based on the current active state.
 *
 * @return Pointer to the timeout state.
 */
TastyState* TastyStateManager::getTimeoutState() {
    loginfo(F("--- Get Timeout State ---"));
    loginfo_f("    Current Active: %s ", activeState->name);

    if (activeState != nullptr && activeState->onTimeoutState != nullptr) {
        loginfo_f("    Active State Timeout State ---> %s", activeState->onTimeoutState->name);
        return activeState->onTimeoutState;
    } else if (defaultTimeoutState != nullptr) {
        loginfo_f("    Default State Timeout State ---> %s", defaultTimeoutState->name);
        isActive = false;
        return defaultTimeoutState;
    }
    return defaultState;
}

/**
 * @brief Retrieves the timeout duration for the current active state.
 *
 * @return The timeout duration in milliseconds, or -1 if not set.
 */
int32_t TastyStateManager::getTimeout() {
    loginfo(F("--- Get Timeout Time ---"));
    loginfo_f("    Current Active: %s ", activeState->name);

    if (activeState != nullptr) {
        loginfo_f("    Active State Timeout Time ---> %i", activeState->timeout);
        return activeState->timeout;
    }
    return -1;
}

/**
 * @brief Handles a single click event.
 *
 * This method is called when a single click is detected, and it transitions to the appropriate state.
 */
void TastyStateManager::onClick() {
    TastyStateManager::getInstance().setTimeoutTask();
    if (TastyStateManager::getInstance().activeState->handleEvent(TastyEventType::CLICK) && TastyStateManager::getInstance().activeState->onClickState != nullptr) {
        TastyStateManager::getInstance().setState(TastyStateManager::getInstance().activeState->onClickState);
    }
}

/**
 * @brief Handles a double click event.
 *
 * This method is called when a double click is detected, and it transitions to the appropriate state.
 */
void TastyStateManager::onDoubleClick() {
    TastyStateManager::getInstance().setTimeoutTask();
    if (TastyStateManager::getInstance().activeState->handleEvent(TastyEventType::DOUBLE_CLICK) && TastyStateManager::getInstance().activeState->onDoubleClickState != nullptr) {
        TastyStateManager::getInstance().setState(TastyStateManager::getInstance().activeState->onDoubleClickState);
    }
}

/**
 * @brief Handles a multi-click event.
 *
 * This method is called when a multi-click is detected, and it transitions to the appropriate state.
 */
void TastyStateManager::onMultiClick() {
    TastyStateManager::getInstance().setTimeoutTask();
    if (TastyStateManager::getInstance().activeState->handleEvent(TastyEventType::MULTI_CLICK) && TastyStateManager::getInstance().activeState->onMultiClickState != nullptr) {
        TastyStateManager::getInstance().setState(TastyStateManager::getInstance().activeState->onMultiClickState);
    }
}

/**
 * @brief Handles a long press event.
 *
 * This method is called when a long press is detected, and it transitions to the appropriate state.
 ```cpp
 */
void TastyStateManager::onLongPress() {
    TastyStateManager::getInstance().setTimeoutTask();
    if (TastyStateManager::getInstance().activeState->handleEvent(TastyEventType::LONG_CLICK) && TastyStateManager::getInstance().activeState->onLongPressState != nullptr) {
        TastyStateManager::getInstance().setState(TastyStateManager::getInstance().activeState->onLongPressState);
    }
}

/**
 * @brief Handles an up press event.
 *
 * This method is called when an up press is detected, and it transitions to the appropriate state.
 */
void TastyStateManager::onUpPress() {
    TastyStateManager::getInstance().setTimeoutTask();
    if (TastyStateManager::getInstance().activeState->handleEvent(TastyEventType::UP) && TastyStateManager::getInstance().activeState->onUpClickState != nullptr) {
        TastyStateManager::getInstance().setState(TastyStateManager::getInstance().activeState->onUpClickState);
    }
}

/**
 * @brief Handles a down press event.
 *
 * This method is called when a down press is detected, and it transitions to the appropriate state.
 */
void TastyStateManager::onDownPress() {
    TastyStateManager::getInstance().setTimeoutTask();
    if (TastyStateManager::getInstance().activeState->handleEvent(TastyEventType::DOWN) && TastyStateManager::getInstance().activeState->onDownClickState != nullptr) {
        TastyStateManager::getInstance().setState(TastyStateManager::getInstance().activeState->onDownClickState);
    }
}

/**
 * @brief Handles a right press event.
 *
 * This method is called when a right press is detected, and it transitions to the appropriate state.
 */
void TastyStateManager::onRightPress() {
    TastyStateManager::getInstance().setTimeoutTask();
    if (TastyStateManager::getInstance().activeState->handleEvent(TastyEventType::RIGHT) && TastyStateManager::getInstance().activeState->onRightClickState != nullptr) {
        TastyStateManager::getInstance().setState(TastyStateManager::getInstance().activeState->onRightClickState);
    }
}

/**
 * @brief Handles a left press event.
 *
 * This method is called when a left press is detected, and it transitions to the appropriate state.
 */
void TastyStateManager::onLeftPress() {
    TastyStateManager::getInstance().setTimeoutTask();
    if (TastyStateManager::getInstance().activeState->handleEvent(TastyEventType::LEFT) && TastyStateManager::getInstance().activeState->onLeftClickState != nullptr) {
        TastyStateManager::getInstance().setState(TastyStateManager::getInstance().activeState->onLeftClickState);
    }
}