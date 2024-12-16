#ifndef TASTY_DEFS_H
#define TASTY_DEFS_H

#include <Arduino.h>
class TastyState;

#ifndef NOT_A_PIN
#define NOT_A_PIN -1
#endif

struct DateTimeObj {
	uint8_t hour;
	uint8_t minute;
	uint8_t second = 0;
	uint8_t month;
	uint8_t day;
	uint16_t year;
};

// -----------------------------
// LED
// -----------------------------
struct LedColor {
	uint8_t r;
	uint8_t g;
	uint8_t b;
};
extern LedColor LED_RED;	// = { 255, 0, 0 };
extern LedColor LED_ORANGE; // = { 255, 175, 0 };
extern LedColor LED_YELLOW; // = { 255, 255, 0 };
extern LedColor LED_GREEN;	// = { 0, 255, 0 };
extern LedColor LED_TEAL;	// = { 0, 255, 255 };
extern LedColor LED_BLUE;	// = { 0, 0, 255 };
extern LedColor LED_PURPLE; // = { 255, 0, 255 };
extern LedColor LED_WHITE; // = { 255, 255, 255 };

struct RGBLed {
	int8_t r = NOT_A_PIN;
	int8_t g = NOT_A_PIN;
	int8_t b = NOT_A_PIN;
};

typedef bool (*ActionFunction)();
struct ActionFunctions {
	ActionFunction onEnter = nullptr;
	ActionFunction onTick = nullptr;
	ActionFunction onLeave = nullptr;
};

typedef void* T;
typedef bool (*handler_t)(TastyState* state, T opaque); /* task handler func signature */
struct eventHandler {
	handler_t callback = nullptr;
	void* param = T();
};

extern const unsigned char icon_empty[];



enum BlinkSpeed {
	LED_OFF,
	LED_SLOW,
	LED_MODERATE,
	LED_FAST,
	LED_ULTRA,
	LED_STEADY
};

struct BlinkState {
	unsigned long onTime = 0;
	unsigned long offTime = 0;
	bool on = false;
	BlinkSpeed speed = LED_OFF;
	bool blinking = false;
	LedColor color = { 0, 0, 1 };
};

extern int16_t blinkSpeedValues[6]; // = { 0, 1000, 500, 250, 50, 1 };


enum class TastyEventType {
	ENTER = 0,
	TICK = 1,
	LEAVE = 2,
	UP = 3,
	DOWN = 4,
	RIGHT = 5,
	LEFT = 6,
	CLICK = 7,
	DOUBLE_CLICK = 8,
	MULTI_CLICK = 9,
	LONG_CLICK = 10,
	TIMEOUT = 11
};


#endif