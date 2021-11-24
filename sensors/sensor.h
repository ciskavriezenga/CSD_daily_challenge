#include <iostream>

class Sensor {
public:
  Sensor(float voltInputMin, float voltInputMax);
  ~Sensor();
  // setters and getters for protected fields
  void setVoltageInputMin(float voltInputMin);
  float getVoltageInputMin();
  void setVoltageInputMax(float voltInputMax);
  float getVoltageInputMax();

protected:
  float voltageInputMin;
  float voltageInputMax;

private:
  // private sensor to prevent usage of the default constructor,
  // to ensure we can not create a Sensor object without setting
  // the volatage input min and max fields
  Sensor();
};
