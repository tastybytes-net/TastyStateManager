<a id="_entry_state_8h"></a>
# File EntryState.h

![][C++]

**Location**: `include/states/EntryState.h`





## Classes

* [EntryState](class_entry_state.md#class_entry_state)

## Includes

* <TastyState.h>
* <string>
* EntryState.tpp
* [states/TextEntryState.h](_text_entry_state_8h.md#_text_entry_state_8h)
* [states/DateEntryState.h](_date_entry_state_8h.md#_date_entry_state_8h)
* [states/TimeEntryState.h](_time_entry_state_8h.md#_time_entry_state_8h)

```mermaid
graph LR
4["Arduino.h"]

8["EntryState.tpp"]

7["RTClib.h"]

3["TastyDefs.h"]
click 3 "_tasty_defs_8h_source.md#_tasty_defs_8h_source"
3 --> 4

2["TastyState.h"]
click 2 "_tasty_state_8h_source.md#_tasty_state_8h_source"
2 --> 3
2 --> 5
2 --> 6
2 --> 7
2 --> 1

6["logger.h"]
click 6 "logger_8h_source.md#logger_8h_source"
6 --> 4

10["states/DateEntryState.h"]
click 10 "_date_entry_state_8h_source.md#_date_entry_state_8h_source"
10 --> 2
10 --> 1
10 --> 3

1["EntryState.h"]
click 1 "_entry_state_8h.md#_entry_state_8h"
1 --> 2
1 --> 5
1 --> 8
1 --> 9
1 --> 10
1 --> 11

9["states/TextEntryState.h"]
click 9 "_text_entry_state_8h_source.md#_text_entry_state_8h_source"
9 --> 2
9 --> 1
9 --> 5

11["states/TimeEntryState.h"]
click 11 "_time_entry_state_8h_source.md#_time_entry_state_8h_source"
11 --> 2
11 --> 1
11 --> 5
11 --> 3

5["string"]

```

## Included by

* [DateEntryState.h](_date_entry_state_8h.md#_date_entry_state_8h)
* [TastyState.h](_tasty_state_8h.md#_tasty_state_8h)
* [TextEntryState.h](_text_entry_state_8h.md#_text_entry_state_8h)
* [TimeEntryState.h](_time_entry_state_8h.md#_time_entry_state_8h)

```mermaid
graph RL
4["TastyMenu.h"]
click 4 "_tasty_menu_8h_source.md#_tasty_menu_8h_source"

3["TastyState.h"]
click 3 "_tasty_state_8h_source.md#_tasty_state_8h_source"
2 --> 3
1 --> 3
4 --> 3
5 --> 3
6 --> 3
7 --> 3

5["TastyStateManager.h"]
click 5 "_tasty_state_manager_8h_source.md#_tasty_state_manager_8h_source"
4 --> 5

2["DateEntryState.h"]
click 2 "_date_entry_state_8h_source.md#_date_entry_state_8h_source"
1 --> 2

1["EntryState.h"]
click 1 "_entry_state_8h.md#_entry_state_8h"
2 --> 1
3 --> 1
6 --> 1
7 --> 1

6["TextEntryState.h"]
click 6 "_text_entry_state_8h_source.md#_text_entry_state_8h_source"
1 --> 6

7["TimeEntryState.h"]
click 7 "_time_entry_state_8h_source.md#_time_entry_state_8h_source"
1 --> 7

```

## Source

```cpp
#ifndef TASTY_ENTRY_STATE_H
#define TASTY_ENTRY_STATE_H

#include <TastyState.h>
#include <string>

template <typename DataType, typename D>
class EntryState {
public:
    TastyState* state;
    bool inEdit = false;
    uint8_t editIndex = 0;
    DataType originalData;
    DataType data;
    uint8_t length;
    char editVal = '0'; // 48
    handler_t saveFn;

    TastyState* saveState;

    static handler_t drawFn;
    static void setDrawFn(handler_t dFn);

    EntryState(String name, uint8_t length, DataType data, handler_t saveFn, TastyState* returnState, D* ref);
    static bool onClick(TastyState* state, void*);
    static bool onUp(TastyState* state, void*);
    static bool onDown(TastyState* state, void*);
    static bool onRight(TastyState* state, void*);
    static bool onLeft(TastyState* state, void*);

    static bool reset(TastyState* state, void*);
    // static void onSave(TastyState* state, void*);

    // static bool onTick(TastyState* state, void*);

    void increase() {}; // Override
    void decrease() {}; // Override
    void adjustIndexUp(); // Override
    void adjustIndexDown(); // Override

};

#include "EntryState.tpp"
#include "states/TextEntryState.h"
#include "states/DateEntryState.h"
#include "states/TimeEntryState.h"


#endif
```

[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)
[static]: https://img.shields.io/badge/-static-lightgrey (static)
[private]: https://img.shields.io/badge/-private-red (private)