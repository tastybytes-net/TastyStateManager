<a id="_text_entry_state_8cpp"></a>
# File TextEntryState.cpp

![][C++]

**Location**: `src/states/TextEntryState.cpp`





## Includes

* [../../include/states/TextEntryState.h](_text_entry_state_8h.md#_text_entry_state_8h)

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

11["states/DateEntryState.h"]
click 11 "_date_entry_state_8h_source.md#_date_entry_state_8h_source"
11 --> 3
11 --> 9
11 --> 4

9["states/EntryState.h"]
click 9 "_entry_state_8h_source.md#_entry_state_8h_source"
9 --> 3
9 --> 6
9 --> 10
9 --> 2
9 --> 11
9 --> 12

2["../../include/states/TextEntryState.h"]
click 2 "_text_entry_state_8h_source.md#_text_entry_state_8h_source"
2 --> 3
2 --> 9
2 --> 6

12["states/TimeEntryState.h"]
click 12 "_time_entry_state_8h_source.md#_time_entry_state_8h_source"
12 --> 3
12 --> 9
12 --> 6
12 --> 4

1["TextEntryState.cpp"]
click 1 "_text_entry_state_8cpp.md#_text_entry_state_8cpp"
1 --> 2

6["string"]

```

## Source

```cpp
#include "../../include/states/TextEntryState.h"

TextEntryState::TextEntryState(String name, uint8_t length, String data_, handler_t saveFn, TastyState* returnState, bool caseSensitive) :
    EntryState::EntryState(name, length, data_, saveFn, returnState, this),
    caseSensitive{ caseSensitive }
{
    originalData = String(data_);
}


// handler_t EntryState<DataType, D>::drawFn;

// template <typename DataType, typename D>
void TextEntryState::setDrawFn(handler_t dFn) {
    TextEntryState::drawFn = dFn;
}

void TextEntryState::increase() {
    // TextEntryState* entry = (TextEntryState*)(entry);

    data[editIndex]++;
    if (data[editIndex] > '9' && data[editIndex] < 'A') {
        data[editIndex] = 'A';
    } else if (data[editIndex] > 'Z' && (caseSensitive && data[editIndex] < 'a')) {
        data[editIndex] = 'a';
    } else if ((!caseSensitive && data[editIndex] > 'Z') || (caseSensitive && data[editIndex] > 'z')) {
        data[editIndex] = '0';
    }
}


void TextEntryState::decrease() {
    // TextEntryState* entry = (TextEntryState*)(entry);
    data[editIndex]--;
    if (data[editIndex] < '0') {
        if (caseSensitive) {
            data[editIndex] = 'z';
        } else {
            data[editIndex] = 'Z';
        }
    } else if (data[editIndex] < 'A' && data[editIndex] > '9') {
        data[editIndex] = '9';
    } else if (data[editIndex] < 'a' && data[editIndex] > 'Z') {
        data[editIndex] = 'Z';
    }
}
void TextEntryState::adjustIndexUp() {

}
void TextEntryState::adjustIndexDown() {

}
```

[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)
[static]: https://img.shields.io/badge/-static-lightgrey (static)
[private]: https://img.shields.io/badge/-private-red (private)
[Markdown]: https://img.shields.io/badge/language-Markdown-blue (Markdown)