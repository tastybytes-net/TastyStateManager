// Logger from Cluster Duck Protocol
#ifndef TASTY_LOGGER_H
#define TASTY_LOGGER_H

#ifndef TB_NO_LOG
#include "Arduino.h"
#define TB_DEBUG
#endif

#ifdef TB_DEBUG
#define TB_LOG_ERROR
#define TB_LOG_INFO
// #define TB_LOG_DEBUG
// #define TB_LOG_WARN
#endif

#ifndef __FILENAME__
#define __FILENAME__                                                           \
  (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)
#endif

#if defined(TB_LOG_ERROR)
#define logerr(...)                                                            \
  do {                                                                         \
    Serial.print("[ERR: ");                                                    \
    Serial.print(String(__FILENAME__) + ":" + String(__LINE__) + "]  ");       \
    Serial.println(__VA_ARGS__);                                               \
  } while (0)
#if !defined(ARDUINO_SAMD_ZERO)
#define logerr_f(...)                                                          \
  do {                                                                         \
    Serial.print("[ERR: ");                                                    \
    Serial.print(String(__FILENAME__) + ":" + String(__LINE__) + "]  ");       \
    Serial.printf(__VA_ARGS__);                                                \
  } while (0)
#endif
#else
#define logerr(...)                                                            \
  {}
#define logerr_f(...)                                                          \
  {}
#endif

#if defined(TB_LOG_WARN)
#define logwarn(...)                                                           \
  do {                                                                         \
    Serial.print("[WRN: ");                                                    \
    Serial.print(String(__FILENAME__) + ":" + String(__LINE__) + "]  ");       \
    Serial.println(__VA_ARGS__);                                               \
  } while (0)
#if !defined(ARDUINO_SAMD_ZERO)
#define logwarn_f(...)                                                         \
  do {                                                                         \
    Serial.print("[WRN: ");                                                    \
    Serial.print(String(__FILENAME__) + ":" + String(__LINE__) + "]  ");       \
    Serial.printf(__VA_ARGS__);                                                \
    Serial.println();                                                          \
  } while (0)
#endif
#else
#define logwarn(...)                                                           \
  {}
#define logwarn_f(...)                                                         \
  {}
#endif

#if defined(TB_LOG_INFO)
#define loginfo(...)                                                           \
  do {                                                                         \
    Serial.print("[INF: ");                                                    \
    Serial.print(String(__FILENAME__) + ":" + String(__LINE__) + "]  ");                                \
    Serial.println(__VA_ARGS__);                                               \
  } while (0)
#if !defined(ARDUINO_SAMD_ZERO)
#define loginfo_f(...)                                                         \
  do {                                                                         \
    Serial.print("[INF: ");                                                    \
    Serial.print(String(__FILENAME__) + ":" + String(__LINE__) + "]  ");                                \
    Serial.printf(__VA_ARGS__);                                                \
    Serial.println();                                                          \
  } while (0)
#endif
#else
#define loginfo(...)                                                           \
  {}
#define loginfo_f(...)                                                         \
  {}
#endif

#if defined(TB_LOG_DEBUG)
#define logdbg(...)                                                            \
  do {                                                                         \
    Serial.print("[DBG: ");                                                    \
    Serial.print(String(__FILENAME__) + "]  ");                                \
    Serial.println(__VA_ARGS__);                                               \
  } while (0)
#if !defined(ARDUINO_SAMD_ZERO)
#define logdbg_f(...)                                                          \
  do {                                                                         \
    Serial.print("[DBG: ");                                                    \
    Serial.print(String(__FILENAME__) + "]  ");                                \
    Serial.printf(__VA_ARGS__);                                                \
    Serial.println();                                                          \
  } while (0)
#endif
#else
#define logdbg(...)                                                            \
  {}
#define logdbg_f(...)                                                          \
  {}
#endif
#endif
