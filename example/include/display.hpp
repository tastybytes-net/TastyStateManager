#ifndef DISPLAY_HPP
#define DISPLAY_HPP

#include <TastyDefs.h>
#include <TastyStateManager.h>
#include <TastyMenu.h>
#include <TastyState.h>
#include <HT_SSD1306Wire.h>


SSD1306Wire display(0x3c, 500000, SDA_OLED, SCL_OLED, GEOMETRY_128_64, RST_OLED); // addr , freq , i2c group , resolution , rst




bool drawMenu(TastyState* state, void*) {
    // Serial.println("Drawing Menu");
    // TastyMenu* menu = TastyStateManager::getInstance().activeMenu;
    // loginfo(F("Drawing Menu"));
    // TastyState* state = (TastyState*)(s);
    TastyMenu* menu = state->menu;


    display.setColor(WHITE);
    display.setTextAlignment(TEXT_ALIGN_LEFT);

    uint8_t i = 0;
    uint8_t offset = -1 * SCREEN_HEIGHT / 4;

    // ignore the "active state" and get how many extra
    uint8_t extraStates = (NUMBER_OF_MENU_ITEMS_ON_SCREEN - 1) / 2;


    uint8_t x = 0;

    // =========================================
    // Draw Menu Items
    // =========================================
    if (state->onUpClickState != nullptr) {
        drawRoundRect(0, (x * 32) + MENU_ITEM_OFFSET, SCREEN_WIDTH - (MENU_INDICATOR_SIZE + MENU_INDICATOR_SPACING), 28, 6);
        display.setFont(DejaVu_LGC_Sans_ExtraLight_12);
        display.drawString(32, (x * 32) + 8 + MENU_ITEM_OFFSET, state->onUpClickState->name.c_str());
        if (state->onUpClickState->icon != -1) {
            display.drawXbm(8, (x * 32) + 6 + MENU_ITEM_OFFSET, 16, 16, icon_allArray[state->onUpClickState->icon]);
        }
    }
    x++;
    if (state != nullptr) {
        drawRoundRect(0, (x * 32) + MENU_ITEM_OFFSET, SCREEN_WIDTH - (MENU_INDICATOR_SIZE + MENU_INDICATOR_SPACING), 28, 6);
        display.setFont(DejaVu_LGC_Sans_ExtraLight_12);
        display.drawString(32, (x * 32) + 8 + MENU_ITEM_OFFSET, state->name);
        if (state->icon != -1) {
            display.drawXbm(8, (x * 32) + 6 + MENU_ITEM_OFFSET, 16, 16, icon_allArray[state->icon]);
        }
    }
    x++;
    if (state->onDownClickState != nullptr) {
        drawRoundRect(0, (x * 32) + MENU_ITEM_OFFSET, SCREEN_WIDTH - (MENU_INDICATOR_SIZE + MENU_INDICATOR_SPACING), 28, 6);
        display.setFont(DejaVu_LGC_Sans_ExtraLight_12);
        display.drawString(32, (x * 32) + 8 + MENU_ITEM_OFFSET, state->onDownClickState->name);
        if (state->onDownClickState->icon != -1) {
            display.drawXbm(8, (x * 32) + 6 + MENU_ITEM_OFFSET, 16, 16, icon_allArray[state->onDownClickState->icon]);
        }
    }
    // if (state->onDownClickState == nullptr && state->backMenu != nullptr) {
    //     drawRoundRect(0, (x * 32) + MENU_ITEM_OFFSET, SCREEN_WIDTH - (MENU_INDICATOR_SIZE + MENU_INDICATOR_SPACING), 28, 6);
    //     display.setFont(DejaVu_LGC_Sans_ExtraLight_12);
    //     display.drawString(32, (x * 32) + 8 + MENU_ITEM_OFFSET, state->backMenu->head->name);
    //     display.drawXbm(8, (x * 32) + 6 + MENU_ITEM_OFFSET, 16, 16, icon_allArray[9]);
    // }


    // =========================================
    // Menu Indicator
    // =========================================
    uint8_t middle = SCREEN_HEIGHT / 2;
    uint8_t indicator_height = (menu->length * MENU_INDICATOR_SIZE) + ((menu->length - 1) * MENU_INDICATOR_SPACING);
    uint8_t indicator_offset = indicator_height / 2;

    for (x = 0; x < menu->length; ++x) {
        if (x == state->index || x == menu->length) {
            display.fillCircle(SCREEN_WIDTH - (MENU_INDICATOR_SIZE / 2 + MENU_INDICATOR_SPACING / 2), (middle - indicator_offset) + ((MENU_INDICATOR_SIZE + MENU_INDICATOR_SPACING) * x) + MENU_INDICATOR_SPACING / 4, MENU_INDICATOR_SIZE / 2);
        }
        display.drawCircle(SCREEN_WIDTH - (MENU_INDICATOR_SIZE / 2 + MENU_INDICATOR_SPACING / 2), (middle - indicator_offset) + ((MENU_INDICATOR_SIZE + MENU_INDICATOR_SPACING) * x) + MENU_INDICATOR_SPACING / 4, MENU_INDICATOR_SIZE / 2);
    }

    // display.drawRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);





    return true;
}

