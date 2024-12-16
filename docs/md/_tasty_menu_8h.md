<a id="_tasty_menu_8h"></a>
# File TastyMenu.h

![][C++]

**Location**: `include/TastyMenu.h`

[TastyMenu](class_tasty_menu.md#class_tasty_menu) header file, manages setting up states for use as a menu.

The [TastyMenu](class_tasty_menu.md#class_tasty_menu) class is designed to manage a menu system where each menu can contain multiple states. It allows for the creation of submenus, back navigation, and timeout handling for menu states. This class is particularly useful in applications where a user interface requires a structured menu system.





Example usage: ```cpp
TastyState* stateOne = new TastyState( "State One");
TastyState* stateTwo = new TastyState( "State Two");
TastyMenu myMenu(2, &stateOne, &stateTwo);

// Adding a submenu
TastyMenu subMenu(1, &stateThree);
myMenu.addSubmenu(&stateOne, &subMenu);

// Adding a back menu
TastyMenu backMenu(1, &stateBack);
myMenu.addBackMenu(&stateTwo, &backMenu);
```






**author**\
Brian Kelley


**date**\
2023-12-09

## Classes

* [TastyMenu](class_tasty_menu.md#class_tasty_menu)

## Includes

* [TastyDefs.h](_tasty_defs_8h.md#_tasty_defs_8h)
* [TastyState.h](_tasty_state_8h.md#_tasty_state_8h)
* [TastyStateManager.h](_tasty_state_manager_8h.md#_tasty_state_manager_8h)
* <logger.h>

```mermaid
graph LR
3["Arduino.h"]

9["EntryState.tpp"]

14["OneButton.h"]

7["RTClib.h"]

2["TastyDefs.h"]
click 2 "_tasty_defs_8h_source.md#_tasty_defs_8h_source"
2 --> 3

1["TastyMenu.h"]
click 1 "_tasty_menu_8h.md#_tasty_menu_8h"
1 --> 2
1 --> 4
1 --> 13
1 --> 6

4["TastyState.h"]
click 4 "_tasty_state_8h_source.md#_tasty_state_8h_source"
4 --> 2
4 --> 5
4 --> 6
4 --> 7
4 --> 8

13["TastyStateManager.h"]
click 13 "_tasty_state_manager_8h_source.md#_tasty_state_manager_8h_source"
13 --> 14
13 --> 15
13 --> 2
13 --> 5
13 --> 4
13 --> 6

6["logger.h"]
click 6 "logger_8h_source.md#logger_8h_source"
6 --> 3

11["states/DateEntryState.h"]
click 11 "_date_entry_state_8h_source.md#_date_entry_state_8h_source"
11 --> 4
11 --> 8
11 --> 2

8["states/EntryState.h"]
click 8 "_entry_state_8h_source.md#_entry_state_8h_source"
8 --> 4
8 --> 5
8 --> 9
8 --> 10
8 --> 11
8 --> 12

10["states/TextEntryState.h"]
click 10 "_text_entry_state_8h_source.md#_text_entry_state_8h_source"
10 --> 4
10 --> 8
10 --> 5

12["states/TimeEntryState.h"]
click 12 "_time_entry_state_8h_source.md#_time_entry_state_8h_source"
12 --> 4
12 --> 8
12 --> 5
12 --> 2

15["arduino-timer.h"]

5["string"]

```

## Included by

* [TastyMenu.cpp](_tasty_menu_8cpp.md#_tasty_menu_8cpp)

## Source

```cpp

#ifndef TASTY_MENU_H
#define TASTY_MENU_H

#include "TastyDefs.h"
#include "TastyState.h"
#include "TastyStateManager.h"
#include <logger.h>

class TastyMenu {
private:
    TastyStateManager& tastySM = TastyStateManager::getInstance();

    void initializeState(TastyState* state, uint8_t index);

    void calculateIndices(TastyState* initialState);
    void addEvents(TastyState* state);

public:
    TastyState* head = nullptr; 
    TastyMenu* backMenu = nullptr; 
    uint8_t length = 0; 

    static uint16_t defaultMenuTimeout; 
    static TastyState* defaultTimeoutState; 
    static handler_t drawFn; 
    static void setDrawFn(handler_t dFn); 

    TastyMenu(uint8_t len, ...);

    

    static bool activateSubMenu(TastyState* state, void*); 
    static bool activateBackMenu(TastyState* state, void*); 

    void addTimeoutToState(TastyState* state); 

    void addNextMenuState(TastyState* existingState, TastyState* newState); 
    void addPreviousMenuState(TastyState* existingState, TastyState* newState); 

    void addSubmenu(TastyState* existingState, TastyMenu* menu); 
    void addBackMenu(TastyState* existingState, TastyMenu* menu); 
};

#endif
```

[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)
[static]: https://img.shields.io/badge/-static-lightgrey (static)
[private]: https://img.shields.io/badge/-private-red (private)
[Markdown]: https://img.shields.io/badge/language-Markdown-blue (Markdown)