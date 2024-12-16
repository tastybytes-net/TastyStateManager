<a id="_tasty_state_8h"></a>
# File TastyState.h

![][C++]

**Location**: `include/TastyState.h`





## Classes

* [TastyState](class_tasty_state.md#class_tasty_state)

## Includes

* <TastyDefs.h>
* <string>
* <logger.h>
* RTClib.h
* [states/EntryState.h](_entry_state_8h.md#_entry_state_8h)

```mermaid
graph LR
3["Arduino.h"]

8["EntryState.tpp"]

6["RTClib.h"]

2["TastyDefs.h"]
click 2 "_tasty_defs_8h_source.md#_tasty_defs_8h_source"
2 --> 3

1["TastyState.h"]
click 1 "_tasty_state_8h.md#_tasty_state_8h"
1 --> 2
1 --> 4
1 --> 5
1 --> 6
1 --> 7

5["logger.h"]
click 5 "logger_8h_source.md#logger_8h_source"
5 --> 3

10["states/DateEntryState.h"]
click 10 "_date_entry_state_8h_source.md#_date_entry_state_8h_source"
10 --> 1
10 --> 7
10 --> 2

7["states/EntryState.h"]
click 7 "_entry_state_8h_source.md#_entry_state_8h_source"
7 --> 1
7 --> 4
7 --> 8
7 --> 9
7 --> 10
7 --> 11

9["states/TextEntryState.h"]
click 9 "_text_entry_state_8h_source.md#_text_entry_state_8h_source"
9 --> 1
9 --> 7
9 --> 4

11["states/TimeEntryState.h"]
click 11 "_time_entry_state_8h_source.md#_time_entry_state_8h_source"
11 --> 1
11 --> 7
11 --> 4
11 --> 2

4["string"]

```

## Included by

* <DateEntryState.h>
* <EntryState.h>
* [TastyMenu.h](_tasty_menu_8h.md#_tasty_menu_8h)
* [TastyState.cpp](_tasty_state_8cpp.md#_tasty_state_8cpp)
* [TastyStateManager.h](_tasty_state_manager_8h.md#_tasty_state_manager_8h)
* <TextEntryState.h>
* <TimeEntryState.h>

```mermaid
graph RL
6["TastyMenu.h"]
click 6 "_tasty_menu_8h_source.md#_tasty_menu_8h_source"

1["TastyState.h"]
click 1 "_tasty_state_8h.md#_tasty_state_8h"
2 --> 1
3 --> 1
6 --> 1
7 --> 1
4 --> 1
5 --> 1

7["TastyStateManager.h"]
click 7 "_tasty_state_manager_8h_source.md#_tasty_state_manager_8h_source"
6 --> 7

2["DateEntryState.h"]
click 2 "_date_entry_state_8h_source.md#_date_entry_state_8h_source"
3 --> 2

3["EntryState.h"]
click 3 "_entry_state_8h_source.md#_entry_state_8h_source"
2 --> 3
1 --> 3
4 --> 3
5 --> 3

4["TextEntryState.h"]
click 4 "_text_entry_state_8h_source.md#_text_entry_state_8h_source"
3 --> 4

5["TimeEntryState.h"]
click 5 "_time_entry_state_8h_source.md#_time_entry_state_8h_source"
3 --> 5

```

## Macros

<a id="_tasty_state_8h_1a32f4fa9c1d13106861c4a328796e7d99"></a>
### Macro LOG\_STATE

![][public]

```cpp
#define LOG_STATE logdbg(state != nullptr ? "    " name ": %s" : "    " name ": nullptr", state != nullptr ? state->name : "")( name ,state )
```







## Variables

<a id="_tasty_state_8h_1a70e1bdabd42ba28937c01ccddde0a157"></a>
### Variable EMPTY\_STATE

![][public]

**Definition**: `include/TastyState.h` (line 172)

```cpp
TastyState* EMPTY_STATE
```

A default empty state instance of [TastyState](class_tasty_state.md#class_tasty_state).





**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *

## Source

```cpp
#ifndef TASTY_STATES_H_
#define TASTY_STATES_H_

#define LOG_STATE(name, state) logdbg(state != nullptr ? "    " name ": %s" : "    " name ": nullptr", state != nullptr ? state->name : "")

#include <TastyDefs.h>
#include <string>
#include <logger.h>
#include "RTClib.h"

class TastyMenu;

class TastyState {
private:
    eventHandler events[12]; 
public:
    static int32_t defaultTimeout; 

    String name; 
    int8_t icon = -1; 

    LedColor ledColor = { 0, 0, 0 }; 
    BlinkSpeed ledSpeed = LED_OFF; 
    int32_t timeout = 0; 
    unsigned long activatedTime = 0; 

    // Event States
    TastyState* onClickState = nullptr; 
    TastyState* onDoubleClickState = nullptr; 
    TastyState* onLongPressState = nullptr; 
    TastyState* onMultiClickState = nullptr; 
    TastyState* onUpClickState = nullptr; 
    TastyState* onDownClickState = nullptr; 
    TastyState* onLeftClickState = nullptr; 
    TastyState* onRightClickState = nullptr; 
    TastyState* onTimeoutState = nullptr; 

    // Menu States
    int8_t index = -1; 
    // TastyState* previousState = nullptr; ///< Previous state in the menu list.
    // TastyState* nextState = nullptr; ///< Next state in the menu list.
    TastyMenu* backMenu = nullptr; 
    TastyMenu* forwardMenu = nullptr; 
    TastyMenu* menu = nullptr; 

    TastyState(String name, int8_t icon = -1, LedColor ledColor = { 0, 0, 0 }, BlinkSpeed ledSpeed = LED_OFF, int32_t timeout = 0, TastyState* timeoutState = nullptr)
        : name{ name }, icon{ icon }, ledColor{ ledColor }, ledSpeed{ ledSpeed }, timeout{ timeout }, onTimeoutState{ timeoutState } {}

    TastyState(TastyState* state, TastyState* timeoutS = nullptr) {
        name = state->name;
        icon = state->icon;
        ledColor = state->ledColor;
        ledSpeed = state->ledSpeed;
        timeout = state->timeout;
        // We don't want to copy the states.
        onTimeoutState = timeoutS;
    }

    void setLEDColor(int8_t r, int8_t g, int8_t b);


    void setLEDColor(LedColor color);

    void setBlinkSpeed(BlinkSpeed ledSpeed);

    inline int32_t getTimeout() { return timeout; }

    inline void setTimeout(int32_t to) { timeout = to; }

    void addEvents(TastyState* clickState, TastyState* doubleClickState = nullptr, TastyState* multiClickState = nullptr, TastyState* longPressState = nullptr);

    void onEvent(TastyEventType type, handler_t fn, void* param = T());

    bool handleEvent(TastyEventType type);

    bool forwardEvents(ActionFunction fn);

    void print();
};

// Example usage of TastyState class
/*
TastyState mainMenu("Main Menu", 1, {255, 0, 0}, LED_SLOW, 5000);
TastyState settingsMenu("Settings", 2, {0, 255, 0}, LED_OFF, 3000, &mainMenu);
mainMenu.addEvents(&settingsMenu);
mainMenu.setLEDColor(0, 0, 255);
mainMenu.print();
*/

#include "states/EntryState.h"

extern TastyState* EMPTY_STATE;
#endif
```

[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)
[static]: https://img.shields.io/badge/-static-lightgrey (static)
[private]: https://img.shields.io/badge/-private-red (private)
[Markdown]: https://img.shields.io/badge/language-Markdown-blue (Markdown)