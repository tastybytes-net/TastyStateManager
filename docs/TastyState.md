<a name="line-13"></a>
# TastyState

<!-- @import "[TOC]" {cmd="toc" depthFrom=1 depthTo=6 orderedList=false} -->

<!-- code_chunk_output -->

- [TastyState](#tastystate)
  - [Constructors](#constructors)
    - [Ⓜ️ TastyState(String name, int8_t icon = -1, LedColor ledColor = { 0, 0, 0 }, BlinkSpeed ledSpeed = LED_OFF, int32_t timeout = 0, TastyState* timeoutState = nullptr)](#m️-tastystatestring-name-int8_t-icon---1-ledcolor-ledcolor---0-0-0--blinkspeed-ledspeed--led_off-int32_t-timeout--0-tastystate-timeoutstate--nullptr)
    - [Ⓜ️ TastyState(TastyState* state, TastyState* timeoutS = nullptr) {](#m️-tastystatetastystate-state-tastystate-timeouts--nullptr-)
  - [Event Handling](#event-handling)
    - [Ⓜ️ void addEvents(TastyState* clickState, TastyState* doubleClickState = nullptr, TastyState* multiClickState = nullptr, TastyState* longPressState = nullptr)](#m️-void-addeventstastystate-clickstate-tastystate-doubleclickstate--nullptr-tastystate-multiclickstate--nullptr-tastystate-longpressstate--nullptr)
    - [Ⓜ️ void onEvent(TastyEventType type, handler_t fn, void* param = T())](#m️-void-oneventtastyeventtype-type-handler_t-fn-void-param--t)
  - [Helper Functions](#helper-functions)
    - [Ⓜ️ void setLEDColor(int8_t r, int8_t g, int8_t b)](#m️-void-setledcolorint8_t-r-int8_t-g-int8_t-b)
    - [Ⓜ️ void setLEDColor(LedColor color)](#m️-void-setledcolorledcolor-color)
    - [Ⓜ️ void setBlinkSpeed(BlinkSpeed ledSpeed)](#m️-void-setblinkspeedblinkspeed-ledspeed)
    - [Ⓜ️ inline int32_t getTimeout()](#m️-inline-int32_t-gettimeout)
    - [Ⓜ️ inline void setTimeout(int32_t to)](#m️-inline-void-settimeoutint32_t-to)
    - [Ⓜ️ bool handleEvent(TastyEventType type)](#m️-bool-handleeventtastyeventtype-type)
    - [Ⓜ️ void print()](#m️-void-print)

<!-- /code_chunk_output -->


```cpp
class TastyState 
```

> Represents a state in a Tasty menu system.

The TastyState class encapsulates the properties and behaviors of a state in a menu system,
including event handling, LED settings, and navigation between states.

```c++
TastyState mainMenu("Main Menu", 1, {255, 0, 0}, LED_SLOW, 5000);
TastyState settingsMenu("Settings", 2, {0, 255, 0}, LED_OFF, 3000, &mainMenu);
// On Click, goto Settings
mainMenu.addEvents(&settingsMenu);
mainMenu.setLEDColor(0, 0, 255);
// Print Debug info
mainMenu.print();
```
## Constructors
<a name="line-63"></a>
### Ⓜ️ TastyState(String name, int8_t icon = -1, LedColor ledColor = { 0, 0, 0 }, BlinkSpeed ledSpeed = LED_OFF, int32_t timeout = 0, TastyState* timeoutState = nullptr)

```cpp
TastyState(String name, int8_t icon = -1, LedColor ledColor = { 0, 0, 0 }, BlinkSpeed ledSpeed = LED_OFF, int32_t timeout = 0, TastyState* timeoutState = nullptr)
```

> Constructs a TastyState with specified parameters.

| Name          | Type        | Description                                           | Default Value |
|---------------|-------------|-------------------------------------------------------|---------------|
| name          | String      | The name of the state.                               | -             |
| icon          | int8_t      | The icon associated with the state.                  | -1            |
| ledColor      | LedColor    | The LED color for the state.                         | {0, 0, 0}     |
| ledSpeed      | BlinkSpeed  | The LED blink speed for the state.                   | LED_OFF       |
| timeout       | int32_t     | The timeout duration for the state.                  | 0             |
| timeoutState  | TastyState* | The state to transition to on timeout.               | nullptr       |

<a name="line-78"></a>
### Ⓜ️ TastyState(TastyState* state, TastyState* timeoutS = nullptr) {

```cpp
TastyState(TastyState* state, TastyState* timeoutS = nullptr) {
```

> Copy constructor for TastyState.

| Name          | Type        | Description                                           | Default Value |
|---------------|-------------|-------------------------------------------------------|---------------|
| state         | TastyState* | The state to copy from.                              | -             |
| timeoutS      | TastyState* | The state to transition to on timeout.                     | nullptr       |
## Event Handling
<a name="line-143"></a>
### Ⓜ️ void addEvents(TastyState* clickState, TastyState* doubleClickState = nullptr, TastyState* multiClickState = nullptr, TastyState* longPressState = nullptr)

```cpp
void addEvents(TastyState* clickState, TastyState* doubleClickState = nullptr, TastyState* multiClickState = nullptr, TastyState* longPressState = nullptr)
```

> Adds event handlers for various click events.

| Name              | Type        | Description                          | Default Value |
|-------------------|-------------|--------------------------------------|---------------|
| clickState        | TastyState* | State to transition to on click event. | -             |
| doubleClickState  | TastyState* | State to transition to on double click event. | nullptr       |
| multiClickState   | TastyState* | State to transition to on multi-click event. | nullptr       |
| longPressState    | TastyState* | State to transition to on long press event. | nullptr       |

<a name="line-155"></a>
### Ⓜ️ void onEvent(TastyEventType type, handler_t fn, void* param = T())

```cpp
void onEvent(TastyEventType type, handler_t fn, void* param = T())

Example:
state1.onEvent(TastyEventType::ENTER, [](TastyState* state, void* param) { /* code */ }, extraData);
```

> Handles an event of a specific type.

| Name | Type              | Description                          |
|------|-------------------|--------------------------------------|
| type | TastyEventType    | The type of the event to handle.    |
| fn   | handler_t         | The handler function to call. Return false to prevent continuing       |
| param| void*             | Optional parameter to pass to the handler. | Default is T(). |


## Helper Functions
<a name="line-96"></a>
### Ⓜ️ void setLEDColor(int8_t r, int8_t g, int8_t b)

```cpp
void setLEDColor(int8_t r, int8_t g, int8_t b)
```

> Sets the LED color for the state.

| Name | Type   | Description                          |
|------|--------|--------------------------------------|
| r    | int8_t| Red component of the color.         |
| g    | int8_t| Green component of the color.       |
| b    | int8_t| Blue component of the color.        |

<a name="line-107"></a>
### Ⓜ️ void setLEDColor(LedColor color)

```cpp
void setLEDColor(LedColor color)
```

> Sets the LED color for the state.

| Name  | Type      | Description                          |
|-------|-----------|--------------------------------------|
| color | LedColor  | The LedColor structure containing the RGB values to set the LED. |

<a name="line-116"></a>
### Ⓜ️ void setBlinkSpeed(BlinkSpeed ledSpeed)

```cpp
void setBlinkSpeed(BlinkSpeed ledSpeed)
```

> Sets the blink speed for the LED.

| Name      | Type        | Description                          |
|-----------|-------------|--------------------------------------|
| ledSpeed  | BlinkSpeed  | The blink speed to set.             |

<a name="line-125"></a>
### Ⓜ️ inline int32_t getTimeout() { return timeout; }

```cpp
inline int32_t getTimeout() { return timeout; }
```

> Gets the timeout duration for the state.

| Return Type | Description                          |
|-------------|--------------------------------------|
| int32_t    | The timeout duration in milliseconds.|

<a name="line-134"></a>
### Ⓜ️ inline void setTimeout(int32_t to) { timeout = to; }

```cpp
inline void setTimeout(int32_t to) { timeout = to; }
```

> Sets the timeout duration for the state.

| Name | Type    | Description                          |
|------|---------|--------------------------------------|
| to   | int32_t| The timeout duration in milliseconds.|


<a name="line-166"></a>
### Ⓜ️ bool handleEvent(TastyEventType type)

```cpp
bool handleEvent(TastyEventType type)
```

> Processes an event of a specific type.

| Name | Type              | Description                          |
|------|-------------------|--------------------------------------|
| type | TastyEventType    | The type of the event to process.   |
| Return Type | bool       | True if the event was handled, false otherwise. |


<a name="line-186"></a>
### Ⓜ️ void print()

```cpp
void print()
```

> Prints the state information to the console.
