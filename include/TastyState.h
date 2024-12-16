#ifndef TASTY_STATES_H_
#define TASTY_STATES_H_

#define LOG_STATE(name, state) logdbg(state != nullptr ? "    " name ": %s" : "    " name ": nullptr", state != nullptr ? state->name : "")

#include <TastyDefs.h>
#include <string>
#include <logger.h>
#include "RTClib.h"

class TastyMenu;

/**
 * @class TastyState
 * > Represents a state in a Tasty menu system.
 *
 * The TastyState class encapsulates the properties and behaviors of a state in a menu system,
 * including event handling, LED settings, and navigation between states.
 * 
 * ```c++
 * TastyState mainMenu("Main Menu", 1, {255, 0, 0}, LED_SLOW, 5000);
 * TastyState settingsMenu("Settings", 2, {0, 255, 0}, LED_OFF, 3000, &mainMenu);
 * // On Click, goto Settings 
 * mainMenu.addEvents(&settingsMenu);
 * mainMenu.setLEDColor(0, 0, 255);
 * // Print Debug info
 * mainMenu.print();
 * ```
 */
class TastyState {
private:
	eventHandler events[12]; /** Array of event handlers for different event types. */
public:
	static int32_t defaultTimeout; /** Default timeout for states. */

	String name; /** Name of the state. */
	int8_t icon = -1; /** Icon associated with the state. */

	LedColor ledColor = { 0, 0, 0 }; /** LED color for the state. */
	BlinkSpeed ledSpeed = LED_OFF; /** LED blink speed for the state. */
	int32_t timeout = 0; /** Timeout duration for the state. */
	unsigned long activatedTime = 0; /** Time when the state was activated. */

	// Event States
	TastyState* onClickState = nullptr; /** State to transition to on click event. */
	TastyState* onDoubleClickState = nullptr; /** State to transition to on double click event. */
	TastyState* onLongPressState = nullptr; /** State to transition to on long press event. */
	TastyState* onMultiClickState = nullptr; /** State to transition to on multi-click event. */
	TastyState* onUpClickState = nullptr; /** State to transition to on up click event. */
	TastyState* onDownClickState = nullptr; /** State to transition to on down click event. */
	TastyState* onLeftClickState = nullptr; /** State to transition to on left click event. */
	TastyState* onRightClickState = nullptr; /** State to transition to on right click event. */
	TastyState* onTimeoutState = nullptr; /** State to transition to on timeout. */

	// Menu States
	int8_t index = -1; /** Index of the state in the menu. */
	// TastyState* previousState = nullptr; /** Previous state in the menu list. */
	// TastyState* nextState = nullptr; /** Next state in the menu list. */
	TastyMenu* backMenu = nullptr; /** Menu to go back to. */
	TastyMenu* forwardMenu = nullptr; /** Menu to go forward to. */
	TastyMenu* menu = nullptr; /** The menu this state is part of. */

	/**
	 * > Constructs a TastyState with specified parameters.
	 *
	 * | Name          | Type        | Description                                           | Default Value |
	 * |---------------|-------------|-------------------------------------------------------|---------------|
	 * | name          | String      | The name of the state.                               | -             |
	 * | icon          | int8_t      | The icon associated with the state.                  | -1            |
	 * | ledColor      | LedColor    | The LED color for the state.                         | {0, 0, 0}     |
	 * | ledSpeed      | BlinkSpeed  | The LED blink speed for the state.                   | LED_OFF       |
	 * | timeout       | int32_t     | The timeout duration for the state.                  | 0             |
	 * | timeoutState  | TastyState* | The state to transition to on timeout.               | nullptr       |
	 */
	TastyState(String name, int8_t icon = -1, LedColor ledColor = { 0, 0, 0 }, BlinkSpeed ledSpeed = LED_OFF, int32_t timeout = 0, TastyState* timeoutState = nullptr)
		: name{ name }, icon{ icon }, ledColor{ ledColor }, ledSpeed{ ledSpeed }, timeout{ timeout }, onTimeoutState{ timeoutState } {}

