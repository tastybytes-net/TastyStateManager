<a id="class_date_entry_state"></a>
# Class DateEntryState

![][C++]
![][public]

**Definition**: `include/states/DateEntryState.h` (line 8)





**Inherits from**:

* [EntryState\< DateTimeObj, DateEntryState \>](class_entry_state.md#class_entry_state)

## Members

* [adjustIndexDown](class_date_entry_state.md#class_date_entry_state_1ac299d7c5be3e0dbbe62771d3a8071c2c)
* [adjustIndexUp](class_date_entry_state.md#class_date_entry_state_1a2e506a99f316481cfb4cc82ebf8c7dd9)
* [data](class_entry_state.md#class_entry_state_1ab59b7e059f9f52e972697c61b58c59fb)
* [DateEntryState](class_date_entry_state.md#class_date_entry_state_1a392a4fc68dd6370fea14e9df185f3a47)
* [decrease](class_date_entry_state.md#class_date_entry_state_1a135b5a88b110cac5bdf3917abaf1f6af)
* [drawFn](class_entry_state.md#class_entry_state_1a26a63c705eb784b638c9e288c2d91090)
* [editIndex](class_date_entry_state.md#class_date_entry_state_1ab78771c8e67355e084530606d0fa39b5)
* [editVal](class_entry_state.md#class_entry_state_1a0cf0d4f4d20446fc394e3e9e8d2793b1)
* [EntryState](class_entry_state.md#class_entry_state_1aa611659439a0b30596553e9cb0ea7230)
* [increase](class_date_entry_state.md#class_date_entry_state_1ac0b1cd5e28c0d9c9229be80af390713c)
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

<a id="class_date_entry_state_1ab78771c8e67355e084530606d0fa39b5"></a>
### Variable editIndex

![][public]

**Definition**: `include/states/DateEntryState.h` (line 10)

```cpp
uint8_t DateEntryState::editIndex = 1
```







**Type**: uint8_t

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"DateEntryState::editIndex"}]}

## Public functions

<a id="class_date_entry_state_1a392a4fc68dd6370fea14e9df185f3a47"></a>
### Function DateEntryState

![][public]

```cpp
DateEntryState::DateEntryState(String name, DateTimeObj data, handler_t saveFn, TastyState *returnState)
```







**Parameters**:

* String **name**
* [DateTimeObj](struct_date_time_obj.md#struct_date_time_obj) **data**
* handler_t **saveFn**
* [TastyState](class_tasty_state.md#class_tasty_state) * **returnState**

**Return type**: 

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"DateEntryState::DateEntryState"}]}

<a id="class_date_entry_state_1ac0b1cd5e28c0d9c9229be80af390713c"></a>
### Function increase

![][public]

```cpp
void DateEntryState::increase()
```







**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"DateEntryState::increase"}]}

<a id="class_date_entry_state_1a135b5a88b110cac5bdf3917abaf1f6af"></a>
### Function decrease

![][public]

```cpp
void DateEntryState::decrease()
```







**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"DateEntryState::decrease"}]}

<a id="class_date_entry_state_1a2e506a99f316481cfb4cc82ebf8c7dd9"></a>
### Function adjustIndexUp

![][public]

```cpp
void DateEntryState::adjustIndexUp()
```







**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"DateEntryState::adjustIndexUp"}]}

<a id="class_date_entry_state_1ac299d7c5be3e0dbbe62771d3a8071c2c"></a>
### Function adjustIndexDown

![][public]

```cpp
void DateEntryState::adjustIndexDown()
```







**Return type**: void

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"DateEntryState::adjustIndexDown"}]}

[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)