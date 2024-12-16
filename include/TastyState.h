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
 * @brief Represents a state in a Tasty menu system.
 *
 * The TastyState class encapsulates the properties and behaviors of a state in a menu system,
 * including event handling, LED settings, and navigation between states.
 */
class TastyState {
private:
	eventHandler events[12]; ///< Array of event handlers for different event types.
public:
	static int32_t defaultTimeout; ///< Default timeout for states.

	String name; ///< Name of the state.
	int8_t icon = -1; ///< Icon associated with the state.

	LedColor ledColor = { 0, 0, 0 }; ///< LED color for the state.
	BlinkSpeed ledSpeed = LED_OFF; ///< LED blink speed for the state.
	int32_t timeout = 0; ///< Timeout duration for the state.
	unsigned long activatedTime = 0; ///< Time when the state was activated.

	// Event States
	TastyState* onClickState = nullptr; ///< State to transition to on click event.
	TastyState* onDoubleClickState = nullptr; ///< State to transition to on double click event.
	TastyState* onLongPressState = nullptr; ///< State to transition to on long press event.
	TastyState* onMultiClickState = nullptr; ///< State to transition to on multi-click event.
	TastyState* onUpClickState = nullptr; ///< State to transition to on up click event.
	TastyState* onDownClickState = nullptr; ///< State to transition to on down click event.
	TastyState* onLeftClickState = nullptr; ///< State to transition to on left click event.
	TastyState* onRightClickState = nullptr; ///< State to transition to on right click event.
	TastyState* onTimeoutState = nullptr; ///< State to transition to on timeout.

	// Menu States
	int8_t index = -1; ///< Index of the state in the menu.
	// TastyState* previousState = nullptr; ///< Previous state in the menu list.
	// TastyState* nextState = nullptr; ///< Next state in the menu list.
	TastyMenu* backMenu = nullptr; ///< Menu to go back to.
	TastyMenu* forwardMenu = nullptr; ///< Menu to go forward to.
	TastyMenu* menu = nullptr; ///< The menu this state is part of.

	/**
	 * @brief Constructs a TastyState with specified parameters.
	 *
	 * @param name The name of the state.
	 * @param icon The icon associated with the state (default is -1).
	 * @param ledColor The LED color for the state (default is black).
	 * @param ledSpeed The LED blink speed for the state (default is off).
	 * @param timeout The timeout duration for the state (default is 0).
	 * @param timeoutState The state to transition to on timeout (default is nullptr).
	 */
	TastyState(String name, int8_t icon = -1, LedColor ledColor = { 0, 0, 0 }, BlinkSpeed ledSpeed = LED_OFF, int32_t timeout = 0, TastyState* timeoutState = nullptr)
		: name{ name }, icon{ icon }, ledColor{ ledColor }, ledSpeed{ ledSpeed }, timeout{ timeout }, onTimeoutState{ timeoutState } {}

	/**
	 * @brief Copy constructor for TastyState.
	 *
	 * @param state The state to copy from.
	 * @param timeoutS The state to transition to on timeout (default is nullptr).
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
	 * @brief Sets the LED color for the state.
	 *
	 * @param r Red component of the color.
	 * @param g Green component of the color.
	 * @param b Blue component of the color.
	 */
	void setLEDColor(int8_t r, int8_t g, int8_t b);


	/**
	 * @brief Sets the LED color for the state.
	 *
	 * @param color The LedColor structure containing the RGB values to set the LED.
	 */
	void setLEDColor(LedColor color);

	/**
	 * @brief Sets the blink speed for the LED.
	 *
	 * @param ledSpeed The blink speed to set.
	 */
	void setBlinkSpeed(BlinkSpeed ledSpeed);

	/**
	 * @brief Gets the timeout duration for the state.
	 *
	 * @return The timeout duration in milliseconds.
	 */
	inline int32_t getTimeout() { return timeout; }

	/**
	 * @brief Sets the timeout duration for the state.
	 *
	 * @param to The timeout duration in milliseconds.
	 */
	inline void setTimeout(int32_t to) { timeout = to; }

	/**
	 * @brief Adds event handlers for various click events.
	 *
	 * @param clickState State to transition to on click event.
	 * @param doubleClickState State to transition to on double click event (default is nullptr).
	 * @param multiClickState State to transition to on multi-click event (default is nullptr).
	 * @param longPressState State to transition to on long press event (default is nullptr).
	 */
	void addEvents(TastyState* clickState, TastyState* doubleClickState = nullptr, TastyState* multiClickState = nullptr, TastyState* longPressState = nullptr);

	/**
	 * @brief Handles an event of a specific type.
	 *
	 * @param type The type of the event to handle.
	 * @param fn The handler function to call.
	 * @param param Optional parameter to pass to the handler (default is T()).
	 */
	void onEvent(TastyEventType type, handler_t fn, void* param = T());

	/**
	 * @brief Processes an event of a specific type.
	 *
	 * @param type The type of the event to process.
	 * @return True if the event was handled, false otherwise.
	 */
	bool handleEvent(TastyEventType type);

	/**
	 * @brief Forwards events to a specified function.
	 *
	 * @param fn The function to forward events to.
	 * @return True if events were successfully forwarded, false otherwise.
	 */
	bool forwardEvents(ActionFunction fn);

	/**
	 * @brief Prints the state information to the console.
	 */
	void print();
};

// Example usage of TastyState class
/*
TastyState mainMenu("Main Menu", 1, {255, 0, 0}, LED_SLOW, 5000);
TastyState settingsMenu("Settings", 2, {0, 255, 0}, LED_OFF, 3000, &mainMenu);
mainMenu.addEvents(&settingsMenu);
mainMenu.setLEDColor(0, 0, 255);
mainMenu.print();
*/

#include "states/EntryState.h"

extern TastyState* EMPTY_STATE;
#endif