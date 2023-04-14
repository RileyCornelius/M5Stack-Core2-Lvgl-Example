#include <Arduino.h>
#include <M5Core2.h>
#include "ui/lv_setup.h"

void setup()
{
  M5.begin(); // Initialize the M5Stack peripherals
  lv_begin(); // Initialize LVGL for the Core2 screen
}

void loop()
{
  lv_handler(); // Update UI
}