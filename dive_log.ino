// Dive logger software
// drm 20141214
// V0.0 Just sketching out the rough outline
const char *version="dive_log -> V0.1-20160529 ";

#include <Time.h>
#include <TimeLib.h>
#include <Adafruit_GPS.h>
#include <drmLib.h>
#include <Adafruit_NeoPixel.h>
#include <Arduino.h>
#include <Wire.h>

// Analog Pins
#define BATT A7
#define MICIN A5

// Serial Pins
#define GPSTX 1
#define GPSRX 0
#define LOGTX 5
#define LOGRX 6
#define USBTX 
#define USBRX

// I2C Pins
#define SCL 21
#define SDA 20

// Interrupt Pins
#define GPSPPSINT 15
#define ACCINT 16

// Digital Out Pins
#define GPSENABLE 11  
#define NEOOUT 12

void setup() 
{
  // Initialize
  // BLE
  // Serial for GPS
  // Serial for OpenLog
  // display NeoPixel

  // General initalize housekeeping
  // Initialize sensors
    // 10dof
    // depth
    // gps
    // RTC
    // Battery Sense
    pinMode(BATT, INPUT);
    // Microphone input
    // Print serial number and version info
  Serial.begin(115200); // I always use the serial for debug
  drmStartPrint(version);
}

void loop() 
{
  // Dispatch commands
  // d -- data dump
  // i -- initialize
  // l -- load dive plan
  // p -- load parameter database
  
  // sensor loop
  // if interial read 10dof
  // if depth read depth
  // if gps read gps
  // if RTC read RTC
  
  // if any logging read RTC
  // if log write log record
  // if serial write serial data
  // if WiFi send data packet
  // if Wireless send data packet
  
  // Calc display values -- Display values
  // sleep till next event
}
