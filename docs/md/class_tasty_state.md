<a id="class_tasty_state"></a>
# Class TastyState

![][C++]
![][public]

**Definition**: `include/TastyState.h` (line 20)

Represents a state in a Tasty menu system.

The [TastyState](class_tasty_state.md#class_tasty_state) class encapsulates the properties and behaviors of a state in a menu system, including event handling, LED settings, and navigation between states.

## Members

* [activatedTime](class_tasty_state.md#class_tasty_state_1ae7f2d16bbb0041fccff43822a4583b4c)
* [addEvents](class_tasty_state.md#class_tasty_state_1a22a4b8220db87f224593b6087f8b571b)
* [backMenu](class_tasty_state.md#class_tasty_state_1a5f5ab69741d09cfad3859079f0ad9804)
* [defaultTimeout](class_tasty_state.md#class_tasty_state_1ab8dbd7346629e251321aa1c83fee2578)
* [events](class_tasty_state.md#class_tasty_state_1a5aca5cd31370ef3a81af42d1d7f56d81)
* [forwardEvents](class_tasty_state.md#class_tasty_state_1a7176abfb3d0a7c6c9191aea28d053df1)
* [forwardMenu](class_tasty_state.md#class_tasty_state_1a540bde56a8a1bb809388900dfbc64f2d)
* [getTimeout](class_tasty_state.md#class_tasty_state_1a04d3cf48ca33fb2067c579725be7d52c)
* [handleEvent](class_tasty_state.md#class_tasty_state_1a47fc66f02437bca2d3e9794f0d34c0b3)
* [icon](class_tasty_state.md#class_tasty_state_1a8f505de57dc6a17af192fec5070e1958)
* [index](class_tasty_state.md#class_tasty_state_1a785b5098c7503d32e1778f790b6ecc99)
* [ledColor](class_tasty_state.md#class_tasty_state_1adae809684154ef4d9c99b520755e7f90)
* [ledSpeed](class_tasty_state.md#class_tasty_state_1ac73467c46a7e1f8192c72b35b5433a82)
* [menu](class_tasty_state.md#class_tasty_state_1af72aefe50e11699cd5c77c26fcc657fb)
* [name](class_tasty_state.md#class_tasty_state_1aeae6225a434f42af605990fae77f8624)
* [onClickState](class_tasty_state.md#class_tasty_state_1aee8083a0e6ea059aeb3a1527f3d986c1)
* [onDoubleClickState](class_tasty_state.md#class_tasty_state_1a23d88336faca6009183fd1671cbaee09)
* [onDownClickState](class_tasty_state.md#class_tasty_state_1a45d16f05da6a0a11b011c60903032894)
* [onEvent](class_tasty_state.md#class_tasty_state_1a0a0e3891989a702991591cc71910db52)
* [onLeftClickState](class_tasty_state.md#class_tasty_state_1acdbda9d91f66c1334862f4891f2421fa)
* [onLongPressState](class_tasty_state.md#class_tasty_state_1aba693fde2c1924d69295b5fd7652dc2e)
* [onMultiClickState](class_tasty_state.md#class_tasty_state_1a9d1b7c4de4d38582d3ce4af9c0910d35)
* [onRightClickState](class_tasty_state.md#class_tasty_state_1ae5dffc901f10445470b094483f966152)
* [onTimeoutState](class_tasty_state.md#class_tasty_state_1a57f8124f783f475cf9c9855358ba3647)
* [onUpClickState](class_tasty_state.md#class_tasty_state_1aa3c065befcba417bb92a9f054c5da305)
* [print](class_tasty_state.md#class_tasty_state_1ae6561dd3755376d3b7092dba92d5848c)
* [setBlinkSpeed](class_tasty_state.md#class_tasty_state_1a85d4654a58ebaaafcdf99b2eae454c99)
* [setLEDColor](class_tasty_state.md#class_tasty_state_1a0e1f6d069ab6a585b6c4925e55e7303d)
* [setLEDColor](class_tasty_state.md#class_tasty_state_1a775e3f96776ab2bbac199db75a81982e)
* [setTimeout](class_tasty_state.md#class_tasty_state_1a5324060bec8b475d0255833118fbe4c9)
* [TastyState](class_tasty_state.md#class_tasty_state_1af4b4821a6d528a0925b98a676d30f9e6)
* [TastyState](class_tasty_state.md#class_tasty_state_1a2691970be519cefee4db4310cac26a93)
* [timeout](class_tasty_state.md#class_tasty_state_1a058b70cc059b1c6e8b9e2566da830f0e)

## Private attributes

<a id="class_tasty_state_1a5aca5cd31370ef3a81af42d1d7f56d81"></a>
### Variable events

![][private]

**Definition**: `include/TastyState.h` (line 22)

```cpp
eventHandler TastyState::events[12][12]
```

Array of event handlers for different event types.





**Type**: [eventHandler](structevent_handler.md#structevent_handler)



## Public static attributes

<a id="class_tasty_state_1ab8dbd7346629e251321aa1c83fee2578"></a>
### Variable defaultTimeout

![][public]
![][static]

**Definition**: `include/TastyState.h` (line 24)

```cpp
int32_t TastyState::defaultTimeout = 10000
```

Default timeout for states.

Default timeout for the [TastyState](class_tasty_state.md#class_tasty_state) in milliseconds.



**Type**: int32_t



## Public attributes

<a id="class_tasty_state_1aeae6225a434f42af605990fae77f8624"></a>
### Variable name

![][public]

**Definition**: `include/TastyState.h` (line 26)

```cpp
String TastyState::name
```

Name of the state.





**Type**: String



<a id="class_tasty_state_1a8f505de57dc6a17af192fec5070e1958"></a>
### Variable icon

![][public]

**Definition**: `include/TastyState.h` (line 27)

```cpp
int8_t TastyState::icon = -1
```

Icon associated with the state.





**Type**: int8_t



<a id="class_tasty_state_1adae809684154ef4d9c99b520755e7f90"></a>
### Variable ledColor

![][public]

**Definition**: `include/TastyState.h` (line 29)

```cpp
LedColor TastyState::ledColor = { 0, 0, 0 }
```

LED color for the state.





**Type**: [LedColor](struct_led_color.md#struct_led_color)



<a id="class_tasty_state_1ac73467c46a7e1f8192c72b35b5433a82"></a>
### Variable ledSpeed

![][public]

**Definition**: `include/TastyState.h` (line 30)

```cpp
BlinkSpeed TastyState::ledSpeed = LED_OFF
```

LED blink speed for the state.





**Type**: BlinkSpeed



<a id="class_tasty_state_1a058b70cc059b1c6e8b9e2566da830f0e"></a>
### Variable timeout

![][public]

**Definition**: `include/TastyState.h` (line 31)

```cpp
int32_t TastyState::timeout = 0
```

[Timeout](struct_timeout.md#struct_timeout) duration for the state.





**Type**: int32_t



<a id="class_tasty_state_1ae7f2d16bbb0041fccff43822a4583b4c"></a>
### Variable activatedTime

![][public]

**Definition**: `include/TastyState.h` (line 32)

```cpp
unsigned long TastyState::activatedTime = 0
```

Time when the state was activated.





**Type**: unsigned long



<a id="class_tasty_state_1aee8083a0e6ea059aeb3a1527f3d986c1"></a>
### Variable onClickState

![][public]

**Definition**: `include/TastyState.h` (line 35)

```cpp
TastyState* TastyState::onClickState = nullptr
```

State to transition to on click event.





**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *



<a id="class_tasty_state_1a23d88336faca6009183fd1671cbaee09"></a>
### Variable onDoubleClickState

![][public]

**Definition**: `include/TastyState.h` (line 36)

```cpp
TastyState* TastyState::onDoubleClickState = nullptr
```

State to transition to on double click event.





**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *



<a id="class_tasty_state_1aba693fde2c1924d69295b5fd7652dc2e"></a>
### Variable onLongPressState

![][public]

**Definition**: `include/TastyState.h` (line 37)

```cpp
TastyState* TastyState::onLongPressState = nullptr
```

State to transition to on long press event.





**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *



<a id="class_tasty_state_1a9d1b7c4de4d38582d3ce4af9c0910d35"></a>
### Variable onMultiClickState

![][public]

**Definition**: `include/TastyState.h` (line 38)

```cpp
TastyState* TastyState::onMultiClickState = nullptr
```

State to transition to on multi-click event.





**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *



<a id="class_tasty_state_1aa3c065befcba417bb92a9f054c5da305"></a>
### Variable onUpClickState

![][public]

**Definition**: `include/TastyState.h` (line 39)

```cpp
TastyState* TastyState::onUpClickState = nullptr
```

State to transition to on up click event.





**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *



<a id="class_tasty_state_1a45d16f05da6a0a11b011c60903032894"></a>
### Variable onDownClickState

![][public]

**Definition**: `include/TastyState.h` (line 40)

```cpp
TastyState* TastyState::onDownClickState = nullptr
```

State to transition to on down click event.





**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *



<a id="class_tasty_state_1acdbda9d91f66c1334862f4891f2421fa"></a>
### Variable onLeftClickState

![][public]

**Definition**: `include/TastyState.h` (line 41)

```cpp
TastyState* TastyState::onLeftClickState = nullptr
```

State to transition to on left click event.





**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *



<a id="class_tasty_state_1ae5dffc901f10445470b094483f966152"></a>
### Variable onRightClickState

![][public]

**Definition**: `include/TastyState.h` (line 42)

```cpp
TastyState* TastyState::onRightClickState = nullptr
```

State to transition to on right click event.





**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *



<a id="class_tasty_state_1a57f8124f783f475cf9c9855358ba3647"></a>
### Variable onTimeoutState

![][public]

**Definition**: `include/TastyState.h` (line 43)

```cpp
TastyState* TastyState::onTimeoutState = nullptr
```

State to transition to on timeout.





**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *



<a id="class_tasty_state_1a785b5098c7503d32e1778f790b6ecc99"></a>
### Variable index

![][public]

**Definition**: `include/TastyState.h` (line 46)

```cpp
int8_t TastyState::index = -1
```

Index of the state in the menu.





**Type**: int8_t



<a id="class_tasty_state_1a5f5ab69741d09cfad3859079f0ad9804"></a>
### Variable backMenu

![][public]

**Definition**: `include/TastyState.h` (line 49)

```cpp
TastyMenu* TastyState::backMenu = nullptr
```

Menu to go back to.





**Type**: [TastyMenu](class_tasty_menu.md#class_tasty_menu) *



<a id="class_tasty_state_1a540bde56a8a1bb809388900dfbc64f2d"></a>
### Variable forwardMenu

![][public]

**Definition**: `include/TastyState.h` (line 50)

```cpp
TastyMenu* TastyState::forwardMenu = nullptr
```

Menu to go forward to.





**Type**: [TastyMenu](class_tasty_menu.md#class_tasty_menu) *



<a id="class_tasty_state_1af72aefe50e11699cd5c77c26fcc657fb"></a>
### Variable menu

![][public]

**Definition**: `include/TastyState.h` (line 51)

```cpp
TastyMenu* TastyState::menu = nullptr
```

The menu this state is part of.





**Type**: [TastyMenu](class_tasty_menu.md#class_tasty_menu) *



## Public functions

<a id="class_tasty_state_1af4b4821a6d528a0925b98a676d30f9e6"></a>
### Function TastyState

![][public]

```cpp
TastyState::TastyState(String name, int8_t icon=-1, LedColor ledColor={ 0, 0, 0 }, BlinkSpeed ledSpeed=LED_OFF, int32_t timeout=0, TastyState *timeoutState=nullptr)
```

Constructs a [TastyState](class_tasty_state.md#class_tasty_state) with specified parameters.

**Parameters**:

* **name**: The name of the state.
* **icon**: The icon associated with the state (default is -1).
* **ledColor**: The LED color for the state (default is black).
* **ledSpeed**: The LED blink speed for the state (default is off).
* **timeout**: The timeout duration for the state (default is 0).
* **timeoutState**: The state to transition to on timeout (default is nullptr).



**Parameters**:

* String **name**
* int8_t **icon** = -1 
* [LedColor](struct_led_color.md#struct_led_color) **ledColor** = { 0, 0, 0 } 
* BlinkSpeed **ledSpeed** = LED_OFF 
* int32_t **timeout** = 0 
* [TastyState](class_tasty_state.md#class_tasty_state) * **timeoutState** = nullptr 

**Return type**: 



<a id="class_tasty_state_1a2691970be519cefee4db4310cac26a93"></a>
### Function TastyState

![][public]

```cpp
TastyState::TastyState(TastyState *state, TastyState *timeoutS=nullptr)
```

Copy constructor for [TastyState](class_tasty_state.md#class_tasty_state).

**Parameters**:

* **state**: The state to copy from.
* **timeoutS**: The state to transition to on timeout (default is nullptr).



**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **state**
* [TastyState](class_tasty_state.md#class_tasty_state) * **timeoutS** = nullptr 

**Return type**: 



<a id="class_tasty_state_1a0e1f6d069ab6a585b6c4925e55e7303d"></a>
### Function setLEDColor

![][public]

```cpp
void TastyState::setLEDColor(int8_t r, int8_t g, int8_t b)
```

Sets the LED color for the state.

Sets the LED color.






**Parameters**:

* **r**: Red component of the color.
* **g**: Green component of the color.
* **b**: Blue component of the color.
* **r**: Red component (0-255)
* **g**: Green component (0-255)
* **b**: Blue component (0-255)



**Parameters**:

* int8_t **r**
* int8_t **g**
* int8_t **b**

**Return type**: void



<a id="class_tasty_state_1a775e3f96776ab2bbac199db75a81982e"></a>
### Function setLEDColor

![][public]

```cpp
void TastyState::setLEDColor(LedColor color)
```

Sets the LED color for the state.

Sets the LED color.






**Parameters**:

* **color**: The [LedColor](struct_led_color.md#struct_led_color) structure containing the RGB values to set the LED.
* **color**: [LedColor](struct_led_color.md#struct_led_color) to set



**Parameters**:

* [LedColor](struct_led_color.md#struct_led_color) **color**

**Return type**: void



<a id="class_tasty_state_1a85d4654a58ebaaafcdf99b2eae454c99"></a>
### Function setBlinkSpeed

![][public]

```cpp
void TastyState::setBlinkSpeed(BlinkSpeed ledSpeed)
```

Sets the blink speed for the LED.

**Parameters**:

* **ledSpeed**: The blink speed to set.
* **ledSpeed**: The desired blink speed.



**Parameters**:

* BlinkSpeed **ledSpeed**

**Return type**: void



<a id="class_tasty_state_1a04d3cf48ca33fb2067c579725be7d52c"></a>
### Function getTimeout

![][public]

```cpp
int32_t TastyState::getTimeout()
```

Gets the timeout duration for the state.

**Returns**:

The timeout duration in milliseconds.



**Return type**: int32_t



<a id="class_tasty_state_1a5324060bec8b475d0255833118fbe4c9"></a>
### Function setTimeout

![][public]

```cpp
void TastyState::setTimeout(int32_t to)
```

Sets the timeout duration for the state.

**Parameters**:

* **to**: The timeout duration in milliseconds.



**Parameters**:

* int32_t **to**

**Return type**: void



<a id="class_tasty_state_1a22a4b8220db87f224593b6087f8b571b"></a>
### Function addEvents

![][public]

```cpp
void TastyState::addEvents(TastyState *clickState, TastyState *doubleClickState=nullptr, TastyState *multiClickState=nullptr, TastyState *longPressState=nullptr)
```

Adds event handlers for various click events.

Adds event states for various button actions.






**Parameters**:

* **clickState**: State to transition to on click event.
* **doubleClickState**: State to transition to on double click event (default is nullptr).
* **multiClickState**: State to transition to on multi-click event (default is nullptr).
* **longPressState**: State to transition to on long press event (default is nullptr).
* **clickState**: State for single click event.
* **doubleClickState**: State for double click event.
* **multiClickState**: State for multiple clicks event.
* **longPressState**: State for long press event.



**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **clickState**
* [TastyState](class_tasty_state.md#class_tasty_state) * **doubleClickState** = nullptr 
* [TastyState](class_tasty_state.md#class_tasty_state) * **multiClickState** = nullptr 
* [TastyState](class_tasty_state.md#class_tasty_state) * **longPressState** = nullptr 

**Return type**: void



<a id="class_tasty_state_1a0a0e3891989a702991591cc71910db52"></a>
### Function onEvent

![][public]

```cpp
void TastyState::onEvent(TastyEventType type, handler_t fn, void *param=T())
```

Handles an event of a specific type.

Registers an event handler for a specific event type.






**Parameters**:

* **type**: The type of the event to handle.
* **fn**: The handler function to call.
* **param**: Optional parameter to pass to the handler (default is T()).
* **t**: The type of event to handle.
* **fn**: The callback function to execute on the event.
* **param**: Additional parameter to pass to the callback function.



**Parameters**:

* tTastyEventType **type**
* handler_t **fn**
* void * **param** = T() 

**Return type**: void



<a id="class_tasty_state_1a47fc66f02437bca2d3e9794f0d34c0b3"></a>
### Function handleEvent

![][public]

```cpp
bool TastyState::handleEvent(TastyEventType type)
```

Processes an event of a specific type.

Handles an event of a specific type.






**Parameters**:

* **type**: The type of the event to process.


**Returns**:

True if the event was handled, false otherwise.


**Parameters**:

* **type**: The type of event to handle.


**Returns**:

true if the event was handled successfully, false otherwise.



**Parameters**:

* TastyEventType **type**

**Return type**: bool



<a id="class_tasty_state_1a7176abfb3d0a7c6c9191aea28d053df1"></a>
### Function forwardEvents

![][public]

```cpp
bool TastyState::forwardEvents(ActionFunction fn)
```

Forwards events to a specified function.

**Parameters**:

* **fn**: The function to forward events to.


**Returns**:

True if events were successfully forwarded, false otherwise.



**Parameters**:

* ActionFunction **fn**

**Return type**: bool



<a id="class_tasty_state_1ae6561dd3755376d3b7092dba92d5848c"></a>
### Function print

![][public]

```cpp
void TastyState::print()
```

Prints the state information to the console.

Prints the current state information to the debug log.



**Return type**: void



**TODO**:

* includes {"type":"element","name":"includes","attributes":{"local":"no","refid":"_tasty_state_8h"},"children":[{"type":"text","text":"TastyState.h"}]}

[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)
[static]: https://img.shields.io/badge/-static-lightgrey (static)
[private]: https://img.shields.io/badge/-private-red (private)