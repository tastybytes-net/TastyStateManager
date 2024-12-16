<a id="class_tasty_menu"></a>
# Class TastyMenu

![][C++]
![][public]

**Definition**: `include/TastyMenu.h` (line 37)





## Members

* [activateBackMenu](class_tasty_menu.md#class_tasty_menu_1a84a6a50e9a559dbe69392acd29cd7291)
* [activateSubMenu](class_tasty_menu.md#class_tasty_menu_1af698fee221a2bd93944b17559e89d127)
* [addBackMenu](class_tasty_menu.md#class_tasty_menu_1aafcad30322884ff02eda904fe1b5f3a8)
* [addEvents](class_tasty_menu.md#class_tasty_menu_1a37c05ca23b14576d9572415dde1fcbb5)
* [addNextMenuState](class_tasty_menu.md#class_tasty_menu_1a1cf18ee0770c2e0705f773d44bc65a00)
* [addPreviousMenuState](class_tasty_menu.md#class_tasty_menu_1a708498fb2e8c47213be38e636e4ba02c)
* [addSubmenu](class_tasty_menu.md#class_tasty_menu_1a98960c9b7cad18f3c52d882c13b5c957)
* [addTimeoutToState](class_tasty_menu.md#class_tasty_menu_1af61be78dc4428db44c3bd2f56bba8102)
* [backMenu](class_tasty_menu.md#class_tasty_menu_1af44feb296262ad6a5cebc15be559e3ec)
* [calculateIndices](class_tasty_menu.md#class_tasty_menu_1aa2863983003900aa328f207b4e9576ba)
* [defaultMenuTimeout](class_tasty_menu.md#class_tasty_menu_1a77c090b77d4117a0701a609e1017319b)
* [defaultTimeoutState](class_tasty_menu.md#class_tasty_menu_1ae100a945aacb729b4240d5e656eb3b4e)
* [drawFn](class_tasty_menu.md#class_tasty_menu_1a43eb8dad1f539abadfa027811a3d21fa)
* [head](class_tasty_menu.md#class_tasty_menu_1ac5346c062cf47b41c6c954990df0bdbf)
* [initializeState](class_tasty_menu.md#class_tasty_menu_1a8b1da94675c538ef00ceccccd34bcce9)
* [length](class_tasty_menu.md#class_tasty_menu_1ad6b745dde37c335bdf5aa444e46a3ffb)
* [setDrawFn](class_tasty_menu.md#class_tasty_menu_1ab22be24e12a8052ea3d44cc070297481)
* [TastyMenu](class_tasty_menu.md#class_tasty_menu_1af1a927f798afc5720544cf954687e52d)
* [tastySM](class_tasty_menu.md#class_tasty_menu_1ab017c7bb32dbf02e6006733c641f52be)

## Private attributes

<a id="class_tasty_menu_1ab017c7bb32dbf02e6006733c641f52be"></a>
### Variable tastySM

![][private]

**Definition**: `include/TastyMenu.h` (line 39)

```cpp
TastyStateManager& TastyMenu::tastySM = [TastyStateManager::getInstance](class_tasty_state_manager.md#class_tasty_state_manager_1a3fe81c644f6597e8ee410a6d99b4e2d8)()
```







**Type**: [TastyStateManager](class_tasty_state_manager.md#class_tasty_state_manager) &

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::tastySM"}]}

## Public attributes

<a id="class_tasty_menu_1ac5346c062cf47b41c6c954990df0bdbf"></a>
### Variable head

![][public]

**Definition**: `include/TastyMenu.h` (line 47)

```cpp
TastyState* TastyMenu::head = nullptr
```

Pointer to the head state of the menu.





**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::head"}]}

<a id="class_tasty_menu_1af44feb296262ad6a5cebc15be559e3ec"></a>
### Variable backMenu

![][public]

**Definition**: `include/TastyMenu.h` (line 48)

```cpp
TastyMenu* TastyMenu::backMenu = nullptr
```

Pointer to the previous menu.





**Type**: [TastyMenu](class_tasty_menu.md#class_tasty_menu) *

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::backMenu"}]}

<a id="class_tasty_menu_1ad6b745dde37c335bdf5aa444e46a3ffb"></a>
### Variable length

![][public]

**Definition**: `include/TastyMenu.h` (line 49)

```cpp
uint8_t TastyMenu::length = 0
```

Number of states in the menu.





**Type**: uint8_t

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::length"}]}

## Public static attributes

<a id="class_tasty_menu_1a77c090b77d4117a0701a609e1017319b"></a>
### Variable defaultMenuTimeout

![][public]
![][static]

**Definition**: `include/TastyMenu.h` (line 51)

```cpp
uint16_t TastyMenu::defaultMenuTimeout
```

Default timeout for menu states.





**Type**: uint16_t

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::defaultMenuTimeout"}]}

<a id="class_tasty_menu_1ae100a945aacb729b4240d5e656eb3b4e"></a>
### Variable defaultTimeoutState

![][public]
![][static]

**Definition**: `include/TastyMenu.h` (line 52)

```cpp
TastyState * TastyMenu::defaultTimeoutState = nullptr
```

Default state to transition to on timeout.





**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::defaultTimeoutState"}]}

<a id="class_tasty_menu_1a43eb8dad1f539abadfa027811a3d21fa"></a>
### Variable drawFn

![][public]
![][static]

**Definition**: `include/TastyMenu.h` (line 53)

```cpp
handler_t TastyMenu::drawFn
```

Function pointer for drawing the menu.





**Type**: handler_t

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::drawFn"}]}

## Private functions

<a id="class_tasty_menu_1a8b1da94675c538ef00ceccccd34bcce9"></a>
### Function initializeState

![][private]

```cpp
void TastyMenu::initializeState(TastyState *state, uint8_t index)
```

Initializes a state with event handlers and timeout settings.

This function sets up the event handlers for a given state and assigns a timeout if it is not already set.






**Parameters**:

* **state**: Pointer to the [TastyState](class_tasty_state.md#class_tasty_state) to initialize.
* **index**: The index of the state in the menu.



**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **state**
* uint8_t **index**

**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::initializeState"}]}

<a id="class_tasty_menu_1aa2863983003900aa328f207b4e9576ba"></a>
### Function calculateIndices

![][private]

```cpp
void TastyMenu::calculateIndices(TastyState *initialState)
```

Calculates the indices of menu items for display purposes.

This function traverses the menu states and assigns an index to each state, which can be useful for displaying a position indicator.






**Parameters**:

* **curr**: Pointer to the current [TastyState](class_tasty_state.md#class_tasty_state) from which to start calculating indices.



**Parameters**:

* curr[TastyState](class_tasty_state.md#class_tasty_state) * **initialState**

**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::calculateIndices"}]}

<a id="class_tasty_menu_1a37c05ca23b14576d9572415dde1fcbb5"></a>
### Function addEvents

![][private]

```cpp
void TastyMenu::addEvents(TastyState *state)
```







**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **state**

**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::addEvents"}]}

## Public static functions

<a id="class_tasty_menu_1ab22be24e12a8052ea3d44cc070297481"></a>
### Function setDrawFn

![][public]
![][static]

```cpp
void TastyMenu::setDrawFn(handler_t dFn)
```

Set the drawing function.





**Parameters**:

* handler_t **dFn**

**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::setDrawFn"}]}

<a id="class_tasty_menu_1af698fee221a2bd93944b17559e89d127"></a>
### Function activateSubMenu

![][public]
![][static]

```cpp
bool TastyMenu::activateSubMenu(TastyState *state, void *)
```

Activates a submenu.

Activates a submenu if it exists.





This function checks if a state has a forward menu and activates it if available.






**Parameters**:

* **state**: Pointer to the [TastyState](class_tasty_state.md#class_tasty_state) to check for a submenu.
* **unused**: Unused parameter for compatibility.


**Returns**:

true if the submenu was activated, false otherwise.



**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **state**
* void *

**Return type**: bool

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::activateSubMenu"}]}

<a id="class_tasty_menu_1a84a6a50e9a559dbe69392acd29cd7291"></a>
### Function activateBackMenu

![][public]
![][static]

```cpp
bool TastyMenu::activateBackMenu(TastyState *state, void *)
```

Activates the back menu.

Activates a back menu if it exists.





This function checks if a state has a back menu and activates it if available.






**Parameters**:

* **state**: Pointer to the [TastyState](class_tasty_state.md#class_tasty_state) to check for a back menu.
* **unused**: Unused parameter for compatibility.


**Returns**:

true if the back menu was activated, false otherwise.



**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **state**
* void *

**Return type**: bool

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::activateBackMenu"}]}

## Public functions

<a id="class_tasty_menu_1af1a927f798afc5720544cf954687e52d"></a>
### Function TastyMenu

![][public]

```cpp
TastyMenu::TastyMenu(uint8_t len,...)
```







**Parameters**:

* uint8_t **len**
* ...

**Return type**: 

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::TastyMenu"}]}

<a id="class_tasty_menu_1af61be78dc4428db44c3bd2f56bba8102"></a>
### Function addTimeoutToState

![][public]

```cpp
void TastyMenu::addTimeoutToState(TastyState *state)
```

Adds a timeout to a specific state.

Adds a timeout to a state if not already set.





This function checks if the state has a timeout set; if not, it assigns the default menu timeout. It also sets the default timeout state if not already assigned.






**Parameters**:

* **state**: Pointer to the [TastyState](class_tasty_state.md#class_tasty_state) to which the timeout will be added.



**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **state**

**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::addTimeoutToState"}]}

<a id="class_tasty_menu_1a1cf18ee0770c2e0705f773d44bc65a00"></a>
### Function addNextMenuState

![][public]

```cpp
void TastyMenu::addNextMenuState(TastyState *existingState, TastyState *newState)
```

Adds a new state after an existing state.





**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **existingState**
* [TastyState](class_tasty_state.md#class_tasty_state) * **newState**

**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::addNextMenuState"}]}

<a id="class_tasty_menu_1a708498fb2e8c47213be38e636e4ba02c"></a>
### Function addPreviousMenuState

![][public]

```cpp
void TastyMenu::addPreviousMenuState(TastyState *existingState, TastyState *newState)
```

Adds a new state before an existing state.





**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **existingState**
* [TastyState](class_tasty_state.md#class_tasty_state) * **newState**

**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::addPreviousMenuState"}]}

<a id="class_tasty_menu_1a98960c9b7cad18f3c52d882c13b5c957"></a>
### Function addSubmenu

![][public]

```cpp
void TastyMenu::addSubmenu(TastyState *existingState, TastyMenu *menu)
```

Adds a submenu to an existing state.





**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **existingState**
* [TastyMenu](class_tasty_menu.md#class_tasty_menu) * **menu**

**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::addSubmenu"}]}

<a id="class_tasty_menu_1aafcad30322884ff02eda904fe1b5f3a8"></a>
### Function addBackMenu

![][public]

```cpp
void TastyMenu::addBackMenu(TastyState *existingState, TastyMenu *menu)
```

Adds a back menu to an existing state.





**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **existingState**
* [TastyMenu](class_tasty_menu.md#class_tasty_menu) * **menu**

**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"TastyMenu::addBackMenu"}]}

[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)
[static]: https://img.shields.io/badge/-static-lightgrey (static)
[private]: https://img.shields.io/badge/-private-red (private)