	/**
	 * > Copy constructor for TastyState.
	 *
	 * | Name          | Type        | Description                                           | Default Value |
	 * |---------------|-------------|-------------------------------------------------------|---------------|
	 * | state         | TastyState* | The state to copy from.                              | -             |
	 * | timeoutS      | TastyState* | The state to transition to on timeout.                     | nullptr       |
	 */
	TastyState(TastyState* state, TastyState* timeoutS = nullptr) {
		name = state->name;
		icon = state->icon;
		ledColor = state->ledColor;
		ledSpeed = state->ledSpeed;
		timeout = state->timeout;
		// We don't want to copy the states.
		onTimeoutState = timeoutS;
	}

	/**
	 * > Sets the LED color for the state.
	 *
	 * | Name | Type   | Description                          |
	 * |------|--------|--------------------------------------|
	 * | r    | int8_t| Red component of the color.         |
	 * | g    | int8_t| Green component of the color.       |
	 * | b    | int8_t| Blue component of the color.        |
	 */
	void setLEDColor(int8_t r, int8_t g, int8_t b);

	/**
	 * > Sets the LED color for the state.
	 *
	 * | Name  | Type      | Description                          |
	 * |-------|-----------|--------------------------------------|
	 * | color | LedColor  | The LedColor structure containing the RGB values to set the LED. |
	 */
	void setLEDColor(LedColor color);

	/**
	 * > Sets the blink speed for the LED.
	 *
	 * | Name      | Type        | Description                          |
	 * |-----------|-------------|--------------------------------------|
	 * | ledSpeed  | BlinkSpeed  | The blink speed to set.             |
	 */
	void setBlinkSpeed(BlinkSpeed ledSpeed);

	/**
	 * > Gets the timeout duration for the state.
	 *
	 * | Return Type | Description                          |
	 * |-------------|--------------------------------------|
	 * | int32_t    | The timeout duration in milliseconds.|
	 */
	inline int32_t getTimeout() { return timeout; }

	/**
	 * > Sets the timeout duration for the state.
	 *
	 * | Name | Type    | Description                          |
	 * |------|---------|--------------------------------------|
	 * | to   | int32_t| The timeout duration in milliseconds.|
	 */
	inline void setTimeout(int32_t to) { timeout = to; }

	/**
	 * > Adds event handlers for various click events.
	 *
	 * | Name              | Type        | Description                          | Default Value |
	 * |-------------------|-------------|--------------------------------------|---------------|
	 * | clickState        | TastyState* | State to transition to on click event. | -             |
	 * | doubleClickState  | TastyState* | State to transition to on double click event. | nullptr       |
	 * | multiClickState   | TastyState* | State to transition to on multi-click event. | nullptr       |
	 * | longPressState    | TastyState* | State to transition to on long press event. | nullptr       |
	 */
	void addEvents(TastyState* clickState, TastyState* doubleClickState = nullptr, TastyState* multiClickState = nullptr, TastyState* longPressState = nullptr);

	/**
	 * > Handles an event of a specific type.
	 *
	 * | Name | Type              | Description                          |
	 * |------|-------------------|--------------------------------------|
	 * | type | TastyEventType    | The type of the event to handle.    |
	 * | fn   | handler_t         | The handler function to call.       |
	 * | param| void*             | Optional parameter to pass to the handler. | Default is T(). |
	 */
	void onEvent(TastyEventType type, handler_t fn, void* param = T());

	/**
	 * > Processes an event of a specific type.
	 *
	 * | Name | Type              | Description                          |
	 * |------|-------------------|--------------------------------------|
	 * | type | TastyEventType    | The type of the event to process.   |
	 * | Return Type | bool       | True if the event was handled, false otherwise. |
	 */
	bool handleEvent(TastyEventType type);

	/**
	 * > Prints the state information to the console.
	 */
	void print();
};

// Example usage of TastyState class
/*

*/

#include "states/EntryState.h"

extern TastyState* EMPTY_STATE;
#endif