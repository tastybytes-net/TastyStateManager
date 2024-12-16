<a id="_time_entry_state_8h"></a>
# File TimeEntryState.h

![][C++]

**Location**: `include/states/TimeEntryState.h`





## Classes

* [TimeEntryState](class_time_entry_state.md#class_time_entry_state)

## Includes

* <TastyState.h>
* [EntryState.h](_entry_state_8h.md#_entry_state_8h)
* <string>
* <tastyDefs.h>

```mermaid
graph LR
4["Arduino.h"]

9["EntryState.tpp"]

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
2 --> 8

6["logger.h"]
click 6 "logger_8h_source.md#logger_8h_source"
6 --> 4

11["states/DateEntryState.h"]
click 11 "_date_entry_state_8h_source.md#_date_entry_state_8h_source"
11 --> 2
11 --> 8
11 --> 3

8["states/EntryState.h"]
click 8 "_entry_state_8h_source.md#_entry_state_8h_source"
8 --> 2
8 --> 5
8 --> 9
8 --> 10
8 --> 11
8 --> 1

10["states/TextEntryState.h"]
click 10 "_text_entry_state_8h_source.md#_text_entry_state_8h_source"
10 --> 2
10 --> 8
10 --> 5

1["TimeEntryState.h"]
click 1 "_time_entry_state_8h.md#_time_entry_state_8h"
1 --> 2
1 --> 8
1 --> 5
1 --> 3

5["string"]

```

## Included by

* [EntryState.h](_entry_state_8h.md#_entry_state_8h)
* [TimeEntryState.cpp](_time_entry_state_8cpp.md#_time_entry_state_8cpp)

```mermaid
graph RL
5["TastyMenu.h"]
click 5 "_tasty_menu_8h_source.md#_tasty_menu_8h_source"

4["TastyState.h"]
click 4 "_tasty_state_8h_source.md#_tasty_state_8h_source"
3 --> 4
2 --> 4
5 --> 4
6 --> 4
7 --> 4
1 --> 4

6["TastyStateManager.h"]
click 6 "_tasty_state_manager_8h_source.md#_tasty_state_manager_8h_source"
5 --> 6

3["DateEntryState.h"]
click 3 "_date_entry_state_8h_source.md#_date_entry_state_8h_source"
2 --> 3

2["EntryState.h"]
click 2 "_entry_state_8h_source.md#_entry_state_8h_source"
3 --> 2
4 --> 2
7 --> 2
1 --> 2

7["TextEntryState.h"]
click 7 "_text_entry_state_8h_source.md#_text_entry_state_8h_source"
2 --> 7

1["TimeEntryState.h"]
click 1 "_time_entry_state_8h.md#_time_entry_state_8h"
2 --> 1

```

## Source

```cpp
#ifndef TASTY_TIME_ENTRY_STATE_H
#define TASTY_TIME_ENTRY_STATE_H

#include <TastyState.h>
#include "EntryState.h"
#include <string>
#include <tastyDefs.h>

class TimeEntryState : public EntryState<DateTimeObj, TimeEntryState> {
public:
    uint8_t editIndex = 1;
    TimeEntryState(String name, DateTimeObj data, handler_t saveFn, TastyState* returnState);
    void increase();
    void decrease();
    void adjustIndexUp();
    void adjustIndexDown();
};





#endif
```

[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)
[static]: https://img.shields.io/badge/-static-lightgrey (static)
[private]: https://img.shields.io/badge/-private-red (private)
[Markdown]: https://img.shields.io/badge/language-Markdown-blue (Markdown)