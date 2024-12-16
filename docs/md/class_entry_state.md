<a id="class_entry_state"></a>
# Class EntryState

![][C++]
![][public]

**Definition**: `include/states/EntryState.h` (line 8)





**Template parameters**:

* typename DataType
* typename D

## Members

* [adjustIndexDown](class_entry_state.md#class_entry_state_1a30fa330eda96cbcd2c6a2c7d76bc6286)
* [adjustIndexUp](class_entry_state.md#class_entry_state_1afe1ff3d6d1f7232fc9af7c48b08a54fe)
* [data](class_entry_state.md#class_entry_state_1ab59b7e059f9f52e972697c61b58c59fb)
* [decrease](class_entry_state.md#class_entry_state_1a5f1ce1a14dabc884a848914dbc31ca57)
* [drawFn](class_entry_state.md#class_entry_state_1a26a63c705eb784b638c9e288c2d91090)
* [editIndex](class_entry_state.md#class_entry_state_1ade8dfbb4a7dc66557e2e2b2c0651aa2d)
* [editVal](class_entry_state.md#class_entry_state_1a0cf0d4f4d20446fc394e3e9e8d2793b1)
* [EntryState](class_entry_state.md#class_entry_state_1aa611659439a0b30596553e9cb0ea7230)
* [increase](class_entry_state.md#class_entry_state_1aa084c90e0415d3dc7337b4c467084d75)
* [inEdit](class_entry_state.md#class_entry_state_1a5a0390d30529f33b7192b5d571faf11b)
* [length](class_entry_state.md#class_entry_state_1a0cc083de69e8442af50240f00338e86d)
* [onClick](class_entry_state.md#class_entry_state_1ae4c99104aa3bef58748022da74865ff0)
* [onDown](class_entry_state.md#class_entry_state_1a43512a0e5a5c1b7729a2c58a9ef04643)
* [onLeft](class_entry_state.md#class_entry_state_1ad775bb40c2fec2edfdf2226425a646a1)
* [onRight](class_entry_state.md#class_entry_state_1a937e240aaa9d689b397581fad110ad38)
* [onUp](class_entry_state.md#class_entry_state_1a59d35412472caf27d243ce9698b26cc3)
* [originalData](class_entry_state.md#class_entry_state_1a6abebe19b450f5323555c1fe11e00045)
* [reset](class_entry_state.md#class_entry_state_1a9d3c567b81a85de4d5793dc38c619092)
* [saveFn](class_entry_state.md#class_entry_state_1a4c197fca2ff66cd2197410fdf0ba2653)
* [saveState](class_entry_state.md#class_entry_state_1ab1e74c4e8e1e0673fa9aba0484ffff30)
* [setDrawFn](class_entry_state.md#class_entry_state_1afb0e9fe999378bd08363c52d2329da3f)
* [state](class_entry_state.md#class_entry_state_1a12cbe9558ab5262256df66ac4083b6a1)

## Public attributes

<a id="class_entry_state_1a12cbe9558ab5262256df66ac4083b6a1"></a>
### Variable state

![][public]

**Definition**: `include/states/EntryState.h` (line 10)

```cpp
TastyState* EntryState< DataType, D >::state
```







**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::state"}]}

<a id="class_entry_state_1a5a0390d30529f33b7192b5d571faf11b"></a>
### Variable inEdit

![][public]

**Definition**: `include/states/EntryState.h` (line 11)

```cpp
bool EntryState< DataType, D >::inEdit = false
```







**Type**: bool

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::inEdit"}]}

<a id="class_entry_state_1ade8dfbb4a7dc66557e2e2b2c0651aa2d"></a>
### Variable editIndex

![][public]

**Definition**: `include/states/EntryState.h` (line 12)

```cpp
uint8_t EntryState< DataType, D >::editIndex = 0
```







**Type**: uint8_t

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::editIndex"}]}

<a id="class_entry_state_1a6abebe19b450f5323555c1fe11e00045"></a>
### Variable originalData

![][public]

**Definition**: `include/states/EntryState.h` (line 13)

```cpp
DataType EntryState< DataType, D >::originalData
```







**Type**: DataType

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::originalData"}]}

<a id="class_entry_state_1ab59b7e059f9f52e972697c61b58c59fb"></a>
### Variable data

![][public]

**Definition**: `include/states/EntryState.h` (line 14)

```cpp
DataType EntryState< DataType, D >::data
```







**Type**: DataType

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::data"}]}

<a id="class_entry_state_1a0cc083de69e8442af50240f00338e86d"></a>
### Variable length

![][public]

**Definition**: `include/states/EntryState.h` (line 15)

```cpp
uint8_t EntryState< DataType, D >::length
```







**Type**: uint8_t

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::length"}]}

<a id="class_entry_state_1a0cf0d4f4d20446fc394e3e9e8d2793b1"></a>
### Variable editVal

![][public]

**Definition**: `include/states/EntryState.h` (line 16)

```cpp
char EntryState< DataType, D >::editVal = '0'
```







**Type**: char

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::editVal"}]}

<a id="class_entry_state_1a4c197fca2ff66cd2197410fdf0ba2653"></a>
### Variable saveFn

![][public]

**Definition**: `include/states/EntryState.h` (line 17)

```cpp
handler_t EntryState< DataType, D >::saveFn
```







**Type**: handler_t

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::saveFn"}]}

<a id="class_entry_state_1ab1e74c4e8e1e0673fa9aba0484ffff30"></a>
### Variable saveState

![][public]

**Definition**: `include/states/EntryState.h` (line 19)

```cpp
TastyState* EntryState< DataType, D >::saveState
```







**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::saveState"}]}

## Public static attributes

<a id="class_entry_state_1a26a63c705eb784b638c9e288c2d91090"></a>
### Variable drawFn

![][public]
![][static]

**Definition**: `include/states/EntryState.h` (line 21)

```cpp
handler_t EntryState< DataType, D >::drawFn
```







**Type**: handler_t

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::drawFn"}]}

## Public static functions

<a id="class_entry_state_1afb0e9fe999378bd08363c52d2329da3f"></a>
### Function setDrawFn

![][public]
![][static]

```cpp
static void EntryState< DataType, D >::setDrawFn(handler_t dFn)
```







**Parameters**:

* handler_t **dFn**

**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::setDrawFn"}]}

<a id="class_entry_state_1ae4c99104aa3bef58748022da74865ff0"></a>
### Function onClick

![][public]
![][static]

```cpp
static bool EntryState< DataType, D >::onClick(TastyState *state, void *)
```







**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **state**
* void *

**Return type**: bool

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::onClick"}]}

<a id="class_entry_state_1a59d35412472caf27d243ce9698b26cc3"></a>
### Function onUp

![][public]
![][static]

```cpp
static bool EntryState< DataType, D >::onUp(TastyState *state, void *)
```







**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **state**
* void *

**Return type**: bool

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::onUp"}]}

<a id="class_entry_state_1a43512a0e5a5c1b7729a2c58a9ef04643"></a>
### Function onDown

![][public]
![][static]

```cpp
static bool EntryState< DataType, D >::onDown(TastyState *state, void *)
```







**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **state**
* void *

**Return type**: bool

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::onDown"}]}

<a id="class_entry_state_1a937e240aaa9d689b397581fad110ad38"></a>
### Function onRight

![][public]
![][static]

```cpp
static bool EntryState< DataType, D >::onRight(TastyState *state, void *)
```







**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **state**
* void *

**Return type**: bool

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::onRight"}]}

<a id="class_entry_state_1ad775bb40c2fec2edfdf2226425a646a1"></a>
### Function onLeft

![][public]
![][static]

```cpp
static bool EntryState< DataType, D >::onLeft(TastyState *state, void *)
```







**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **state**
* void *

**Return type**: bool

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::onLeft"}]}

<a id="class_entry_state_1a9d3c567b81a85de4d5793dc38c619092"></a>
### Function reset

![][public]
![][static]

```cpp
static bool EntryState< DataType, D >::reset(TastyState *state, void *)
```







**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **state**
* void *

**Return type**: bool

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::reset"}]}

## Public functions

<a id="class_entry_state_1aa611659439a0b30596553e9cb0ea7230"></a>
### Function EntryState

![][public]

```cpp
EntryState< DataType, D >::EntryState(String name, uint8_t length, DataType data, handler_t saveFn, TastyState *returnState, D *ref)
```







**Parameters**:

* String **name**
* uint8_t **length**
* DataType **data**
* handler_t **saveFn**
* [TastyState](class_tasty_state.md#class_tasty_state) * **returnState**
* D * **ref**

**Return type**: 

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::EntryState"}]}

<a id="class_entry_state_1aa084c90e0415d3dc7337b4c467084d75"></a>
### Function increase

![][public]

```cpp
void EntryState< DataType, D >::increase()
```







**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::increase"}]}

<a id="class_entry_state_1a5f1ce1a14dabc884a848914dbc31ca57"></a>
### Function decrease

![][public]

```cpp
void EntryState< DataType, D >::decrease()
```







**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::decrease"}]}

<a id="class_entry_state_1afe1ff3d6d1f7232fc9af7c48b08a54fe"></a>
### Function adjustIndexUp

![][public]

```cpp
void EntryState< DataType, D >::adjustIndexUp()
```







**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::adjustIndexUp"}]}

<a id="class_entry_state_1a30fa330eda96cbcd2c6a2c7d76bc6286"></a>
### Function adjustIndexDown

![][public]

```cpp
void EntryState< DataType, D >::adjustIndexDown()
```







**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"EntryState::adjustIndexDown"}]}

[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)
[static]: https://img.shields.io/badge/-static-lightgrey (static)