#include "sensor.h"


// private default constructor
Sensor::Sensor() {}

// initializer list:  used to directly initialize data members of a class.
Sensor::Sensor(float voltInputMin, float voltInputMax) :
  voltInputMin(voltInputMin), voltInputMax(voltInputMax)
{
  std::cout << "Inside the Sensor constructor\n";
}


Sensor::~Sensor() {
  std::cout << "Inside the Sensor destructor\n";
}


void Sensor::setVoltageInputMin(float voltInputMin) {
  this->voltInputMin = voltInputMin;
}

float Sensor::getVoltageInputMin() {
  return voltInputMin;
}

void Sensor::setVoltageInputMax(float voltInputMax) {
  this->voltInputMax = voltInputMax;
}

float Sensor::getVoltageInputMax() {
  return voltInputMax;
}
