#include "sensor.h"

// class default settings based on a phidget light sensor
// https://www.phidgets.com/?tier=3&catid=8&pcid=6&prodid=116

class LightSensor : public Sensor {
public:
  LightSensor();
  LightSensor(float lightLevelMin, float lightLevelMax);
  ~LightSensor();
  // setters and getters for protected fields
  void setLightLevelMin(float lightLevelMin);
  float getLightLevelMin();
  void setLightLevelMax(float lightLevelMax);
  float getLightLevelMax();

protected:
  // light level value in lx
  float lightLevelMin;
  float lightLevelMax;
};
