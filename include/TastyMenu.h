/**
 * @file TastyMenu.h
 * @brief TastyMenu header file, manages setting up states for use as a menu.
 *
 * The TastyMenu class is designed to manage a menu system where each menu can contain
 * multiple states. It allows for the creation of submenus, back navigation, and
 * timeout handling for menu states. This class is particularly useful in applications
 * where a user interface requires a structured menu system.
 *
 * Example usage:
 * @code
 * TastyState* stateOne = new TastyState( "State One");
 * TastyState* stateTwo = new TastyState( "State Two");
 * TastyMenu myMenu(2, &stateOne, &stateTwo);
 *
 * // Adding a submenu
 * TastyMenu subMenu(1, &stateThree);
 * myMenu.addSubmenu(&stateOne, &subMenu);
 *
 * // Adding a back menu
 * TastyMenu backMenu(1, &stateBack);
 * myMenu.addBackMenu(&stateTwo, &backMenu);
 * @endcode
 *
 * @author Brian Kelley
 * @date 2023-12-09
 */

#ifndef TASTY_MENU_H
#define TASTY_MENU_H

#include "TastyDefs.h"
#include "TastyState.h"
#include "TastyStateManager.h"
#include <logger.h>

class TastyMenu {
private:
	TastyStateManager& tastySM = TastyStateManager::getInstance();

	void initializeState(TastyState* state, uint8_t index);

	void calculateIndices(TastyState* initialState);
	void addEvents(TastyState* state);

public:
	TastyState* head = nullptr; ///< Pointer to the head state of the menu.
	TastyMenu* backMenu = nullptr; ///< Pointer to the previous menu.
	uint8_t length = 0; ///< Number of states in the menu.

	static uint16_t defaultMenuTimeout; ///< Default timeout for menu states.
	static TastyState* defaultTimeoutState; ///< Default state to transition to on timeout.
	static handler_t drawFn; ///< Function pointer for drawing the menu.
	static void setDrawFn(handler_t dFn); ///< Set the drawing function.

	/**
	 * @brief TastyMenu constructor. Pass in the length and then the states to add.
	 *
	 * @param len The length of the menu.
	 * @param ... The states to add to the menu.
	 * @example
	 * TastyMenu( 2, &stateOne, &stateTwo );
	 */
	TastyMenu(uint8_t len, ...);

	

	static bool activateSubMenu(TastyState* state, void*); ///< Activates a submenu.
	static bool activateBackMenu(TastyState* state, void*); ///< Activates the back menu.

	void addTimeoutToState(TastyState* state); ///< Adds a timeout to a specific state.

	void addNextMenuState(TastyState* existingState, TastyState* newState); ///< Adds a new state after an existing state.
	void addPreviousMenuState(TastyState* existingState, TastyState* newState); ///< Adds a new state before an existing state.

	void addSubmenu(TastyState* existingState, TastyMenu* menu); ///< Adds a submenu to an existing state.
	void addBackMenu(TastyState* existingState, TastyMenu* menu); ///< Adds a back menu to an existing state.
};

#endif