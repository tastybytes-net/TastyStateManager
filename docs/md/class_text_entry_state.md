<a id="class_text_entry_state"></a>
# Class TextEntryState

![][C++]
![][public]

**Definition**: `include/states/TextEntryState.h` (line 8)





**Inherits from**:

* [EntryState\< String, TextEntryState \>](class_entry_state.md#class_entry_state)

## Members

* [adjustIndexDown](class_text_entry_state.md#class_text_entry_state_1a147cea6ed8fb9087dacb83488b8cb847)
* [adjustIndexUp](class_text_entry_state.md#class_text_entry_state_1ac38ac0d60008993e4852aebc28ef0f8c)
* [caseSensitive](class_text_entry_state.md#class_text_entry_state_1af0538f05d59c9aefb2870e54bccfd5c2)
* [data](class_entry_state.md#class_entry_state_1ab59b7e059f9f52e972697c61b58c59fb)
* [decrease](class_text_entry_state.md#class_text_entry_state_1a81062a6d23420b68b8d2e1df25a38db8)
* [drawFn](class_entry_state.md#class_entry_state_1a26a63c705eb784b638c9e288c2d91090)
* [editIndex](class_entry_state.md#class_entry_state_1ade8dfbb4a7dc66557e2e2b2c0651aa2d)
* [editVal](class_entry_state.md#class_entry_state_1a0cf0d4f4d20446fc394e3e9e8d2793b1)
* [EntryState](class_entry_state.md#class_entry_state_1aa611659439a0b30596553e9cb0ea7230)
* [increase](class_text_entry_state.md#class_text_entry_state_1a820e5717a8a772737fc33d0ba59c5244)
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
* [setDrawFn](class_text_entry_state.md#class_text_entry_state_1a03aad9626ea3a98b1e8c40fde67112eb)
* [state](class_entry_state.md#class_entry_state_1a12cbe9558ab5262256df66ac4083b6a1)
* [TextEntryState](class_text_entry_state.md#class_text_entry_state_1ab863f8b2aabc0839bd1ef34b63fe7ae5)

## Public attributes

<a id="class_text_entry_state_1af0538f05d59c9aefb2870e54bccfd5c2"></a>
### Variable caseSensitive

![][public]

**Definition**: `include/states/TextEntryState.h` (line 10)

```cpp
bool TextEntryState::caseSensitive
```







**Type**: bool



## Public static functions

<a id="class_text_entry_state_1a03aad9626ea3a98b1e8c40fde67112eb"></a>
### Function setDrawFn

![][public]
![][static]

```cpp
void TextEntryState::setDrawFn(handler_t dFn)
```







**Parameters**:

* handler_t **dFn**

**Return type**: void



## Public functions

<a id="class_text_entry_state_1ab863f8b2aabc0839bd1ef34b63fe7ae5"></a>
### Function TextEntryState

![][public]

```cpp
TextEntryState::TextEntryState(String name, uint8_t length, String data, handler_t saveFn, TastyState *returnState, bool caseSensitive=false)
```







**Parameters**:

* String **name**
* uint8_t **length**
* String **data**
* handler_t **saveFn**
* [TastyState](class_tasty_state.md#class_tasty_state) * **returnState**
* bool **caseSensitive** = false 

**Return type**: 



<a id="class_text_entry_state_1a820e5717a8a772737fc33d0ba59c5244"></a>
### Function increase

![][public]

```cpp
void TextEntryState::increase()
```







**Return type**: void



<a id="class_text_entry_state_1a81062a6d23420b68b8d2e1df25a38db8"></a>
### Function decrease

![][public]

```cpp
void TextEntryState::decrease()
```







**Return type**: void



<a id="class_text_entry_state_1ac38ac0d60008993e4852aebc28ef0f8c"></a>
### Function adjustIndexUp

![][public]

```cpp
void TextEntryState::adjustIndexUp()
```







**Return type**: void



<a id="class_text_entry_state_1a147cea6ed8fb9087dacb83488b8cb847"></a>
### Function adjustIndexDown

![][public]

```cpp
void TextEntryState::adjustIndexDown()
```







**Return type**: void



[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)
[static]: https://img.shields.io/badge/-static-lightgrey (static)
[private]: https://img.shields.io/badge/-private-red (private)