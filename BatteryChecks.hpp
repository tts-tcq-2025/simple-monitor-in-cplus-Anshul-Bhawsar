#ifndef BATTERY_CHECKS_HPP
#define BATTERY_CHECKS_HPP

struct BatteryStatus {
  float temperature;
  float soc;
  float chargeRate;
};

bool isTemperatureOk(float temperature);
bool isSocOk(float soc);
bool isChargeRateOk(float chargeRate);
bool batteryIsOk(const BatteryStatus& status);

#endif
