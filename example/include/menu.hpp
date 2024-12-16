#ifndef MENU_HPP
#define MENU_HPP

// =========================================
// States
// =========================================
#include <TastyDefs.h>
#include <TastyStateManager.h>
#include <TastyMenu.h>
#include <TastyState.h>
#include <logger.h>
#include <settings.hpp>
#include <arduino-timer.h>

TastyStateManager& tastySM = TastyStateManager::getInstance();

// =========================================
// Set up states`
// =========================================
TastyState node_idle("Node Idle", -1, { 0, 1, 0 }, LED_OFF, -1);
TastyState node_timeout("Node Timeout"); //, { 1, 0, 0 }, LED_ULTRA, 500, node_idle );
TastyState node_menu("Menu", -1, LED_WHITE, LED_FAST);


// Join requests
// TastyState node_join("Node Join Network", 15000, &node_menu);                     //, { 0, 0, 1 }, LED_MODERATE );
// TastyState node_join_confirm("Joining Open Network");          //, { 0, 0, 1 }, LED_FAST, 20000 );
// TastyState node_join_await_handshake("Awaiting Handshake");    //, { 0, 0, 1 }, LED_ULTRA, 20000 );
// TastyState node_join_handshake_received("Handshake Received"); //, { 0, 1, 0 }, LED_STEADY, 3000, node_idle );


// Menu States
TastyState menu_sensors("Sensors", 12); //, {0,0,0}, LED_OFF );
TastyState menu_sensors_healthcheck("Healthcheck", 6); //, {0,0,0}, LED_OFF );
TastyState sensorHealthCheck("Waiting on Responses");


// TastyState *menu_sensors_view = new TastyState("View Sensors");
TastyState menu_settings("Settings", 13); //, {0,0,0}, LED_OFF );

TastyState menu_settings_dateTime("Date / Time", 21); //, {0,0,0}, LED_OFF );
TastyState menu_settings_dateTime_date("Date", 22); //, {0,0,0}, LED_OFF );
TastyState menu_settings_dateTime_time("Time", 21); //, {0,0,0}, LED_OFF );

TastyState menu_settings_wifi("Wifi", 19);
TastyState menu_settings_wifi_ssid("SSID");
TastyState menu_settings_wifi_pass("Password");

TastyState menu_settings_id("Node ID");

TastyState menu_timers("Timers", 17); //, {0,0,0}, LED_OFF );


// Node ID
TastyState* node_id_enter;
TastyState node_id_confirm("Confirm Node ID", -1, { 1,1,1 }, LED_SLOW);

// Save State
TastyState node_saving("Saving...", -1, { 1,1,1 }, LED_ULTRA, 1000);




TastyMenu* mainMenu;     // = new TastyMenu( 2, menu_sensors, menu_settings );
TastyMenu* sensorsMenu; // = new TastyMenu( 2, menu_settings_wifi, menu_settings_id );
TastyMenu* settingsMenu; // = new TastyMenu( 2, menu_settings_wifi, menu_settings_id );
TastyMenu* dateTimeMenu; // = new TastyMenu( 2, menu_settings_wifi, menu_settings_id );
TastyMenu* wifiMenu;     // = new TastyMenu( 2, menu_settings_wifi_ssid, menu_settings_wifi_pass );
TastyMenu* activeMenu;



bool saveDateTime(TastyState* state, void* e) {
    // drawSaving();
    DateEntryState* entry = (DateEntryState*)(e);
    logdbg_f("Saving Date %i/%i/%i %i:%i:%i", entry->data.month, entry->data.day, entry->data.year, entry->data.hour, entry->data.minute, entry->data.second);
    // rtc.adjust(DateTime(entry->data.year, entry->data.month, entry->data.day, entry->data.hour, entry->data.minute, entry->data.second));
    delay(1000);
    return true;
}

bool setDateForMenuItem(TastyState* state, void* p) {
    DateEntryState* entry = (DateEntryState*)(p);
    entry->data = setDate();
    return true;
}

