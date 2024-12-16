#include "../include/TastyState.h"

/**
 * @brief An array representing an empty icon stored in program memory.
 */
const unsigned char icon_empty[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/**
 * @brief Blink speed values in milliseconds.
 */
int16_t blinkSpeedValues[6] = { 0, 1000, 500, 250, 50, 1 };


// Define various LED colors
LedColor LED_RED = { 255, 0, 0 };
LedColor LED_ORANGE = { 255, 175, 0 };
LedColor LED_YELLOW = { 255, 255, 0 };
LedColor LED_GREEN = { 0, 255, 0 };
LedColor LED_TEAL = { 0, 255, 255 };
LedColor LED_BLUE = { 0, 0, 255 };
LedColor LED_PURPLE = { 255, 0, 255 };
LedColor LED_WHITE = { 255, 255, 255 };

/**
 * @brief Default timeout for the TastyState in milliseconds.
 */
int32_t TastyState::defaultTimeout = 10000;

/**
 * @brief Sets the LED color.
 *
 * @param r Red component (0-255)
 * @param g Green component (0-255)
 * @param b Blue component (0-255)
 */
void TastyState::setLEDColor(int8_t r, int8_t g, int8_t b) {
    ledColor.r = r;
    ledColor.g = g;
    ledColor.b = b;
}

/**
 * @brief Sets the LED color.
 *
 * @param color LedColor to set
 */
void TastyState::setLEDColor(LedColor color) {
    ledColor = color;
}

/**
 * @brief Sets the blink speed for the LED.
 *
 * @param ledSpeed The desired blink speed.
 */
void TastyState::setBlinkSpeed(BlinkSpeed ledSpeed) {
    ledSpeed = ledSpeed;
}

/**
 * @brief Adds event states for various button actions.
 *
 * @param clickState State for single click event.
 * @param doubleClickState State for double click event.
 * @param multiClickState State for multiple clicks event.
 * @param longPressState State for long press event.
 */
void TastyState::addEvents(TastyState* clickState, TastyState* doubleClickState, TastyState* multiClickState, TastyState* longPressState) {
    onClickState = clickState;
    onDoubleClickState = doubleClickState;
    onMultiClickState = multiClickState;
    onLongPressState = longPressState;
}

/**
 * @brief Registers an event handler for a specific event type.
 *
 * @param t The type of event to handle.
 * @param fn The callback function to execute on the event.
 * @param param Additional parameter to pass to the callback function.
 */
void TastyState::onEvent(TastyEventType t, handler_t fn, void* param) {
    events[(uint8_t)t].callback = fn;
    events[(uint8_t)t].param = param;
}

/**
 * @brief Handles an event of a specific type.
 *
 * @param type The type of event to handle.
 * @return true if the event was handled successfully, false otherwise.
 */
bool TastyState::handleEvent(TastyEventType type) {
    eventHandler eh = events[(uint8_t)type];

    if (type != TastyEventType::TICK) {
        Serial.print("Event!: ");
        Serial.println((uint8_t)type);
    }

    if (eh.callback != nullptr) {
        return eh.callback(this, eh.param);
    } else
        return true; // continue
}

/**
 * @brief Prints the current state information to the debug log.
 */
void TastyState::print() {
    logdbg(F(" -- STATE -- "));
    logdbg_f("    name: %s", name.c_str());
    logdbg_f("    timeout: %i", timeout);
    LOG_STATE("onClickState", onClickState);
    LOG_STATE("onDoubleClickState", onDoubleClickState);
    LOG_STATE("onLongPressState", onLongPressState);
    LOG_STATE("onMultiClickState", onMultiClickState);
    LOG_STATE("onUpClickState", onUpClickState);
    LOG_STATE("onDownClickState", onDownClickState);
    LOG_STATE("onLeftClickState", onLeftClickState);
    LOG_STATE("onRightClickState", onRightClickState);
    LOG_STATE("onTimeoutState", onTimeoutState);
}

/**
 * @brief A default empty state instance of TastyState.
 */
TastyState* EMPTY_STATE = new TastyState("EMPTY STATE", -1, { 0, 0, 0 }, LED_OFF);

/**
 * @example
 *
 * // Example usage of TastyState
 * TastyState myState("My State", 5000, { 255, 0, 0 }, LED_GREEN);
 * myState.setLEDColor(0, 255, 0); // Set LED to green
 * myState.setBlinkSpeed(BlinkSpeed::FAST); // Set blink speed to fast
 * myState.addEvents(&clickState, &doubleClickState, &multiClickState, &longPressState);
 * myState.onEvent(TastyEventType::CLICK, myClickHandler, nullptr);
 * myState.handleEvent(TastyEventType::CLICK);
 * myState.print(); // Print the current state information
 */