#include "BatteryChecks.hpp"
#include <iostream>

bool batteryIsOk(const BatteryStatus& status) {
  bool tempOk = isTemperatureOk(status.temperature);
  bool socOk = isSocOk(status.soc);
  bool chargeOk = isChargeRateOk(status.chargeRate);

  if (!tempOk) std::cout << "Temperature out of range!\n";
  if (!socOk) std::cout << "State of Charge out of range!\n";
  if (!chargeOk) std::cout << "Charge Rate out of range!\n";

  return tempOk && socOk && chargeOk;
}
