<a name="line-1"></a>
# TastyMenu.h

<!-- @import "[TOC]" {cmd="toc" depthFrom=1 depthTo=6 orderedList=false} -->

<!-- code_chunk_output -->

- [TastyMenu.h](#tastymenuh)
    - [🔧 TastyState* head = nullptr](#-tastystate-head--nullptr)
    - [🔧 TastyMenu* backMenu = nullptr](#-tastymenu-backmenu--nullptr)
    - [🔧 uint8_t length = 0](#-uint8_t-length--0)
    - [💡 TastyMenu(uint8_t len, ...)](#-tastymenuuint8_t-len-)
    - [💡 static bool activateSubMenu(TastyState* state, void*)](#-static-bool-activatesubmenutastystate-state-void)
    - [💡 static bool activateBackMenu(TastyState* state, void*)](#-static-bool-activatebackmenutastystate-state-void)
    - [💡 void addTimeoutToState(TastyState* state)](#-void-addtimeouttostatetastystate-state)
    - [💡 void addNextMenuState(TastyState* existingState, TastyState* newState)](#-void-addnextmenustatetastystate-existingstate-tastystate-newstate)
    - [💡 void addPreviousMenuState(TastyState* existingState, TastyState* newState)](#-void-addpreviousmenustatetastystate-existingstate-tastystate-newstate)
    - [💡 void addSubmenu(TastyState* existingState, TastyMenu* menu)](#-void-addsubmenutastystate-existingstate-tastymenu-menu)
    - [💡 void addBackMenu(TastyState* existingState, TastyMenu* menu)](#-void-addbackmenutastystate-existingstate-tastymenu-menu)

<!-- /code_chunk_output -->


> TastyMenu header file, manages setting up states for use as a menu.

The TastyMenu class is designed to manage a menu system where each menu can contain multiple states. It allows for the creation of submenus, back navigation, and timeout handling for menu states. This class is particularly useful in applications where a user interface requires a structured menu system.

Example usage:
```c++
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

@author Brian Kelley
@date 2023-12-09

<a name="line-47"></a>
### 🔧 TastyState* head = nullptr

```cpp
TastyState* head = nullptr
```

Pointer to the head state of the menu.

<a name="line-51"></a>
### 🔧 TastyMenu* backMenu = nullptr

```cpp
TastyMenu* backMenu = nullptr
```

Pointer to the previous menu.

<a name="line-55"></a>
### 🔧 uint8_t length = 0

```cpp
uint8_t length = 0
```

Number of states in the menu.

<a name="line-65"></a>
### 💡 TastyMenu(uint8_t len, ...)

```cpp
TastyMenu(uint8_t len, ...)
```

Parameter | type | Descirption
| --- | --- | --- |
| len | uint8_t | The length of the menu. |
| ... | TastyState* |The states to add to the menu. |

*> TastyMenu constructor. Pass in the length and then the states to add.

```c++
TastyMenu( 2, &stateOne, &stateTwo );
```

<a name="line-81"></a>
### 💡 static bool activateSubMenu(TastyState* state, void*)

```cpp
static bool activateSubMenu(TastyState* state, void*)
```

Activates a submenu.

| Name   | Type        | Description                                           |
|--------|-------------|-------------------------------------------------------|
| state  | TastyState* | Pointer to the TastyState to activate the submenu.   |
|        | void*      | Additional data for submenu activation (if needed).  |

<a name="line-91"></a>
### 💡 static bool activateBackMenu(TastyState* state, void*)

```cpp
static bool activateBackMenu(TastyState* state, void*)
```

Activates the back menu.

| Name   | Type        | Description                                           |
|--------|-------------|-------------------------------------------------------|
| state  | TastyState* | Pointer to the TastyState to activate the back menu. |
|        | void*      | Additional data for back menu activation (if needed).|

<a name="line-101"></a>
### 💡 void addTimeoutToState(TastyState* state)

```cpp
void addTimeoutToState(TastyState* state)
```

Adds a timeout to a specific state.

| Name   | Type        | Description                                           |
|--------|-------------|-------------------------------------------------------|
| state  | TastyState* | Pointer to the TastyState to which the timeout will be added. |

<a name="line-110"></a>
### 💡 void addNextMenuState(TastyState* existingState, TastyState* newState)

```cpp
void addNextMenuState(TastyState* existingState, TastyState* newState)
```

Adds a new state after an existing state.

| Name            | Type        | Description                                           |
|-----------------|-------------|-------------------------------------------------------|
| existingState   | TastyState* | Pointer to the existing TastyState.                   |
| newState        | TastyState* | Pointer to the new TastyState to be added.           |

<a name="line-120"></a>
### 💡 void addPreviousMenuState(TastyState* existingState, TastyState* newState)

```cpp
void addPreviousMenuState(TastyState* existingState, TastyState* newState)
```

Adds a new state before an existing state.

| Name            | Type        | Description                                           |
|-----------------|-------------|-------------------------------------------------------|
| existingState   | TastyState* | Pointer to the existing TastyState.                   |
| newState        | TastyState* | Pointer to the new TastyState to be added.           |

<a name="line-130"></a>
### 💡 void addSubmenu(TastyState* existingState, TastyMenu* menu)

```cpp
void addSubmenu(TastyState* existingState, TastyMenu* menu)
```

Adds a submenu to an existing state.

| Name            | Type        | Description                                           |
|-----------------|-------------|-------------------------------------------------------|
| existingState   | TastyState* | Pointer to the existing TastyState.                   |
| menu            | TastyMenu*  | Pointer to the TastyMenu to be added as a submenu.    |

<a name="line-140"></a>
### 💡 void addBackMenu(TastyState* existingState, TastyMenu* menu)

```cpp
void addBackMenu(TastyState* existingState, TastyMenu* menu)
```

Adds a back menu to an existing state.

| Name            | Type        | Description                                           |
|-----------------|-------------|-------------------------------------------------------|
| existingState   | TastyState* | Pointer to the existing TastyState.                   |
| menu            | TastyMenu*  | Pointer to the TastyMenu to be added as a back menu.  |
