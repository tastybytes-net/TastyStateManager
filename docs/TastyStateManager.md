<a name="line-1"></a>
# TastyStateManager.h 

<!-- @import "[TOC]" {cmd="toc" depthFrom=1 depthTo=6 orderedList=false} -->

<!-- code_chunk_output -->

- [TastyStateManager.h](#tastystatemanagerh)
  - [Main Functions](#main-functions)
    - [Ⓜ️ void begin(TastyState* defaultState = nullptr, TastyState* timeoutState = nullptr, int8_t ledPin = NOT_A_PIN)](#m️-void-begintastystate-defaultstate--nullptr-tastystate-timeoutstate--nullptr-int8_t-ledpin--not_a_pin)
    - [Ⓜ️ void begin(TastyState* defaultState = nullptr, TastyState* timeoutState = nullptr, RGBLed ledPin = TastyStateManager::EMPTY_RGB_LED)](#m️-void-begintastystate-defaultstate--nullptr-tastystate-timeoutstate--nullptr-rgbled-ledpin--tastystatemanagerempty_rgb_led)
    - [Ⓜ️ void begin(TastyState* defaultState = nullptr, TastyState* timeoutState = nullptr)](#m️-void-begintastystate-defaultstate--nullptr-tastystate-timeoutstate--nullptr)
    - [Ⓜ️ static TastyStateManager& getInstance()](#m️-static-tastystatemanager-getinstance)
    - [Ⓜ️ void setDefaultState(TastyState* state)](#m️-void-setdefaultstatetastystate-state)
    - [Ⓜ️ void setTimeoutState(TastyState* state)](#m️-void-settimeoutstatetastystate-state)
    - [Ⓜ️ void setupLed(int8_t ledPin)](#m️-void-setupledint8_t-ledpin)
    - [Ⓜ️ void setupLed(int8_t ledR, int8_t ledG, int8_t ledB)](#m️-void-setupledint8_t-ledr-int8_t-ledg-int8_t-ledb)
    - [Ⓜ️ void setupDefaultStates(TastyState* defaultS = nullptr, TastyState* timeoutS = nullptr)](#m️-void-setupdefaultstatestastystate-defaults--nullptr-tastystate-timeouts--nullptr)
    - [Ⓜ️ void tick()](#m️-void-tick)
    - [Ⓜ️ void setState(TastyState* nextState = timeout.state)](#m️-void-setstatetastystate-nextstate--timeoutstate)
    - [Ⓜ️ void setTimeoutTask()](#m️-void-settimeouttask)
  - [Event Functions](#event-functions)
    - [Ⓜ️ static void onClick()](#m️-static-void-onclick)
    - [Ⓜ️ static void onDoubleClick()](#m️-static-void-ondoubleclick)
    - [Ⓜ️ static void onMultiClick()](#m️-static-void-onmulticlick)
    - [Ⓜ️ static void onLongPress()](#m️-static-void-onlongpress)
    - [Ⓜ️ static void onUpPress()](#m️-static-void-onuppress)
    - [Ⓜ️ static void onDownPress()](#m️-static-void-ondownpress)
    - [Ⓜ️ static void onRightPress()](#m️-static-void-onrightpress)
    - [Ⓜ️ static void onLeftPress()](#m️-static-void-onleftpress)
  - [State Pointers](#state-pointers)
    - [🔧 TastyState* activeState = nullptr](#-tastystate-activestate--nullptr)
    - [🔧 TastyState* lastState = nullptr](#-tastystate-laststate--nullptr)
    - [🔧 TastyState* defaultState = nullptr](#-tastystate-defaultstate--nullptr)
    - [🔧 TastyState* defaultTimeoutState = nullptr](#-tastystate-defaulttimeoutstate--nullptr)
    - [🔧 BlinkState ledState](#-blinkstate-ledstate)

<!-- /code_chunk_output -->


```cpp
class TastyStateManager {
```

@class TastyStateManager
> Manages the states of a Tasty application, including state transitions, timeouts, and LED control.

The TastyStateManager is a singleton class that handles the management of different states in a Tasty application.
It allows for setting a default state, managing timeouts, and controlling LED indicators based on the current state.
The class provides methods to initialize the state manager, set up states, and handle state transitions.

The state manager can be configured with a default state that the application will revert to after a timeout,
as well as an intermediary timeout state that can be used for temporary changes during state transitions.
Additionally, it supports both single-color and RGB LED configurations to provide visual feedback based on the current state.

Example usage:

```c++
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
    // Handle control inputs
    /* 
    if ( leftClick ) {
        TastyStateManager::onLeftClick();
    }
    ...
    */
    // Call the tick function in the main loop
    TastyStateManager::getInstance().tick();
}
```
## Main Functions
---
<a name="line-181"></a>
### Ⓜ️ static TastyStateManager& getInstance()

```cpp
static TastyStateManager& getInstance()
```

Get the singleton instance of TastyStateManager.

@return Reference to the TastyStateManager instance.


<a name="line-236"></a>
### Ⓜ️ void begin(TastyState* defaultState = nullptr, TastyState* timeoutState = nullptr, int8_t ledPin = NOT_A_PIN)

```cpp
void begin(TastyState* defaultState = nullptr, TastyState* timeoutState = nullptr, int8_t ledPin = NOT_A_PIN)
```

Start the library with optional parameters for default and timeout states and LED configuration.

| Name          | Type        | Description                                           |
|---------------|-------------|-------------------------------------------------------|
| defaultState  | TastyState* | Pointer to the default TastyState.                    |
| timeoutState  | TastyState* | Pointer to the timeout TastyState.                    |
| ledPin        | int8_t     | The pin number for the LED (optional).                |

<a name="line-247"></a>
### Ⓜ️ void begin(TastyState* defaultState = nullptr, TastyState* timeoutState = nullptr, RGBLed ledPin = TastyStateManager::EMPTY_RGB_LED)

```cpp
void begin(TastyState* defaultState = nullptr, TastyState* timeoutState = nullptr, RGBLed ledPin = TastyStateManager::EMPTY_RGB_LED)
```

Start the library with RGB LED configuration.

| Name          | Type        | Description                                           |
|---------------|-------------|-------------------------------------------------------|
| defaultState  | TastyState* | Pointer to the default TastyState.                    |
| timeoutState  | TastyState* | Pointer to the timeout TastyState.                    |
| ledPin        | RGBLed      | RGBLed structure for LED configuration.               |

<a name="line-258"></a>
### Ⓜ️ void begin(TastyState* defaultState = nullptr, TastyState* timeoutState = nullptr)

```cpp
void begin(TastyState* defaultState = nullptr, TastyState* timeoutState = nullptr)
```

Start the library with default states only.

<a name="line-266"></a>
### Ⓜ️ void tick()

```cpp
void tick()
```

Main loop function to be called repeatedly.

<a name="line-271"></a>
### Ⓜ️ void setState(TastyState* nextState = timeout.state)

```cpp
void setState(TastyState* nextState = timeout.state)
```

Set the next state for the state manager.

| Name      | Type        | Description                                           |
|-----------|-------------|-------------------------------------------------------|
| nextState | TastyState* | Pointer to the TastyState to transition to. Defaults to the current timeout state. |

---
## Setup Functions
<a name="line-188"></a>
### Ⓜ️ void setDefaultState(TastyState* state)

```cpp
void setDefaultState(TastyState* state)
```

Set the default state for the manager.

| Name   | Type        | Description                                           |
|--------|-------------|-------------------------------------------------------|
| state  | TastyState* | Pointer to the TastyState to set as the default state.|

<a name="line-197"></a>
### Ⓜ️ void setTimeoutState(TastyState* state)

```cpp
void setTimeoutState(TastyState* state)
```

Set the state that will be an intermediary between "active state" and "default state" when it times out.

| Name   | Type        | Description                                           |
|--------|-------------|-------------------------------------------------------|
| state  | TastyState* | Pointer to the TastyState to set as the timeout state.|

<a name="line-206"></a>
### Ⓜ️ void setupLed(int8_t ledPin)

```cpp
void setupLed(int8_t ledPin)
```

Setup the LED with a single pin.

| Name    | Type   | Description                          |
|---------|--------|--------------------------------------|
| ledPin  | int8_t| The pin number for the LED.         |

<a name="line-215"></a>
### Ⓜ️ void setupLed(int8_t ledR, int8_t ledG, int8_t ledB)

```cpp
void setupLed(int8_t ledR, int8_t ledG, int8_t ledB)
```

Setup the RGB LED with separate pins for red, green, and blue.

| Name   | Type   | Description                          |
|--------|--------|--------------------------------------|
| ledR   | int8_t| The pin number for the red LED.     |
| ledG   | int8_t| The pin number for the green LED.   |
| ledB   | int8_t| The pin number for the blue LED.    |

<a name="line-226"></a>
### Ⓜ️ void setupDefaultStates(TastyState* defaultS = nullptr, TastyState* timeoutS = nullptr)

```cpp
void setupDefaultStates(TastyState* defaultS = nullptr, TastyState* timeoutS = nullptr)
```

Setup the default states for the manager.

| Name      | Type        | Description                                           |
|-----------|-------------|-------------------------------------------------------|
| defaultS  | TastyState* | Pointer to the default TastyState.                    |
| timeoutS  | TastyState* | Pointer to the timeout TastyState.                    |




<a name="line-280"></a>
### Ⓜ️ void setTimeoutTask()

```cpp
void setTimeoutTask()
```

Set the timeout task for the state manager.



## Event Functions
---
<a name="line-92"></a>
### Ⓜ️ static void onClick()

```cpp
static void onClick()
```

Handle a single click event.

This method is called when a single click is detected. It can be used to trigger actions
or transitions in the state manager based on user input.

<a name="line-100"></a>
### Ⓜ️ static void onDoubleClick()

```cpp
static void onDoubleClick()
```

Handle a double click event.

This method is called when a double click is detected. It can be used to trigger actions
or transitions in the state manager that are distinct from a single click.

<a name="line-108"></a>
### Ⓜ️ static void onMultiClick()

```cpp
static void onMultiClick()
```

Handle a multi-click event.

This method is called when multiple clicks are detected in quick succession. It can be used
to trigger specific actions or transitions based on the number of clicks.

<a name="line-116"></a>
### Ⓜ️ static void onLongPress()

```cpp
static void onLongPress()
```

Handle a long press event.

This method is called when a button is pressed and held for an extended period. It can be used
to trigger actions or transitions that require a longer user interaction.

<a name="line-124"></a>
### Ⓜ️ static void onUpPress()

```cpp
static void onUpPress()
```

Handle an upward press event.

This method is called when an upward button press is detected. It can be used to trigger actions
or transitions that correspond to moving up in a menu or increasing a value.

<a name="line-132"></a>
### Ⓜ️ static void onDownPress()

```cpp
static void onDownPress()
```

Handle a downward press event.

This method is called when a downward button press is detected. It can be used to trigger actions
or transitions that correspond to moving down in a menu or decreasing a value.
<a name="line-148"></a>
### Ⓜ️ static void onLeftPress()

```cpp
static void onLeftPress()
```

Handle a leftward press event.

This method is called when a leftward button press is detected. It can be used to trigger actions
or transitions that correspond to moving left in a menu or deselecting an option.

<a name="line-140"></a>
### Ⓜ️ static void onRightPress()

```cpp
static void onRightPress()
```

Handle a rightward press event.

This method is called when a rightward button press is detected. It can be used to trigger actions
or transitions that correspond to moving right in a menu or selecting an option.


## State Pointers
---
<a name="line-156"></a>
### 🔧 TastyState* activeState = nullptr

```cpp
TastyState* activeState = nullptr
```

The active state

<a name="line-161"></a>
### 🔧 TastyState* lastState = nullptr

```cpp
TastyState* lastState = nullptr
```

The previous state

<a name="line-166"></a>
### 🔧 TastyState* defaultState = nullptr

```cpp
TastyState* defaultState = nullptr
```

The default state, state manager will revert back to this after timeouts

<a name="line-171"></a>
### 🔧 TastyState* defaultTimeoutState = nullptr

```cpp
TastyState* defaultTimeoutState = nullptr
```

Intermediary state for making changes during timeouts

<a name="line-176"></a>
### 🔧 BlinkState ledState

```cpp
BlinkState ledState
```

State of the RGB LED
