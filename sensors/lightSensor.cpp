#include "lightSensor.h"

// constructor delegation --> use default values
LightSensor::LightSensor() : LightSensor(3, 70000) {}

// initializer list:  used to directly initialize data members of a class.
LightSensor::LightSensor(float lightLevelMin, float lightLevelMax) : Sensor(0.0f, 5.0f),
  lightLevelMin(lightLevelMin), lightLevelMax(lightLevelMax) {
  std::cout << "Inside the LightSensor constructor\n";
}

LightSensor::~LightSensor() {
  std::cout << "Inside the LightSensor destructor\n";
}
