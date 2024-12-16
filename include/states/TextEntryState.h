#ifndef TASTY_TEXT_ENTRY_STATE_H
#define TASTY_TEXT_ENTRY_STATE_H

#include <TastyState.h>
#include "EntryState.h"
#include <string>

class TextEntryState : public EntryState<String, TextEntryState> {
public:
    bool caseSensitive;
    static void setDrawFn(handler_t dFn);
    TextEntryState(String name, uint8_t length, String data, handler_t saveFn, TastyState* returnState, bool caseSensitive = false);
    void increase();
    void decrease();
    void adjustIndexUp();
    void adjustIndexDown();
};

#endif