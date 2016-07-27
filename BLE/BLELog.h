
#ifndef BLE_LOG_H
#define BLE_LOG_H

#include "BLETypes.h"
#include <ti/sysbios/knl/Task.h>

extern uint8_t logLevel;
extern bool apLogLock; // AP owns logging if true

void logSetMainTask(Task_Handle mainTask);

void logParam(const char name[], const uint8_t buf[], uint16_t len);
void logParam(const char name[], int value);
void logParam(const char name[], int value, int base);
void logParam(const char value[]);
void logError(const char msg[]);
void logRPC(const char msg[]);
void logAsync(const char name[], uint8_t cmd1);
void logChar(const char msg[]);
void logState(const char msg[]);

#endif
