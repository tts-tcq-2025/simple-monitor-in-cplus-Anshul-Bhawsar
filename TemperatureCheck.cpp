#include "BatteryChecks.hpp"

bool isTemperatureOk(float temperature) {
  return temperature >= 0 && temperature <= 45;
}
