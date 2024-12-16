<a id="_z_1_2_development_2_arduino_2_libraries_2_tasty_state_manager_2src_2_tasty_state_8cpp-example"></a>
# Example Z:/Development/Arduino/Libraries/TastyStateManager/src/TastyState.cpp undefined

**Location**: `src/TastyState.cpp`



// Example usage of [TastyState](class_tasty_state.md#class_tasty_state) [TastyState](class_tasty_state.md#class_tasty_state) myState("My State", 5000, { 255, 0, 0 }, LED_GREEN); myState.setLEDColor(0, 255, 0); // Set LED to green myState.setBlinkSpeed(BlinkSpeed::FAST); // Set blink speed to fast myState.addEvents(&clickState, &doubleClickState, &multiClickState, &longPressState); myState.onEvent(TastyEventType::CLICK, myClickHandler, nullptr); myState.handleEvent(TastyEventType::CLICK); myState.print(); // Print the current state information ```
#include "../include/TastyState.h"

const unsigned char icon_empty[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

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

int32_t TastyState::defaultTimeout = 10000;

void TastyState::setLEDColor(int8_t r, int8_t g, int8_t b) {
    ledColor.r = r;
    ledColor.g = g;
    ledColor.b = b;
}

void TastyState::setLEDColor(LedColor color) {
    ledColor = color;
}

void TastyState::setBlinkSpeed(BlinkSpeed ledSpeed) {
    ledSpeed = ledSpeed;
}

void TastyState::addEvents(TastyState* clickState, TastyState* doubleClickState, TastyState* multiClickState, TastyState* longPressState) {
    onClickState = clickState;
    onDoubleClickState = doubleClickState;
    onMultiClickState = multiClickState;
    onLongPressState = longPressState;
}

void TastyState::onEvent(TastyEventType t, handler_t fn, void* param) {
    events[(uint8_t)t].callback = fn;
    events[(uint8_t)t].param = param;
}

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

TastyState* EMPTY_STATE = new TastyState("EMPTY STATE", -1, { 0, 0, 0 }, LED_OFF);

```

[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)
[static]: https://img.shields.io/badge/-static-lightgrey (static)
[private]: https://img.shields.io/badge/-private-red (private)
[Markdown]: https://img.shields.io/badge/language-Markdown-blue (Markdown)