#ifndef CONTROLS_HPP
#define CONTROLS_HPP

#include <OneButton.h>
#include <TastyDefs.h>
#include <TastyStateManager.h>
#include <TastyMenu.h>
#include <TastyState.h>

OneButton* rotaryBtn;
OneButton* selectBtn;
OneButton* leftBtn;
OneButton* upBtn;
OneButton* downBtn;
OneButton* rightBtn;

void setupSelectButton(OneButton* btn) {
    btn->attachClick(TastyStateManager::onClick);
    btn->attachDoubleClick(TastyStateManager::onDoubleClick);
    btn->attachMultiClick(TastyStateManager::onMultiClick);
    btn->attachLongPressStart(TastyStateManager::onLongPress);

    btn->setPressMs(2000);
}

// Set up rotary for State Manager
void initRotarySM(int8_t pin, bool activeLow, bool pullupActive, bool withInterrupt) {
    if (pin > -1) {
        Serial.printf("OneButton Pin %i", pin);
        Serial.println();
        rotaryBtn = new OneButton(pin, activeLow, pullupActive);

        // if (withInterrupt) {
        //     attachInterrupt(pin, TastyStateManager::handleInterrupt, CHANGE);
        // }
    }

    setupSelectButton(rotaryBtn);

    // rotaryBtn->attachClick(TastyStateManager::onClick);
    // rotaryBtn->attachDoubleClick(TastyStateManager::onDoubleClick);
    // rotaryBtn->attachMultiClick(TastyStateManager::onMultiClick);
    // rotaryBtn->attachLongPressStart(TastyStateManager::onLongPress);

    // rotaryBtn->setPressMs(2000);
}

void initArrowButtons() {
    // selectBtn->attachPress(TastyStateManager::onClick);
    selectBtn = new OneButton();
    upBtn = new OneButton();
    downBtn = new OneButton();
    leftBtn = new OneButton();
    rightBtn = new OneButton();

    setupSelectButton(selectBtn);

    upBtn->attachClick(TastyStateManager::onUpPress);
    downBtn->attachClick(TastyStateManager::onDownPress);
    leftBtn->attachClick(TastyStateManager::onLeftPress);
    rightBtn->attachClick(TastyStateManager::onRightPress);

    upBtn->attachDuringLongPress(TastyStateManager::onUpPress);
    upBtn->setLongPressIntervalMs(250);
    downBtn->attachDuringLongPress(TastyStateManager::onDownPress);
    downBtn->setLongPressIntervalMs(250);

    // selectBtn->attachDoubleClick(TastyStateManager::onDoubleClick);
    // selectBtn->attachLongPressStart(TastyStateManager::onLongPress);

    // selectBtn->setPressMs(2000);
}

#endif