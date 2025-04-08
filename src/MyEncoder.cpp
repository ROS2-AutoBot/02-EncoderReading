#include "MyEncoder.h"

Encoder::Encoder(byte ENCA, byte ENCB)
{
    _ENCA = ENCA; // From the constructor parameter to the local variable
    _ENCB = ENCB;
}

void Encoder::begin()
{
    _encoder.attachFullQuad(_ENCA, _ENCB); // Attach the encoder to the specified pins
    _encoder.setCount(0);                  // Initialize the count to 0
}

long Encoder::getCount() 
{
    return _encoder.getCount(); // Return the current count from the encoder
}
