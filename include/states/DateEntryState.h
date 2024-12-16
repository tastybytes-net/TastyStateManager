#ifndef TASTY_DATE_ENTRY_STATE_H
#define TASTY_DATE_ENTRY_STATE_H

#include <TastyState.h>
#include "EntryState.h"
#include <TastyDefs.h>

class DateEntryState : public EntryState<DateTimeObj, DateEntryState> {
public:
    uint8_t editIndex = 1;
    DateEntryState(String name, DateTimeObj data, handler_t saveFn, TastyState* returnState);
    void increase();
    void decrease();
    void adjustIndexUp();
    void adjustIndexDown();
};


#endif