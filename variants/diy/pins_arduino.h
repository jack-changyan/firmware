#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303a
#define USB_PID 0x1001

// The default Wire will be mapped to PMU and RTC
static const uint8_t SDA = 7;
static const uint8_t SCL = 8;

// Default SPI will be mapped to Radio
static const uint8_t MISO = 39;
static const uint8_t SCK = 38;
static const uint8_t MOSI = 40;
static const uint8_t SS = 41;

static const uint8_t BAT_ADC_PIN = 1;

// #define SPI_MOSI                    (11)
// #define SPI_SCK                     (14)
// #define SPI_MISO                    (2)
// #define SPI_CS                      (13)

// #define SDCARD_CS                   SPI_CS

#endif /* Pins_Arduino_h */