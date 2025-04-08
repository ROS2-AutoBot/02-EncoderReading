#ifndef MY_ENCODER_H // Include guard to prevent multiple inclusions of this header file
#define MY_ENCODER_H

#include <Arduino.h>      // Include the Arduino core library
#include <ESP32Encoder.h> // Look at the paltformIO.ici to integrate external libraries: https://github.com/madhephaestus/ESP32Encoder.git

class Encoder
{
public:
    Encoder(byte ENCA, byte ENCB); // Constructor to initialize the encoder object with pin numbers
    void begin();                  // Method to initialize the encoder
    long getCount();               // Method to get the current count of the encoder

private:
    byte _ENCA, _ENCB;     // Local variable for the ENCA and ENCB
    ESP32Encoder _encoder; // Instance of the ESP32Encoder class to handle encoder functionality
};

#endif