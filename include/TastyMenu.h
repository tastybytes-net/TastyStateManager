/**
 * # TastyMenu.h
 * > TastyMenu header file, manages setting up states for use as a menu.
 *
 * The TastyMenu class is designed to manage a menu system where each menu can contain
 * multiple states. It allows for the creation of submenus, back navigation, and
 * timeout handling for menu states. This class is particularly useful in applications
 * where a user interface requires a structured menu system.
 *
 * Example usage:
 * ```c++
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
 * ```
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
	/**
	 * Pointer to the head state of the menu.
	 */
	TastyState* head = nullptr;
	/**
	 * Pointer to the previous menu.
	 */
	TastyMenu* backMenu = nullptr;
	/**
	 * Number of states in the menu.
	 */
	uint8_t length = 0;

	static uint16_t defaultMenuTimeout; ///< Default timeout for menu states.
	static TastyState* defaultTimeoutState; ///< Default state to transition to on timeout.
	static handler_t drawFn; ///< Function pointer for drawing the menu.
	static void setDrawFn(handler_t dFn); ///< Set the drawing function.

	/**
	 * Parameter | type | Descirption
	 * | --- | --- | --- |
	 * | len | uint8_t | The length of the menu. |
	 * | ... | TastyState* |The states to add to the menu. |
	 * 
	 *> TastyMenu constructor. Pass in the length and then the states to add.
	 * 
	 * ```c++
	 * TastyMenu( 2, &stateOne, &stateTwo );
	 * ```
	 */
	TastyMenu(uint8_t len, ...);



	/**
	 * Activates a submenu.
	 *
	 * | Name   | Type        | Description                                           |
	 * |--------|-------------|-------------------------------------------------------|
	 * | state  | TastyState* | Pointer to the TastyState to activate the submenu.   |
	 * |        | void*      | Additional data for submenu activation (if needed).  |
	 */
	static bool activateSubMenu(TastyState* state, void*);

	/**
	 * Activates the back menu.
	 *
	 * | Name   | Type        | Description                                           |
	 * |--------|-------------|-------------------------------------------------------|
	 * | state  | TastyState* | Pointer to the TastyState to activate the back menu. |
	 * |        | void*      | Additional data for back menu activation (if needed).|
	 */
	static bool activateBackMenu(TastyState* state, void*);

	/**
	 * Adds a timeout to a specific state.
	 *
	 * | Name   | Type        | Description                                           |
	 * |--------|-------------|-------------------------------------------------------|
	 * | state  | TastyState* | Pointer to the TastyState to which the timeout will be added. |
	 */
	void addTimeoutToState(TastyState* state);

	/**
	 * Adds a new state after an existing state.
	 *
	 * | Name            | Type        | Description                                           |
	 * |-----------------|-------------|-------------------------------------------------------|
	 * | existingState   | TastyState* | Pointer to the existing TastyState.                   |
	 * | newState        | TastyState* | Pointer to the new TastyState to be added.           |
	 */
	void addNextMenuState(TastyState* existingState, TastyState* newState);

	/**
	 * Adds a new state before an existing state.
	 *
	 * | Name            | Type        | Description                                           |
	 * |-----------------|-------------|-------------------------------------------------------|
	 * | existingState   | TastyState* | Pointer to the existing TastyState.                   |
	 * | newState        | TastyState* | Pointer to the new TastyState to be added.           |
	 */
	void addPreviousMenuState(TastyState* existingState, TastyState* newState);

	/**
	 * Adds a submenu to an existing state.
	 *
	 * | Name            | Type        | Description                                           |
	 * |-----------------|-------------|-------------------------------------------------------|
	 * | existingState   | TastyState* | Pointer to the existing TastyState.                   |
	 * | menu            | TastyMenu*  | Pointer to the TastyMenu to be added as a submenu.    |
	 */
	void addSubmenu(TastyState* existingState, TastyMenu* menu);

	/**
	 * Adds a back menu to an existing state.
	 *
	 * | Name            | Type        | Description                                           |
	 * |-----------------|-------------|-------------------------------------------------------|
	 * | existingState   | TastyState* | Pointer to the existing TastyState.                   |
	 * | menu            | TastyMenu*  | Pointer to the TastyMenu to be added as a back menu.  |
	 */
	void addBackMenu(TastyState* existingState, TastyMenu* menu);
};

#endif