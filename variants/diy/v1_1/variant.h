/*
 * @Author: chanchu jack.cu@qq.com
 * @Date: 2024-10-19 14:53:20
 * @LastEditors: chanchu chanchu@tesla.com
 * @LastEditTime: 2024-12-28 13:35:11
 * @FilePath: /firmware/variants/diy/v1_1/variant.h
 * @Description: 
 * Copyright (c) 2024 by TESLA/chanchu, All Rights Reserved. 
 */
/*
 * @Author: chanchu jack.cu@qq.com
 * @Date: 2024-10-19 14:53:20
 * @LastEditors: chanchu jack.cu@qq.com
 * @LastEditTime: 2024-10-19 14:59:56
 * @FilePath: /firmware/variants/diy/v1_1/variant.h
 * @Description: 
 * Copyright (c) 2024 by TESLA/chanchu, All Rights Reserved. 
 */

// #define USE_ST7789
#define ST7789_CS 3
#define ST7789_RS 2  // DC
#define ST7789_SDA 6 // MOSI
#define ST7789_SCK 4
#define ST7789_RESET 11
#define ST7789_MISO -1
#define ST7789_BUSY -1
#define ST7789_BL 16
// #define VTFT_CTRL -1
// #define VTFT_LEDA 18
// #define ST7789_BL (32+6)
// #define TFT_BACKLIGHT_ON HIGH
#define ST7789_SPI_HOST SPI3_HOST
#define TFT_BL 16
#define SPI_FREQUENCY 40000000
#define SPI_READ_FREQUENCY 16000000
#define TFT_HEIGHT 240
#define TFT_WIDTH 240
#define TFT_OFFSET_X 0
#define TFT_OFFSET_Y 0
#define TFT_OFFSET_ROTATION 1
#define SCREEN_ROTATE
#define SCREEN_TRANSITION_FRAMERATE 5 // fps

#define SLEEP_TIME 180

// #define EXT_NOTIFY_OUT 21   // Overridden default pin to use for Ext Notify Module (#975).
// #define LED_PIN 17           // add status LED (compatible with core-pcb and DIY targets)
// #define BUTTON_PIN 12 // The middle button GPIO on the T-Beam
// #define BUTTON_NEED_PULLUP


// For OLED LCD
// #define I2C_SDA 7
// #define I2C_SCL 8

// GPS
#define HAS_GPS 0
// #define PIN_GPS_EN 9
// #define GPS_EN_ACTIVE 1
// #define GPS_RX_PIN 11
// #define GPS_TX_PIN 10


#define LORA_DIO0 -1  // a No connect on the SX1262/SX1268 module
#define LORA_RESET 42 // RST for SX1276, and for SX1262/SX1268
#define LORA_DIO1 44  // IRQ for SX1262/SX1268
#define LORA_DIO2 47  // BUSY for SX1262/SX1268
#define LORA_DIO3     // Not connected on PCB, but internally on the TTGO SX1262/SX1268, if DIO3 is high the TXCO is enabled

// In transmitting, set TXEN as high communication level，RXEN pin is low level;
// In receiving, set RXEN as high communication level, TXEN is lowlevel;
// Before powering off, set TXEN、RXEN as low level.
#define LORA_RXEN 48 // Input - RF switch RX control, connecting external MCU IO, valid in high level
#define LORA_TXEN 43 // Input - RF switch TX control, connecting external MCU IO or DIO2, valid in high level


#define LORA_SCK 38
#define LORA_MISO 39
#define LORA_MOSI 40
#define LORA_CS 41

// RX/TX for RFM95/SX127x
#define RF95_RXEN LORA_RXEN
#define RF95_TXEN LORA_TXEN
// #define RF95_TCXO <GPIO#>

// common pinouts for SX126X modules
#define SX126X_CS 41
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_DIO2
#define SX126X_RESET LORA_RESET
#define SX126X_RXEN LORA_RXEN
#define SX126X_TXEN LORA_TXEN

// supported modules list
// #define USE_RF95 // RFM95/SX127x
// #define USE_SX1262
#define USE_SX1268
// #define USE_LLCC68

#ifdef EBYTE_E22
// Internally the TTGO module hooks the SX126x-DIO2 in to control the TX/RX switch
// (which is the default for the sx1262interface code)
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#endif
