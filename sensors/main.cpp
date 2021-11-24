#include "lightSensor.h"


int main () {
  LightSensor lightSensor;

  std::cout << "lightSensor.voltageInputMin = "
    << lightSensor.getVoltageInputMin()
    << "\n";

  std::cout << "lightSensor.voltageInputMin = "
    << lightSensor.getVoltageInputMax()
    << "\n";

  std::cout << "lightSensor.lightLevelMin = "
    << lightSensor.getLightLevelMin()
    << "\n";

  std::cout << "lightSensor.lightLevelMax = "
    << lightSensor.getLightLevelMax()
    << "\n";

  // end program
  return 0;
}
