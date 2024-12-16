<a id="class_time_entry_state"></a>
# Class TimeEntryState

![][C++]
![][public]

**Definition**: `include/states/TimeEntryState.h` (line 9)





**Inherits from**:

* [EntryState\< DateTimeObj, TimeEntryState \>](class_entry_state.md#class_entry_state)

## Members

* [adjustIndexDown](class_time_entry_state.md#class_time_entry_state_1a19250e67381c972e8ebcf39270669513)
* [adjustIndexUp](class_time_entry_state.md#class_time_entry_state_1a08e46de9922ebf276fce0a8bd15034a0)
* [data](class_entry_state.md#class_entry_state_1ab59b7e059f9f52e972697c61b58c59fb)
* [decrease](class_time_entry_state.md#class_time_entry_state_1a0c6e6e0fc8f9cdf0dd99651d33a95314)
* [drawFn](class_entry_state.md#class_entry_state_1a26a63c705eb784b638c9e288c2d91090)
* [editIndex](class_time_entry_state.md#class_time_entry_state_1aae3a3fc32564415ded82fd174aedcc72)
* [editVal](class_entry_state.md#class_entry_state_1a0cf0d4f4d20446fc394e3e9e8d2793b1)
* [EntryState](class_entry_state.md#class_entry_state_1aa611659439a0b30596553e9cb0ea7230)
* [increase](class_time_entry_state.md#class_time_entry_state_1a319d9a3e6cf14370df7864b8d20504ba)
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
* [TimeEntryState](class_time_entry_state.md#class_time_entry_state_1ad2d44121be48d76272c0e2d0129c9092)

## Public attributes

<a id="class_time_entry_state_1aae3a3fc32564415ded82fd174aedcc72"></a>
### Variable editIndex

![][public]

**Definition**: `include/states/TimeEntryState.h` (line 11)

```cpp
uint8_t TimeEntryState::editIndex = 1
```







**Type**: uint8_t



## Public functions

<a id="class_time_entry_state_1ad2d44121be48d76272c0e2d0129c9092"></a>
### Function TimeEntryState

![][public]

```cpp
TimeEntryState::TimeEntryState(String name, DateTimeObj data, handler_t saveFn, TastyState *returnState)
```







**Parameters**:

* String **name**
* [DateTimeObj](struct_date_time_obj.md#struct_date_time_obj) **data**
* handler_t **saveFn**
* [TastyState](class_tasty_state.md#class_tasty_state) * **returnState**

**Return type**: 



<a id="class_time_entry_state_1a319d9a3e6cf14370df7864b8d20504ba"></a>
### Function increase

![][public]

```cpp
void TimeEntryState::increase()
```







**Return type**: void



<a id="class_time_entry_state_1a0c6e6e0fc8f9cdf0dd99651d33a95314"></a>
### Function decrease

![][public]

```cpp
void TimeEntryState::decrease()
```







**Return type**: void



<a id="class_time_entry_state_1a08e46de9922ebf276fce0a8bd15034a0"></a>
### Function adjustIndexUp

![][public]

```cpp
void TimeEntryState::adjustIndexUp()
```







**Return type**: void



<a id="class_time_entry_state_1a19250e67381c972e8ebcf39270669513"></a>
### Function adjustIndexDown

![][public]

```cpp
void TimeEntryState::adjustIndexDown()
```







**Return type**: void



[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)
[static]: https://img.shields.io/badge/-static-lightgrey (static)
[private]: https://img.shields.io/badge/-private-red (private)