#include "BatteryChecks.hpp"

bool isChargeRateOk(float chargeRate) {
  return chargeRate <= 0.8;
}