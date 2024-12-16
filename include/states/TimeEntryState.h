#ifndef TASTY_TIME_ENTRY_STATE_H
#define TASTY_TIME_ENTRY_STATE_H

#include <TastyState.h>
#include "EntryState.h"
#include <string>
#include <tastyDefs.h>

class TimeEntryState : public EntryState<DateTimeObj, TimeEntryState> {
public:
    uint8_t editIndex = 1;
    TimeEntryState(String name, DateTimeObj data, handler_t saveFn, TastyState* returnState);
    void increase();
    void decrease();
    void adjustIndexUp();
    void adjustIndexDown();
};





#endif