<a id="_time_entry_state_8cpp"></a>
# File TimeEntryState.cpp

![][C++]

**Location**: `src/states/TimeEntryState.cpp`





## Includes

* [../../include/states/TimeEntryState.h](_time_entry_state_8h.md#_time_entry_state_8h)

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

12["states/DateEntryState.h"]
click 12 "_date_entry_state_8h_source.md#_date_entry_state_8h_source"
12 --> 3
12 --> 9
12 --> 4

9["states/EntryState.h"]
click 9 "_entry_state_8h_source.md#_entry_state_8h_source"
9 --> 3
9 --> 6
9 --> 10
9 --> 11
9 --> 12
9 --> 2

11["states/TextEntryState.h"]
click 11 "_text_entry_state_8h_source.md#_text_entry_state_8h_source"
11 --> 3
11 --> 9
11 --> 6

2["../../include/states/TimeEntryState.h"]
click 2 "_time_entry_state_8h_source.md#_time_entry_state_8h_source"
2 --> 3
2 --> 9
2 --> 6
2 --> 4

1["TimeEntryState.cpp"]
click 1 "_time_entry_state_8cpp.md#_time_entry_state_8cpp"
1 --> 2

6["string"]

```

## Source

```cpp
#include "../../include/states/TimeEntryState.h"

TimeEntryState::TimeEntryState(String name, DateTimeObj data, handler_t saveFn, TastyState* returnState) : EntryState::EntryState(name, 5, data, saveFn, returnState, this) {};
void TimeEntryState::adjustIndexUp() {
    if (editIndex >= length) {
        editIndex = 1;
    }
    switch (editIndex) {
    case 3:
    case 2:
        editIndex = 4;
        break;
    case 0:
        editIndex = 1;
        break;
    }
}
void TimeEntryState::adjustIndexDown() {
    if (editIndex < 0) {
        editIndex = length - 1;
    }
    switch (editIndex) {
    case 3:
    case 2:
        editIndex = 1;
        break;
    case 0:
        editIndex = length - 1;
        break;
    }
}
void TimeEntryState::increase() {
    switch (editIndex) {
    case 0:
    case 1:
        data.hour++;
        if (data.hour > 23) {
            data.hour = 0;
        }
        break;
    case 3:
    case 4:
        data.minute++;
        if (data.minute >= 60) {
            data.minute = 0;
        }
        break;
    }

}
void TimeEntryState::decrease() {
    switch (editIndex) {
    case 0:
    case 1:
        if (data.hour <= 0) {
            data.hour = 23;
        } else {
            data.hour--;
        }
        break;
    case 3:
    case 4:
        if (data.minute <= 0) {
            data.minute = 59;
        } else {
            data.minute--;
        }
        break;
    }
}
```

[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)
[static]: https://img.shields.io/badge/-static-lightgrey (static)
[private]: https://img.shields.io/badge/-private-red (private)
[Markdown]: https://img.shields.io/badge/language-Markdown-blue (Markdown)