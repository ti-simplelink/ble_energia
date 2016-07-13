
#include "BLEServices.h"

/* Nordic Semiconductor's UART Service */

BLE_Char txChar =
{
  {0x9E, 0xCA, 0xDC, 0x24, 0x0E, 0xE5, 0xA9, 0xE0,
   0x93, 0xF3, 0xA3, 0xB5, 0x03, 0x00, 0x40, 0x6E},
  BLE_READABLE | BLE_NOTIFIABLE,
  "Client RX"
};

BLE_Char rxChar =
{
  {0x9E, 0xCA, 0xDC, 0x24, 0x0E, 0xE5, 0xA9, 0xE0,
   0x93, 0xF3, 0xA3, 0xB5, 0x02, 0x00, 0x40, 0x6E},
  BLE_WRITABLE,
  "Client TX"
};

BLE_Char *serialServiceChars[] = {&txChar, &rxChar};

BLE_Service serialService =
{
  {0x9E, 0xCA, 0xDC, 0x24, 0x0E, 0xE5, 0xA9, 0xE0,
   0x93, 0xF3, 0xA3, 0xB5, 0x01, 0x00, 0x40, 0x6E},
  2, serialServiceChars
};