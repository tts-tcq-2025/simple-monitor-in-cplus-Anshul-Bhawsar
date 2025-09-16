#include "BatteryChecks.hpp"

bool isSocOk(float soc) {
  return soc >= 20 && soc <= 80;
}
