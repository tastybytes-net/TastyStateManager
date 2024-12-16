/**
 * @file TastyStateManager.h
 */

#ifndef TASTY_STATE_MANAGER_H
#define TASTY_STATE_MANAGER_H

#include "OneButton.h"
#include <arduino-timer.h>
#include "TastyDefs.h"
#include <string>
#include "TastyState.h"
#include <logger.h>

class TastyMenu;

struct Timeout {
	TastyState* state;
	uint32_t time;
};


/**
 * @class TastyStateManager
 * @brief Manages the states of a Tasty application, including state transitions, timeouts, and LED control.
 *
 * The TastyStateManager is a singleton class that handles the management of different states in a Tasty application.
 * It allows for setting a default state, managing timeouts, and controlling LED indicators based on the current state.
 * The class provides methods to initialize the state manager, set up states, and handle state transitions.
 *
 * The state manager can be configured with a default state that the application will revert to after a timeout,
 * as well as an intermediary timeout state that can be used for temporary changes during state transitions.
 * Additionally, it supports both single-color and RGB LED configurations to provide visual feedback based on the current state.
 *
 * Example usage:
 *
 * @code
 * #include "TastyStateManager.h"
 * #include "TastyState.h"
 *
 * void setup() {
 *     // Initialize the TastyStateManager
 *     TastyStateManager& manager = TastyStateManager::getInstance();
 *
 *     // Create states
 *     TastyState defaultState;
 *     TastyState timeoutState;
 *
 *     // Setup the manager with default and timeout states
 *     manager.setupDefaultStates(&defaultState, &timeoutState);
 *     manager.setupLed(LED_BUILTIN); // Setup a single LED on the built-in pin
 *
 *     // Begin the state manager
 *     manager.begin(&defaultState, &timeoutState);
 * }
 *
 * void loop() {
 *     // Call the tick function in the main loop
 *     TastyStateManager::getInstance().tick();
 * }
 * @endcode
 */
class TastyStateManager {
private:
	int8_t LED_R = NOT_A_PIN;
	int8_t LED_G = NOT_A_PIN;
	int8_t LED_B = NOT_A_PIN;
	int8_t LED = NOT_A_PIN;

	TastyStateManager();

	static bool stateTimeoutHandler(void*);
	static bool toggleLed(void*);
	static RGBLed EMPTY_RGB_LED;

	void checkTimeout();
	void applyLed();

	TastyState* getTimeoutState();
	int32_t getTimeout();

	static Timer<> timer;
	static Timer<>::Task ledTask;
	static Timer<>::Task timeoutTask;
	static Timeout timeout;



public:

	// Statics for management
	/**
	 * Handle a single click event.
	 *
	 * This method is called when a single click is detected. It can be used to trigger actions
	 * or transitions in the state manager based on user input.
	 */
	static void onClick();

	/**
	 * Handle a double click event.
	 *
	 * This method is called when a double click is detected. It can be used to trigger actions
	 * or transitions in the state manager that are distinct from a single click.
	 */
	static void onDoubleClick();

	/**
	 * Handle a multi-click event.
	 *
	 * This method is called when multiple clicks are detected in quick succession. It can be used
	 * to trigger specific actions or transitions based on the number of clicks.
	 */
	static void onMultiClick();

	/**
	 * Handle a long press event.
	 *
	 * This method is called when a button is pressed and held for an extended period. It can be used
	 * to trigger actions or transitions that require a longer user interaction.
	 */
	static void onLongPress();

	/**
	 * Handle an upward press event.
	 *
	 * This method is called when an upward button press is detected. It can be used to trigger actions
	 * or transitions that correspond to moving up in a menu or increasing a value.
	 */
	static void onUpPress();

	/**
	 * Handle a downward press event.
	 *
	 * This method is called when a downward button press is detected. It can be used to trigger actions
	 * or transitions that correspond to moving down in a menu or decreasing a value.
	 */
	static void onDownPress();

	/**
	 * Handle a rightward press event.
	 *
	 * This method is called when a rightward button press is detected. It can be used to trigger actions
	 * or transitions that correspond to moving right in a menu or selecting an option.
	 */
	static void onRightPress();

	/**
	 * Handle a leftward press event.
	 *
	 * This method is called when a leftward button press is detected. It can be used to trigger actions
	 * or transitions that correspond to moving left in a menu or deselecting an option.
	 */
	static void onLeftPress();

	/**
	 * The active state
	 */
	TastyState* activeState = nullptr;

	/**
	 * The previous state
	 */
	TastyState* lastState = nullptr;

	/**
	 * The default state, state manager will revert back to this after timeouts
	 */
	TastyState* defaultState = nullptr;

	/**
	 * Intermediary state for making changes during timeouts
	 */
	TastyState* defaultTimeoutState = nullptr;

	/**
	 * State of the RGB LED
	 */
	BlinkState ledState;

	/**
	 * Get the singleton instance of TastyStateManager.
	 *
	 * @return Reference to the TastyStateManager instance.
	 */
	static TastyStateManager& getInstance();

	/**
	 * Set the default state for the manager.
	 *
	 * @param state Pointer to the TastyState to set as the default state.
	 */
	void setDefaultState(TastyState* state);

	/**
	 * Set the state that will be an intermediary between "active state" and "default state" when it times out.
	 *
	 * @param state Pointer to the TastyState to set as the timeout state.
	 */
	void setTimeoutState(TastyState* state);

	/**
	 * Setup the LED with a single pin.
	 *
	 * @param ledPin The pin number for the LED.
	 */
	void setupLed(int8_t ledPin);

	/**
	 * Setup the RGB LED with separate pins for red, green, and blue.
	 *
	 * @param ledR The pin number for the red LED.
	 * @param ledG The pin number for the green LED.
	 * @param ledB The pin number for the blue LED.
	 */
	void setupLed(int8_t ledR, int8_t ledG, int8_t ledB);

	/**
	 * Setup the default states for the manager.
	 *
	 * @param defaultS Pointer to the default TastyState.
	 * @param timeoutS Pointer to the timeout TastyState.
	 */
	void setupDefaultStates(TastyState* defaultS = nullptr, TastyState* timeoutS = nullptr);

	/**
	 * Start the library with optional parameters for default and timeout states and LED configuration.
	 *
	 * @param defaultState Pointer to the default TastyState.
	 * @param timeoutState Pointer to the timeout TastyState.
	 * @param ledPin The pin number for the LED (optional).
	 */
	void begin(TastyState* defaultState = nullptr, TastyState* timeoutState = nullptr, int8_t ledPin = NOT_A_PIN);

	/**
	 * Start the library with RGB LED configuration.
	 *
	 * @param defaultState Pointer to the default TastyState.
	 * @param timeoutState Pointer to the timeout TastyState.
	 * @param ledPin RGBLed structure for LED configuration.
	 */
	void begin(TastyState* defaultState = nullptr, TastyState* timeoutState = nullptr, RGBLed ledPin = TastyStateManager::EMPTY_RGB_LED);

	/**
	 * Start the library with default states only.
	 *
	 * @param defaultState Pointer to the default TastyState.
	 * @param timeoutState Pointer to the timeout TastyState.
	 */
	void begin(TastyState* defaultState = nullptr, TastyState* timeoutState = nullptr);

	/**
	 * Main loop function to be called repeatedly.
	 */
	void tick();

	/**
	 * Set the next state for the state manager.
	 *
	 * @param nextState Pointer to the TastyState to transition to. Defaults to the current timeout state.
	 */
	void setState(TastyState* nextState = timeout.state);

	/**
	 * Set the timeout task for the state manager.
	 */
	void setTimeoutTask();
};

#endif