// void setupEntryDraw( TextEntryState entry ) 
// void setupEntryDraw( DateEntryState entry ) 
template<typename EntryType>
void setupEntryDraw(TastyState* state, EntryType* entry) {
    // loginfo(entry->editIndex);

    display.setColor(DISPLAY_COLOR::INVERSE);
    display.setFont(DejaVu_LGC_Sans_ExtraLight_12);
    display.setTextAlignment(DISPLAY_TEXT_ALIGNMENT::TEXT_ALIGN_LEFT);
    display.drawString(0, SCREEN_HEADER_HEIGHT + 2, state->name);


    display.setFont(DejaVu_LGC_Sans_Mono_Bold_12);
    display.setTextAlignment(DISPLAY_TEXT_ALIGNMENT::TEXT_ALIGN_LEFT);
}

bool drawTextEntry(TastyState* state, void* p) {
    TextEntryState* entry = (TextEntryState*)(p);
    setupEntryDraw<TextEntryState>(state, entry);
    for (uint8_t i = 0; i < entry->length; i++) {
        display.drawString(SCREEN_WIDTH - ((entry->length - i) * 9), 46, String(entry->data.charAt(i)));
        if (i == entry->editIndex && entry->inEdit) {
            display.fillRect(SCREEN_WIDTH - ((entry->data.length() - entry->editIndex) * 9), 47, 8, 14);
        } else if (i == entry->editIndex && !entry->inEdit) {
            display.drawHorizontalLine(SCREEN_WIDTH - ((entry->data.length() - entry->editIndex) * 9), 62, 8);
        }
    }


    return true;
}

bool drawDateEntry(TastyState* state, void* p) {
    DateEntryState* entry = (DateEntryState*)(p);
    setupEntryDraw<DateEntryState>(state, entry);

    // display.drawString(SCREEN_WIDTH, 50, entry->data);

    char buffer[11];
    sprintf(buffer, "%02i/%02i/%04i", entry->data.month, entry->data.day, entry->data.year);
    String date = String(buffer);


    for (uint8_t i = 0; i < entry->length; i++) {

        display.drawString(SCREEN_WIDTH - ((entry->length - i) * 9), 46, String(date.charAt(i)));
        if (i == entry->editIndex && entry->inEdit) {
            display.fillRect(SCREEN_WIDTH - ((date.length() - entry->editIndex) * 9), 47, 8, 14);
        } else if (i == entry->editIndex && !entry->inEdit) {
            display.drawHorizontalLine(SCREEN_WIDTH - ((date.length() - entry->editIndex) * 9), 62, 8);
        }
    }


    return true;
}

bool drawTimeEntry(TastyState* state, void* p) {
    TimeEntryState* entry = (TimeEntryState*)(p);
    setupEntryDraw<TimeEntryState>(state, entry);


    char buffer[11];
    sprintf(buffer, "%02i:%02i", entry->data.hour, entry->data.minute);
    String date = String(buffer);


    for (uint8_t i = 0; i < entry->length; i++) {

        display.drawString(SCREEN_WIDTH - ((entry->length - i) * 9), 46, String(date.charAt(i)));
        if (i == entry->editIndex && entry->inEdit) {
            display.fillRect(SCREEN_WIDTH - ((date.length() - entry->editIndex) * 9), 47, 8, 14);
        } else if (i == entry->editIndex && !entry->inEdit) {
            display.drawHorizontalLine(SCREEN_WIDTH - ((date.length() - entry->editIndex) * 9), 62, 8);
        }
    }

    return true;
}


void display_init() {
    // =========================================
    // DISPLAY
    // =========================================

    display.init();
    display.flipScreenVertically();
    display.setColor(INVERSE);


    TastyMenu::setDrawFn(drawMenu);
    TastyMenu::defaultMenuTimeout = 10000;
    // TastyMenu::defaultTimeoutState = &node_idle;

    TextEntryState::drawFn = drawTextEntry;
    DateEntryState::drawFn = drawDateEntry;
    TimeEntryState::drawFn = drawTimeEntry;

}

#endif