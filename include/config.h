// ===================================================================================
// User Configurations for CH552E USB MacroPad Mini
// ===================================================================================

#pragma once

// Pin definitions
#define PIN_NEO             P15         // pin connected to NeoPixel
// Original for model with 3 keys and 1 knob (CH552G)
// 34
#define PIN_KEY1            P17         // pin connected to key 1
// 11
#define PIN_KEY2            P14         // pin connected to key 2
// 17
#define PIN_KEY3            P16         // pin connected to key 3
#define PIN_ENC_SW          P33         // pin connected to knob switch
#define PIN_ENC_A           P31         // pin connected to knob outA
#define PIN_ENC_B           P30         // pin connected to knob outB

// NeoPixel configuration
#define NEO_GRB                         // type of pixel: NEO_GRB or NEO_RGB

// USB device descriptor
#define USB_VENDOR_ID       0x1189      // VID
#define USB_PRODUCT_ID      0x8891      // PID
#define USB_DEVICE_VERSION  0x0100      // v1.0 (BCD-format)

// USB configuration descriptor
#define USB_MAX_POWER_mA    50          // max power in mA

// USB descriptor strings
#define MANUFACTURER_STR    'm','i','n','d','f','l','a','k','e','s'
#define PRODUCT_STR         't','o','u','c','h','k','e','y'
#define SERIAL_STR          'C','H','5','5','2','x','H','I','D'
#define INTERFACE_STR       'H','I','D','-','K','e','y','b','o','a','r','d'
