#include "../../include/states/EntryState.h"

template <typename DataType, typename D>
EntryState<DataType, D>::EntryState(String name, uint8_t length, DataType data_, handler_t saveFn, TastyState* returnState, D* ref) : length{ length }, data{ data_ } {
    // strcpy(data, data_);
    // data = data_;
    saveState = new TastyState("Saving...", -1, LED_WHITE, LED_ULTRA, 1000, returnState);
    saveState->onEvent(TastyEventType::ENTER, saveFn, ref);

    state = new TastyState(name, -1, { 1,1,1 }, LED_OFF, -1, returnState);
    state->addEvents(nullptr, nullptr, returnState, saveState);
    // state->timeout = -1;
    state->onEvent(TastyEventType::CLICK, D::onClick, ref);
    state->onEvent(TastyEventType::UP, D::onUp, ref);
    state->onEvent(TastyEventType::DOWN, D::onDown, ref);
    state->onEvent(TastyEventType::LEFT, D::onLeft, ref);
    state->onEvent(TastyEventType::RIGHT, D::onRight, ref);

    state->onEvent(TastyEventType::TICK, D::drawFn, ref);

    // state->onEvent(TastyEventType::LONG_CLICK, saveFn, ref);
    state->onEvent(TastyEventType::MULTI_CLICK, D::reset, ref);

}




template <typename DataType, typename D>
handler_t EntryState<DataType, D>::drawFn;

template <typename DataType, typename D>
void EntryState<DataType, D>::setDrawFn(handler_t dFn) {
    D::drawFn = dFn;
}

template <typename DataType, typename D>
bool EntryState<DataType, D>::reset(TastyState* state, void* e) {
    D* entry = (D*)(e);
    entry->inEdit = false;
    entry->editIndex = 0;
    entry->data = entry->originalData;
    return true;
}

template <typename DataType, typename D>
bool EntryState<DataType, D>::onClick(TastyState* state, void* e) {
    D* entry = (D*)(e);
    entry->inEdit = !entry->inEdit;
    return true;
}


template <typename DataType, typename D>
bool EntryState<DataType, D>::onRight(TastyState* state, void* e) {
    D* entry = (D*)(e);

    if (entry->inEdit) {
        entry->increase();
    } else {
        entry->editIndex++;
        entry->adjustIndexUp();
        if (entry->editIndex >= entry->length) {
            entry->editIndex = 0;
        }
    }
    return true;
}

template <typename DataType, typename D>
bool EntryState<DataType, D>::onLeft(TastyState* state, void* e) {
    D* entry = (D*)(e);

    if (entry->inEdit) {
        entry->decrease();
    } else {
        entry->editIndex--;
        entry->adjustIndexDown();
        if (entry->editIndex < 0) {
            entry->editIndex = entry->length - 1;
        }
    }
    return true;
}
template <typename DataType, typename D>
bool EntryState<DataType, D>::onUp(TastyState* state, void* e) {
    D* entry = (D*)(e);
    entry->increase();
    return true;
}
template <typename DataType, typename D>
bool EntryState<DataType, D>::onDown(TastyState* state, void* e) {
    D* entry = (D*)(e);
    entry->decrease();
    return true;
}

template <typename DataType, typename D>
void EntryState<DataType, D>::adjustIndexUp() {
    // Override
}
template <typename DataType, typename D>
void EntryState<DataType, D>::adjustIndexDown() {
    // OverRide
}



