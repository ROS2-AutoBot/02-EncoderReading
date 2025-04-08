#include <Arduino.h>   // Include the Arduino core library
#include "MyEncoder.h" // Include the custom encoder library

Encoder encoder(23, 22); // Create an instance of the Encoder class with ENCA=23 and ENCB=22

void setup()
{
    Serial.begin(115200); // Initialize serial communication at 115200 baud rate
    encoder.begin();      // Initialize the encoder
}

void loop()
{
    long newPosition = encoder.getCount(); // Get the current count from the encoder
    Serial.println(newPosition);           // Print the count to the serial monitor
}
