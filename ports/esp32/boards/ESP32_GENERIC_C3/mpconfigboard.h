// This configuration is for a generic ESP32C3 board with 4MiB (or more) of flash.

#ifndef MICROPY_HW_BOARD_NAME
#define MICROPY_HW_BOARD_NAME               "ESP32C3 CAN Module"
#endif
#define MICROPY_HW_MCU_NAME                 "ESP32-C3"

#define MICROPY_HW_ENABLE_UART_REPL  (0)
#define MICROPY_HW_ENABLE_CAN        (1)
#define MICROPY_HW_CAN1_TX          (21)
#define MICROPY_HW_CAN1_RX          (20)