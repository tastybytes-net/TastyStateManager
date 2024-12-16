<a id="_date_entry_state_8cpp"></a>
# File DateEntryState.cpp

![][C++]

**Location**: `src/states/DateEntryState.cpp`





## Includes

* [../../include/states/DateEntryState.h](_date_entry_state_8h.md#_date_entry_state_8h)
* <TastyDefs.h>

```mermaid
graph LR
5["Arduino.h"]

10["EntryState.tpp"]

8["RTClib.h"]

4["TastyDefs.h"]
click 4 "_tasty_defs_8h_source.md#_tasty_defs_8h_source"
4 --> 5

3["TastyState.h"]
click 3 "_tasty_state_8h_source.md#_tasty_state_8h_source"
3 --> 4
3 --> 6
3 --> 7
3 --> 8
3 --> 9

7["logger.h"]
click 7 "logger_8h_source.md#logger_8h_source"
7 --> 5

2["../../include/states/DateEntryState.h"]
click 2 "_date_entry_state_8h_source.md#_date_entry_state_8h_source"
2 --> 3
2 --> 9
2 --> 4

9["states/EntryState.h"]
click 9 "_entry_state_8h_source.md#_entry_state_8h_source"
9 --> 3
9 --> 6
9 --> 10
9 --> 11
9 --> 2
9 --> 12

11["states/TextEntryState.h"]
click 11 "_text_entry_state_8h_source.md#_text_entry_state_8h_source"
11 --> 3
11 --> 9
11 --> 6

12["states/TimeEntryState.h"]
click 12 "_time_entry_state_8h_source.md#_time_entry_state_8h_source"
12 --> 3
12 --> 9
12 --> 6
12 --> 4

1["DateEntryState.cpp"]
click 1 "_date_entry_state_8cpp.md#_date_entry_state_8cpp"
1 --> 2
1 --> 4

6["string"]

```

## Source

```cpp
#include "../../include/states/DateEntryState.h"

#include <TastyDefs.h>

DateEntryState::DateEntryState(String name, DateTimeObj data, handler_t saveFn, TastyState* returnState) : EntryState::EntryState(name, 10, data, saveFn, returnState, this) {};
void DateEntryState::adjustIndexUp() {
    if (editIndex >= length) {
        editIndex = 1;
    }
    switch (editIndex) {
    case 8:
    case 7:
    case 6:
    case 5:
        editIndex = length - 1;
        break;
    case 3:
    case 2:
        editIndex = 4;
        break;
    case 0:
        editIndex = 1;
        break;
    }
}
void DateEntryState::adjustIndexDown() {
    if (editIndex < 0) {
        editIndex = length - 1;
    }
    switch (editIndex) {
    case 8:
    case 7:
    case 6:
    case 5:
        editIndex = 4;
        break;
    case 3:
    case 2:
        editIndex = 1;
        break;
    case 0:
        editIndex = length - 1;
        break;
    }
}
void DateEntryState::increase() {
    switch (editIndex) {
    case 0:
    case 1:
        data.month++;
        if (data.month > 12) {
            data.month = 1;
        }
        break;
    case 3:
    case 4:
        data.day++;
        if (data.day > 31) {
            data.day = 1;
        }
        break;
    default:
        data.year++;
        break;

    }

}
void DateEntryState::decrease() {
    switch (editIndex) {
    case 0:
    case 1:
        data.month--;
        if (data.month <= 0) {
            data.month = 12;
        }
        break;
    case 3:
    case 4:
        data.day--;
        if (data.day <= 0) {
            data.day = 31;
        }
        break;
    default:
        data.year--;
        break;
    }
}
```

[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)
[static]: https://img.shields.io/badge/-static-lightgrey (static)
[private]: https://img.shields.io/badge/-private-red (private)
[Markdown]: https://img.shields.io/badge/language-Markdown-blue (Markdown)