<a id="_tasty_state_manager_8h"></a>
# File TastyStateManager.h

![][C++]

**Location**: `include/TastyStateManager.h`





## Classes

* [Timeout](struct_timeout.md#struct_timeout)
* [TastyStateManager](class_tasty_state_manager.md#class_tasty_state_manager)

## Includes

* OneButton.h
* <arduino-timer.h>
* [TastyDefs.h](_tasty_defs_8h.md#_tasty_defs_8h)
* <string>
* [TastyState.h](_tasty_state_8h.md#_tasty_state_8h)
* <logger.h>

```mermaid
graph LR
5["Arduino.h"]

11["EntryState.tpp"]

2["OneButton.h"]

9["RTClib.h"]

4["TastyDefs.h"]
click 4 "_tasty_defs_8h_source.md#_tasty_defs_8h_source"
4 --> 5

7["TastyState.h"]
click 7 "_tasty_state_8h_source.md#_tasty_state_8h_source"
7 --> 4
7 --> 6
7 --> 8
7 --> 9
7 --> 10

1["TastyStateManager.h"]
click 1 "_tasty_state_manager_8h.md#_tasty_state_manager_8h"
1 --> 2
1 --> 3
1 --> 4
1 --> 6
1 --> 7
1 --> 8

8["logger.h"]
click 8 "logger_8h_source.md#logger_8h_source"
8 --> 5

13["states/DateEntryState.h"]
click 13 "_date_entry_state_8h_source.md#_date_entry_state_8h_source"
13 --> 7
13 --> 10
13 --> 4

10["states/EntryState.h"]
click 10 "_entry_state_8h_source.md#_entry_state_8h_source"
10 --> 7
10 --> 6
10 --> 11
10 --> 12
10 --> 13
10 --> 14

12["states/TextEntryState.h"]
click 12 "_text_entry_state_8h_source.md#_text_entry_state_8h_source"
12 --> 7
12 --> 10
12 --> 6

14["states/TimeEntryState.h"]
click 14 "_time_entry_state_8h_source.md#_time_entry_state_8h_source"
14 --> 7
14 --> 10
14 --> 6
14 --> 4

3["arduino-timer.h"]

6["string"]

```

## Included by

* [TastyMenu.h](_tasty_menu_8h.md#_tasty_menu_8h)
* [TastyStateManager.cpp](_tasty_state_manager_8cpp.md#_tasty_state_manager_8cpp)

```mermaid
graph RL
2["TastyMenu.h"]
click 2 "_tasty_menu_8h_source.md#_tasty_menu_8h_source"

1["TastyStateManager.h"]
click 1 "_tasty_state_manager_8h.md#_tasty_state_manager_8h"
2 --> 1

```

## Source

```cpp

#ifndef TASTY_STATE_MANAGER_H
#define TASTY_STATE_MANAGER_H

#include "OneButton.h"
#include <arduino-timer.h>
#include "TastyDefs.h"
#include <string>
#include "TastyState.h"
#include <logger.h>

class TastyMenu;

struct Timeout {
    TastyState* state;
    uint32_t time;
};


class TastyStateManager {
private:
    int8_t LED_R = NOT_A_PIN;
    int8_t LED_G = NOT_A_PIN;
    int8_t LED_B = NOT_A_PIN;
    int8_t LED = NOT_A_PIN;

    TastyStateManager();

    static bool stateTimeoutHandler(void*);
    static bool toggleLed(void*);
    static RGBLed EMPTY_RGB_LED;

    void checkTimeout();
    void applyLed();

    TastyState* getTimeoutState();
    int32_t getTimeout();

    static Timer<> timer;
    static Timer<>::Task ledTask;
    static Timer<>::Task timeoutTask;
    static Timeout timeout;



public:

    // Statics for management
    static void onClick();

    static void onDoubleClick();

    static void onMultiClick();

    static void onLongPress();

    static void onUpPress();

    static void onDownPress();

    static void onRightPress();

    static void onLeftPress();

    TastyState* activeState = nullptr;

    TastyState* lastState = nullptr;

    TastyState* defaultState = nullptr;

    TastyState* defaultTimeoutState = nullptr;

    BlinkState ledState;

    static TastyStateManager& getInstance();

    void setDefaultState(TastyState* state);

    void setTimeoutState(TastyState* state);

    void setupLed(int8_t ledPin);

    void setupLed(int8_t ledR, int8_t ledG, int8_t ledB);

    void setupDefaultStates(TastyState* defaultS = nullptr, TastyState* timeoutS = nullptr);

    void begin(TastyState* defaultState = nullptr, TastyState* timeoutState = nullptr, int8_t ledPin = NOT_A_PIN);

    void begin(TastyState* defaultState = nullptr, TastyState* timeoutState = nullptr, RGBLed ledPin = TastyStateManager::EMPTY_RGB_LED);

    void begin(TastyState* defaultState = nullptr, TastyState* timeoutState = nullptr);

    void tick();

    void setState(TastyState* nextState = timeout.state);

    void setTimeoutTask();
};

#endif
```

[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)
[static]: https://img.shields.io/badge/-static-lightgrey (static)
[private]: https://img.shields.io/badge/-private-red (private)
[Markdown]: https://img.shields.io/badge/language-Markdown-blue (Markdown)