void menu_init() {



    Serial.println("[ Menu ] Init");
    // node_id_enter = createTextEntryState("Enter Node ID", 8, settings["id"].as<const char*>());
    TextEntryState* text_id_enter = new TextEntryState("Enter Node ID", 8, settings["id"].as<String>(), [](TastyState* state, void* e) -> bool {
        TextEntryState* entry = (TextEntryState*)(e);
        settings["id"] = entry->data;
        return saveSettings();
        }, &menu_settings_id);
    menu_settings_id.addEvents(text_id_enter->state);
    Serial.println("[ Menu ] text_id_enter ");

    TextEntryState* text_SSID_enter = new TextEntryState("Enter WIFI SSID", 8, settings["wifi"]["ssid"].as<String>(), [](TastyState* state, void* e) -> bool {
        TextEntryState* entry = (TextEntryState*)(e);
        settings["wifi"]["SSID"] = entry->data;
        return saveSettings();
        }, &menu_settings_wifi_ssid);
    menu_settings_wifi_ssid.addEvents(text_SSID_enter->state);

    TextEntryState* text_WiFi_pass_enter = new TextEntryState(F("Enter WIFI Password"), 8, settings["wifi"]["pass"].as<String>(), [](TastyState* state, void* e) -> bool {
        TextEntryState* entry = (TextEntryState*)(e);
        settings["wifi"]["pass"] = entry->data;
        return saveSettings();
        }, &menu_settings_wifi_pass);
    menu_settings_wifi_pass.addEvents(text_WiFi_pass_enter->state);

    DateEntryState* date_date_enter = new DateEntryState(F("Enter Date"), setDate(), [](TastyState* state, void* e) -> bool {
        return saveDateTime(state, e);
        }, &menu_settings_dateTime_date);
    menu_settings_dateTime_date.addEvents(date_date_enter->state);

    TimeEntryState* time_time_enter = new TimeEntryState(F("Enter Time"), setDate(), [](TastyState* state, void* e) -> bool {
        DateEntryState* entry = (DateEntryState*)(e);
        rtc.adjust(DateTime(entry->data.year, entry->data.month, entry->data.day, entry->data.hour, entry->data.minute, entry->data.second));
        return true;
        }, &menu_settings_dateTime_time);
    menu_settings_dateTime_time.addEvents(time_time_enter->state);

    // Menu


    mainMenu = new TastyMenu(3, &menu_sensors, &menu_settings, &menu_timers);
    sensorsMenu = new TastyMenu(1, &menu_sensors_healthcheck);
    settingsMenu = new TastyMenu(3, &menu_settings_dateTime, &menu_settings_wifi, &menu_settings_id);
    dateTimeMenu = new TastyMenu(2, &menu_settings_dateTime_date, &menu_settings_dateTime_time);
    wifiMenu = new TastyMenu(2, &menu_settings_wifi_ssid, &menu_settings_wifi_pass);

    mainMenu->addSubmenu(&menu_sensors, sensorsMenu);
    mainMenu->addSubmenu(&menu_settings, settingsMenu);
    settingsMenu->addSubmenu(&menu_settings_dateTime, dateTimeMenu);
    settingsMenu->addSubmenu(&menu_settings_wifi, wifiMenu);
    Serial.println("[ Menu ] Sub Menus Added ");

    // node_menu.onEvent(TastyEventType::TICK, drawMenu);
    // node_menu.onEvent(TastyEventType::CLICK, menuClick);
    // sensorHealthCheck.onEvent(TastyEventType::ENTER, [&duck](TastyState* state, void*) -> bool {
    //     duck.sendPing();
    //     loginfo("DONE");
    //     // loginfo(duck.sendPing());
    //     // inHealthCheck = true;
    //     return true;
    //     });
    // sensorHealthCheck.onEvent(TastyEventType::TICK, [&duck](TastyState* state, void*) -> bool {
    //     // tastySM.setState(&sensorHealthCheck);
    //     return true;
    //     });



    // date_date_enter->state->onEvent(TastyEventType::ENTER, setDateForMenuItem, date_date_enter);
    // time_time_enter->state->onEvent(TastyEventType::ENTER, setDateForMenuItem, time_time_enter);
    node_idle.onEvent(TastyEventType::ENTER, [](TastyState* state, void*) -> bool { loginfo("IDLE ENTER"); displayOff(); return true; });
    node_idle.onEvent(TastyEventType::LEAVE, [](TastyState* state, void*) -> bool { loginfo("IDLE LEAVE"); wakeup(); return true; });
    node_idle.addEvents(&node_menu);

    menu_sensors.setTimeout(10000);

    Serial.println("[ Menu ] Events Added ");

    // menu_sensors_healthcheck.addEvents(&sensorHealthCheck);
    // menu_sensors.onEvent(TastyEventType::CLICK, [](TastyState* state, void*) -> bool { std::vector<byte> sValue = {}; duck.sendCommand(0, sValue); return true; });


    // menu_settings_id.addEvents(node_id_enter);
    // node_id_enter->addEvents(nullptr, nullptr, nullptr, &node_id_confirm);


    // node_menu.timeout = 10;
    // node_menu.onTimeoutState = mainMenu->head;
    tastySM.begin(mainMenu->head, &node_idle, ONBOARD_LED);

    Serial.println("[ Menu ] State Manager Begin ");

    // =========================================
    // STATES AND MENU
    // =========================================


    tastySM.tick();
    Serial.println("[ Menu ] Init finalized ");

}


#endif