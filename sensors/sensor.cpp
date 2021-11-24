#include "sensor.h"


// private default constructor
Sensor::Sensor() {}

// initializer list:  used to directly initialize data members of a class.
Sensor::Sensor(float voltInputMin, float voltInputMax) :
  voltageInputMin(voltInputMin), voltageInputMax(voltInputMax)
{
  std::cout << "Inside the Sensor constructor\n";
}


Sensor::~Sensor() {
  std::cout << "Inside the Sensor destructor\n";
}
