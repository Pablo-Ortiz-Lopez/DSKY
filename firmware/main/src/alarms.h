#include <Arduino.h>

#define LED_PIN 5 // PD5 pin for SK8612 data line.
#define NUM_LEDS 34 // 14 original LEDs + 20 for the keyboard.

void initAlarms();
void updateAlarms(uint8_t *dskyState);