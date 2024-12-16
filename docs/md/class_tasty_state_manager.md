<a id="class_tasty_state_manager"></a>
# Class TastyStateManager

![][C++]
![][public]

**Definition**: `include/TastyStateManager.h` (line 63)

Manages the states of a Tasty application, including state transitions, timeouts, and LED control.

Manages the state of a system with timeout and LED control.





The [TastyStateManager](class_tasty_state_manager.md#class_tasty_state_manager) is a singleton class that handles the management of different states in a Tasty application. It allows for setting a default state, managing timeouts, and controlling LED indicators based on the current state. The class provides methods to initialize the state manager, set up states, and handle state transitions.





The state manager can be configured with a default state that the application will revert to after a timeout, as well as an intermediary timeout state that can be used for temporary changes during state transitions. Additionally, it supports both single-color and RGB LED configurations to provide visual feedback based on the current state.





Example usage:





```cpp
#include "TastyStateManager.h"
#include "TastyState.h"

void setup() {
    // Initialize the TastyStateManager
    TastyStateManager& manager = TastyStateManager::getInstance();

    // Create states
    TastyState defaultState;
    TastyState timeoutState;

    // Setup the manager with default and timeout states
    manager.setupDefaultStates(&defaultState, &timeoutState);
    manager.setupLed(LED_BUILTIN); // Setup a single LED on the built-in pin

    // Begin the state manager
    manager.begin(&defaultState, &timeoutState);
}

void loop() {
    // Call the tick function in the main loop
    TastyStateManager::getInstance().tick();
}
```





The [TastyStateManager](class_tasty_state_manager.md#class_tasty_state_manager) class is responsible for handling different states of a system, managing transitions between states based on events, and controlling an LED based on the current state. It uses a timer to manage state timeouts and LED blinking.





Example usage: ```cpp
TastyStateManager& manager = TastyStateManager::getInstance();
manager.begin(defaultState, timeoutState, ledPin);

// In the main loop
while (true) {
    manager.tick();
    // Handle button presses
    if (buttonPressed) {
        manager.onClick();
    }
}
```

## Members

* [activeState](class_tasty_state_manager.md#class_tasty_state_manager_1ab160bd8e3a9eab7a49a22abd62a9aa92)
* [applyLed](class_tasty_state_manager.md#class_tasty_state_manager_1a56f45646c8681351658f955e5e2cc9e7)
* [begin](class_tasty_state_manager.md#class_tasty_state_manager_1a33b3abd2985f71a565e9e8473e4b0988)
* [begin](class_tasty_state_manager.md#class_tasty_state_manager_1a80b939cc05e2c0be11378e604ebad9c3)
* [begin](class_tasty_state_manager.md#class_tasty_state_manager_1a7487c7ecb35040b534c027b1c7caafa3)
* [checkTimeout](class_tasty_state_manager.md#class_tasty_state_manager_1aa107c7fa46df0436e9df4f47680cb7f0)
* [defaultState](class_tasty_state_manager.md#class_tasty_state_manager_1af91fda0fb60771cedc6bb58b4bede2ca)
* [defaultTimeoutState](class_tasty_state_manager.md#class_tasty_state_manager_1a838ab01d3eb7cbd773dd149a04d03bbc)
* [EMPTY\_RGB\_LED](class_tasty_state_manager.md#class_tasty_state_manager_1a4af218d14b8e3bc82afcfe07daea1e2d)
* [getInstance](class_tasty_state_manager.md#class_tasty_state_manager_1a3fe81c644f6597e8ee410a6d99b4e2d8)
* [getTimeout](class_tasty_state_manager.md#class_tasty_state_manager_1a6809b39b434d4b8402563598d6147208)
* [getTimeoutState](class_tasty_state_manager.md#class_tasty_state_manager_1af968e50f2542aaf304efd7884f7cfb95)
* [lastState](class_tasty_state_manager.md#class_tasty_state_manager_1a886583ece83b83af5664175b4b69b467)
* [LED](class_tasty_state_manager.md#class_tasty_state_manager_1aa27f53d2c1d4f72e3318aa105012f749)
* [LED\_B](class_tasty_state_manager.md#class_tasty_state_manager_1a2d1e726ef1fe83e92785c73a4fecfa08)
* [LED\_G](class_tasty_state_manager.md#class_tasty_state_manager_1aa8e42e3f53d8f144b2fdb58c5cc3af01)
* [LED\_R](class_tasty_state_manager.md#class_tasty_state_manager_1a42ff1d667568680ee0ce7d4ee96d318b)
* [ledState](class_tasty_state_manager.md#class_tasty_state_manager_1ae1cc0a1352b4ab3879bb955b193051f7)
* [ledTask](class_tasty_state_manager.md#class_tasty_state_manager_1a29466eb5cae521edee036e312287f8c9)
* [onClick](class_tasty_state_manager.md#class_tasty_state_manager_1afb27dfc96a3b47047a7b55af7a98b10d)
* [onDoubleClick](class_tasty_state_manager.md#class_tasty_state_manager_1a10bb00cf849f4c209f86d1d0b1525ba0)
* [onDownPress](class_tasty_state_manager.md#class_tasty_state_manager_1a71fc1e023367e026dc47e6fd95fd055e)
* [onLeftPress](class_tasty_state_manager.md#class_tasty_state_manager_1ad43eeb27d0e06328de4950f9145fec20)
* [onLongPress](class_tasty_state_manager.md#class_tasty_state_manager_1a62880389ecaaf2e20fb54439bb13d38a)
* [onMultiClick](class_tasty_state_manager.md#class_tasty_state_manager_1a344c9fc78d8fdf2cc162f9ee67bc76eb)
* [onRightPress](class_tasty_state_manager.md#class_tasty_state_manager_1a089466b9da75d1b1079872c1e4f56eb9)
* [onUpPress](class_tasty_state_manager.md#class_tasty_state_manager_1ad1761066d25a60aadb77e3ceee1babd2)
* [setDefaultState](class_tasty_state_manager.md#class_tasty_state_manager_1a3183cd2eb4130d6f6eb1490377d8ab25)
* [setState](class_tasty_state_manager.md#class_tasty_state_manager_1a7244cd5222700b7222f7d3d95813cfd8)
* [setTimeoutState](class_tasty_state_manager.md#class_tasty_state_manager_1aa6a988312c124a1a62b60be530bb1ed9)
* [setTimeoutTask](class_tasty_state_manager.md#class_tasty_state_manager_1ab61f008c341fbc52e53584a912e34a57)
* [setupDefaultStates](class_tasty_state_manager.md#class_tasty_state_manager_1abaf7b5b31f6e0d78848f6bc66d01be58)
* [setupLed](class_tasty_state_manager.md#class_tasty_state_manager_1aee65ab923df273d420fe2f9f90dc0a1d)
* [setupLed](class_tasty_state_manager.md#class_tasty_state_manager_1ab0584f33048b2d3d9329a4b8aad4f740)
* [stateTimeoutHandler](class_tasty_state_manager.md#class_tasty_state_manager_1a5d347ee13312e1333e7fd0f0b14fed3a)
* [TastyStateManager](class_tasty_state_manager.md#class_tasty_state_manager_1a54b882725454455a08b828410d87f046)
* [tick](class_tasty_state_manager.md#class_tasty_state_manager_1a30286d39586b39907c8845ed1910d59f)
* [timeout](class_tasty_state_manager.md#class_tasty_state_manager_1a1415973b603069daf1520f15dd2097aa)
* [timeoutTask](class_tasty_state_manager.md#class_tasty_state_manager_1a4a09dd09e9bf44516a109a5f940e024b)
* [timer](class_tasty_state_manager.md#class_tasty_state_manager_1ad3f61948d4831c97ce1f783001160399)
* [toggleLed](class_tasty_state_manager.md#class_tasty_state_manager_1a23fd9b5ccb6b2e458db3cd9964b9bb8a)

## Private attributes

<a id="class_tasty_state_manager_1a42ff1d667568680ee0ce7d4ee96d318b"></a>
### Variable LED\_R

![][private]

**Definition**: `include/TastyStateManager.h` (line 65)

```cpp
int8_t TastyStateManager::LED_R = NOT_A_PIN
```







**Type**: int8_t



<a id="class_tasty_state_manager_1aa8e42e3f53d8f144b2fdb58c5cc3af01"></a>
### Variable LED\_G

![][private]

**Definition**: `include/TastyStateManager.h` (line 66)

```cpp
int8_t TastyStateManager::LED_G = NOT_A_PIN
```







**Type**: int8_t



<a id="class_tasty_state_manager_1a2d1e726ef1fe83e92785c73a4fecfa08"></a>
### Variable LED\_B

![][private]

**Definition**: `include/TastyStateManager.h` (line 67)

```cpp
int8_t TastyStateManager::LED_B = NOT_A_PIN
```





**Type**: int8_t



<a id="class_tasty_state_manager_1aa27f53d2c1d4f72e3318aa105012f749"></a>
### Variable LED

![][private]

**Definition**: `include/TastyStateManager.h` (line 68)

```cpp
int8_t TastyStateManager::LED = NOT_A_PIN
```







**Type**: int8_t



## Private static attributes

<a id="class_tasty_state_manager_1a4af218d14b8e3bc82afcfe07daea1e2d"></a>
### Variable EMPTY\_RGB\_LED

![][private]
![][static]

**Definition**: `include/TastyStateManager.h` (line 74)

```cpp
RGBLed TastyStateManager::EMPTY_RGB_LED
```







**Type**: [RGBLed](struct_r_g_b_led.md#struct_r_g_b_led)



<a id="class_tasty_state_manager_1ad3f61948d4831c97ce1f783001160399"></a>
### Variable timer

![][private]
![][static]

**Definition**: `include/TastyStateManager.h` (line 82)

```cpp
Timer TastyStateManager::timer = Timer<>()
```







**Type**: Timer



<a id="class_tasty_state_manager_1a29466eb5cae521edee036e312287f8c9"></a>
### Variable ledTask

![][private]
![][static]

**Definition**: `include/TastyStateManager.h` (line 83)

```cpp
Timer::Task TastyStateManager::ledTask = NULL
```







**Type**: Timer ::Task



<a id="class_tasty_state_manager_1a4a09dd09e9bf44516a109a5f940e024b"></a>
### Variable timeoutTask

![][private]
![][static]

**Definition**: `include/TastyStateManager.h` (line 84)

```cpp
Timer::Task TastyStateManager::timeoutTask = NULL
```







**Type**: Timer ::Task



<a id="class_tasty_state_manager_1a1415973b603069daf1520f15dd2097aa"></a>
### Variable timeout

![][private]
![][static]

**Definition**: `include/TastyStateManager.h` (line 85)

```cpp
Timeout TastyStateManager::timeout = { nullptr, 999 }
```







**Type**: [Timeout](struct_timeout.md#struct_timeout)



## Public attributes

<a id="class_tasty_state_manager_1ab160bd8e3a9eab7a49a22abd62a9aa92"></a>
### Variable activeState

![][public]

**Definition**: `include/TastyStateManager.h` (line 159)

```cpp
TastyState* TastyStateManager::activeState = nullptr
```



The active state



**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *



<a id="class_tasty_state_manager_1a886583ece83b83af5664175b4b69b467"></a>
### Variable lastState

![][public]

**Definition**: `include/TastyStateManager.h` (line 164)

```cpp
TastyState* TastyStateManager::lastState = nullptr
```



The previous state



**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *



<a id="class_tasty_state_manager_1af91fda0fb60771cedc6bb58b4bede2ca"></a>
### Variable defaultState

![][public]

**Definition**: `include/TastyStateManager.h` (line 169)

```cpp
TastyState* TastyStateManager::defaultState = nullptr
```



The default state, state manager will revert back to this after timeouts



**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *



<a id="class_tasty_state_manager_1a838ab01d3eb7cbd773dd149a04d03bbc"></a>
### Variable defaultTimeoutState

![][public]

**Definition**: `include/TastyStateManager.h` (line 174)

```cpp
TastyState* TastyStateManager::defaultTimeoutState = nullptr
```



Intermediary state for making changes during timeouts



**Type**: [TastyState](class_tasty_state.md#class_tasty_state) *



<a id="class_tasty_state_manager_1ae1cc0a1352b4ab3879bb955b193051f7"></a>
### Variable ledState

![][public]

**Definition**: `include/TastyStateManager.h` (line 179)

```cpp
BlinkState TastyStateManager::ledState
```



State of the RGB LED



**Type**: [BlinkState](struct_blink_state.md#struct_blink_state)



## Private functions

<a id="class_tasty_state_manager_1a54b882725454455a08b828410d87f046"></a>
### Function TastyStateManager

![][private]

```cpp
TastyStateManager::TastyStateManager()
```







**Return type**: 



<a id="class_tasty_state_manager_1aa107c7fa46df0436e9df4f47680cb7f0"></a>
### Function checkTimeout

![][private]

```cpp
void TastyStateManager::checkTimeout()
```







**Return type**: void



<a id="class_tasty_state_manager_1a56f45646c8681351658f955e5e2cc9e7"></a>
### Function applyLed

![][private]

```cpp
void TastyStateManager::applyLed()
```

Applies the LED settings based on the current state.

This method controls the LED output based on the current LED state and color settings.



**Return type**: void



<a id="class_tasty_state_manager_1af968e50f2542aaf304efd7884f7cfb95"></a>
### Function getTimeoutState

![][private]

```cpp
TastyState * TastyStateManager::getTimeoutState()
```

Retrieves the timeout state based on the current active state.

**Returns**:

Pointer to the timeout state.



**Return type**: [TastyState](class_tasty_state.md#class_tasty_state) *



<a id="class_tasty_state_manager_1a6809b39b434d4b8402563598d6147208"></a>
### Function getTimeout

![][private]

```cpp
int32_t TastyStateManager::getTimeout()
```

Retrieves the timeout duration for the current active state.

**Returns**:

The timeout duration in milliseconds, or -1 if not set.



**Return type**: int32_t



## Private static functions

<a id="class_tasty_state_manager_1a5d347ee13312e1333e7fd0f0b14fed3a"></a>
### Function stateTimeoutHandler

![][private]
![][static]

```cpp
bool TastyStateManager::stateTimeoutHandler(void *)
```

Handles state timeout events.

**Parameters**:

* **unused**: Pointer to unused data.


**Returns**:

true if the timeout was handled successfully.



**Parameters**:

* void *

**Return type**: bool



<a id="class_tasty_state_manager_1a23fd9b5ccb6b2e458db3cd9964b9bb8a"></a>
### Function toggleLed

![][private]
![][static]

```cpp
bool TastyStateManager::toggleLed(void *)
```

Toggles the LED state.

**Parameters**:

* **unused**: Pointer to unused data.


**Returns**:

true if the LED state was toggled successfully.



**Parameters**:

* void *

**Return type**: bool



## Public static functions

<a id="class_tasty_state_manager_1afb27dfc96a3b47047a7b55af7a98b10d"></a>
### Function onClick

![][public]
![][static]

```cpp
void TastyStateManager::onClick()
```

Handles a single click event.

Handle a single click event.





This method is called when a single click is detected. It can be used to trigger actions or transitions in the state manager based on user input.





This method is called when a single click is detected, and it transitions to the appropriate state.



**Return type**: void



<a id="class_tasty_state_manager_1a10bb00cf849f4c209f86d1d0b1525ba0"></a>
### Function onDoubleClick

![][public]
![][static]

```cpp
void TastyStateManager::onDoubleClick()
```

Handles a double click event.

Handle a double click event.





This method is called when a double click is detected. It can be used to trigger actions or transitions in the state manager that are distinct from a single click.





This method is called when a double click is detected, and it transitions to the appropriate state.



**Return type**: void



<a id="class_tasty_state_manager_1a344c9fc78d8fdf2cc162f9ee67bc76eb"></a>
### Function onMultiClick

![][public]
![][static]

```cpp
void TastyStateManager::onMultiClick()
```

Handles a multi-click event.

Handle a multi-click event.





This method is called when multiple clicks are detected in quick succession. It can be used to trigger specific actions or transitions based on the number of clicks.





This method is called when a multi-click is detected, and it transitions to the appropriate state.



**Return type**: void



<a id="class_tasty_state_manager_1a62880389ecaaf2e20fb54439bb13d38a"></a>
### Function onLongPress

![][public]
![][static]

```cpp
static void TastyStateManager::onLongPress()
```



Handle a long press event.





This method is called when a button is pressed and held for an extended period. It can be used to trigger actions or transitions that require a longer user interaction.



**Return type**: void



<a id="class_tasty_state_manager_1ad1761066d25a60aadb77e3ceee1babd2"></a>
### Function onUpPress

![][public]
![][static]

```cpp
static void TastyStateManager::onUpPress()
```



Handle an upward press event.





This method is called when an upward button press is detected. It can be used to trigger actions or transitions that correspond to moving up in a menu or increasing a value.



**Return type**: void



<a id="class_tasty_state_manager_1a71fc1e023367e026dc47e6fd95fd055e"></a>
### Function onDownPress

![][public]
![][static]

```cpp
static void TastyStateManager::onDownPress()
```



Handle a downward press event.





This method is called when a downward button press is detected. It can be used to trigger actions or transitions that correspond to moving down in a menu or decreasing a value.



**Return type**: void



<a id="class_tasty_state_manager_1a089466b9da75d1b1079872c1e4f56eb9"></a>
### Function onRightPress

![][public]
![][static]

```cpp
static void TastyStateManager::onRightPress()
```



Handle a rightward press event.





This method is called when a rightward button press is detected. It can be used to trigger actions or transitions that correspond to moving right in a menu or selecting an option.



**Return type**: void



<a id="class_tasty_state_manager_1ad43eeb27d0e06328de4950f9145fec20"></a>
### Function onLeftPress

![][public]
![][static]

```cpp
static void TastyStateManager::onLeftPress()
```



Handle a leftward press event.





This method is called when a leftward button press is detected. It can be used to trigger actions or transitions that correspond to moving left in a menu or deselecting an option.



**Return type**: void



<a id="class_tasty_state_manager_1a3fe81c644f6597e8ee410a6d99b4e2d8"></a>
### Function getInstance

![][public]
![][static]

```cpp
TastyStateManager & TastyStateManager::getInstance()
```

Gets the singleton instance of [TastyStateManager](class_tasty_state_manager.md#class_tasty_state_manager).

Get the singleton instance of [TastyStateManager](class_tasty_state_manager.md#class_tasty_state_manager).






**Returns**:

Reference to the [TastyStateManager](class_tasty_state_manager.md#class_tasty_state_manager) instance.


**Returns**:

Reference to the singleton instance of [TastyStateManager](class_tasty_state_manager.md#class_tasty_state_manager).



**Return type**: [TastyStateManager](class_tasty_state_manager.md#class_tasty_state_manager) &



## Public functions

<a id="class_tasty_state_manager_1a3183cd2eb4130d6f6eb1490377d8ab25"></a>
### Function setDefaultState

![][public]

```cpp
void TastyStateManager::setDefaultState(TastyState *state)
```

Sets the default state for the state manager.

Set the default state for the manager.






**Parameters**:

* **state**: Pointer to the [TastyState](class_tasty_state.md#class_tasty_state) to set as the default state.
* **state**: Pointer to the state to be set as default.



**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **state**

**Return type**: void



<a id="class_tasty_state_manager_1aa6a988312c124a1a62b60be530bb1ed9"></a>
### Function setTimeoutState

![][public]

```cpp
void TastyStateManager::setTimeoutState(TastyState *state)
```

Sets the timeout state for the state manager.

Set the state that will be an intermediary between "active state" and "default state" when it times out.






**Parameters**:

* **state**: Pointer to the [TastyState](class_tasty_state.md#class_tasty_state) to set as the timeout state.
* **state**: Pointer to the state to be set as timeout.



**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **state**

**Return type**: void



<a id="class_tasty_state_manager_1aee65ab923df273d420fe2f9f90dc0a1d"></a>
### Function setupLed

![][public]

```cpp
void TastyStateManager::setupLed(int8_t ledPin)
```

Sets up the LED with a single pin.

Setup the LED with a single pin.






**Parameters**:

* **ledPin**: The pin number for the LED.
* **ledPin**: The pin number for the LED.



**Parameters**:

* int8_t **ledPin**

**Return type**: void



<a id="class_tasty_state_manager_1ab0584f33048b2d3d9329a4b8aad4f740"></a>
### Function setupLed

![][public]

```cpp
void TastyStateManager::setupLed(int8_t ledR, int8_t ledG, int8_t ledB)
```

Sets up the RGB LED with separate pins for R, G, and B.

Setup the RGB LED with separate pins for red, green, and blue.






**Parameters**:

* **ledR**: The pin number for the red LED.
* **ledG**: The pin number for the green LED.
* **ledB**: The pin number for the blue LED.
* **ledR**: The pin number for the red LED.
* **ledG**: The pin number for the green LED.
* **ledB**: The pin number for the blue LED.



**Parameters**:

* int8_t **ledR**
* int8_t **ledG**
* int8_t **ledB**

**Return type**: void



<a id="class_tasty_state_manager_1abaf7b5b31f6e0d78848f6bc66d01be58"></a>
### Function setupDefaultStates

![][public]

```cpp
void TastyStateManager::setupDefaultStates(TastyState *defaultS=nullptr, TastyState *timeoutS=nullptr)
```

Sets up the default states for the state manager.

Setup the default states for the manager.






**Parameters**:

* **defaultS**: Pointer to the default [TastyState](class_tasty_state.md#class_tasty_state).
* **timeoutS**: Pointer to the timeout [TastyState](class_tasty_state.md#class_tasty_state).
* **defaultS**: Pointer to the default state.
* **timeoutS**: Pointer to the timeout state.



**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **defaultS** = nullptr 
* [TastyState](class_tasty_state.md#class_tasty_state) * **timeoutS** = nullptr 

**Return type**: void



<a id="class_tasty_state_manager_1a33b3abd2985f71a565e9e8473e4b0988"></a>
### Function begin

![][public]

```cpp
void TastyStateManager::begin(TastyState *defaultState=nullptr, TastyState *timeoutState=nullptr, int8_t ledPin=NOT_A_PIN)
```

Initializes the state manager with default and timeout states.

Start the library with optional parameters for default and timeout states and LED configuration.






**Parameters**:

* **defaultState**: Pointer to the default [TastyState](class_tasty_state.md#class_tasty_state).
* **timeoutState**: Pointer to the timeout [TastyState](class_tasty_state.md#class_tasty_state).
* **ledPin**: The pin number for the LED (optional).
* **defaultS**: Pointer to the default state.
* **timeoutS**: Pointer to the timeout state.
* **ledPin**: The pin number for the LED.



**Parameters**:

* defaultS[TastyState](class_tasty_state.md#class_tasty_state) * **defaultState** = nullptr 
* timeoutS[TastyState](class_tasty_state.md#class_tasty_state) * **timeoutState** = nullptr 
* int8_t **ledPin** = NOT_A_PIN 

**Return type**: void



<a id="class_tasty_state_manager_1a80b939cc05e2c0be11378e604ebad9c3"></a>
### Function begin

![][public]

```cpp
void TastyStateManager::begin(TastyState *defaultState=nullptr, TastyState *timeoutState=nullptr, RGBLed ledPin=TastyStateManager::EMPTY_RGB_LED)
```

Initializes the state manager with RGB LED pins.

Start the library with RGB LED configuration.






**Parameters**:

* **defaultState**: Pointer to the default [TastyState](class_tasty_state.md#class_tasty_state).
* **timeoutState**: Pointer to the timeout [TastyState](class_tasty_state.md#class_tasty_state).
* **ledPin**: [RGBLed](struct_r_g_b_led.md#struct_r_g_b_led) structure for LED configuration.
* **defaultS**: Pointer to the default state.
* **timeoutS**: Pointer to the timeout state.
* **ledPin**: [RGBLed](struct_r_g_b_led.md#struct_r_g_b_led) structure containing pin numbers for R, G, and B.



**Parameters**:

* defaultS[TastyState](class_tasty_state.md#class_tasty_state) * **defaultState** = nullptr 
* timeoutS[TastyState](class_tasty_state.md#class_tasty_state) * **timeoutState** = nullptr 
* [RGBLed](struct_r_g_b_led.md#struct_r_g_b_led) **ledPin** = TastyStateManager::EMPTY_RGB_LED 

**Return type**: void



<a id="class_tasty_state_manager_1a7487c7ecb35040b534c027b1c7caafa3"></a>
### Function begin

![][public]

```cpp
void TastyStateManager::begin(TastyState *defaultState=nullptr, TastyState *timeoutState=nullptr)
```

Initializes the state manager with default states only.

Start the library with default states only.






**Parameters**:

* **defaultState**: Pointer to the default [TastyState](class_tasty_state.md#class_tasty_state).
* **timeoutState**: Pointer to the timeout [TastyState](class_tasty_state.md#class_tasty_state).
* **defaultS**: Pointer to the default state.
* **timeoutS**: Pointer to the timeout state.



**Parameters**:

* defaultS[TastyState](class_tasty_state.md#class_tasty_state) * **defaultState** = nullptr 
* timeoutS[TastyState](class_tasty_state.md#class_tasty_state) * **timeoutState** = nullptr 

**Return type**: void



<a id="class_tasty_state_manager_1a30286d39586b39907c8845ed1910d59f"></a>
### Function tick

![][public]

```cpp
void TastyStateManager::tick()
```

Updates the state manager and applies LED settings.

Main loop function to be called repeatedly.





This method should be called periodically to update the state manager and apply any LED changes.



**Return type**: void



<a id="class_tasty_state_manager_1a7244cd5222700b7222f7d3d95813cfd8"></a>
### Function setState

![][public]

```cpp
void TastyStateManager::setState(TastyState *nextState=timeout.state)
```

Sets the next state for the state manager.

Set the next state for the state manager.






**Parameters**:

* **nextState**: Pointer to the [TastyState](class_tasty_state.md#class_tasty_state) to transition to. Defaults to the current timeout state.
* **nextState**: Pointer to the state to transition to.



**Parameters**:

* [TastyState](class_tasty_state.md#class_tasty_state) * **nextState** = timeout.state 

**Return type**: void



<a id="class_tasty_state_manager_1ab61f008c341fbc52e53584a912e34a57"></a>
### Function setTimeoutTask

![][public]

```cpp
void TastyStateManager::setTimeoutTask()
```

Sets the timeout task for the current state.

Set the timeout task for the state manager.





This method configures the timeout for the current active state.



**Return type**: void



**TODO**:

* includes {"type":"element","name":"includes","attributes":{"local":"no","refid":"_tasty_state_manager_8h"},"children":[{"type":"text","text":"TastyStateManager.h"}]}

[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)
[static]: https://img.shields.io/badge/-static-lightgrey (static)
[private]: https://img.shields.io/badge/-private-red (private)