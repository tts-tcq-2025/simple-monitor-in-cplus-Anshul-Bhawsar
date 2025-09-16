#include "BatteryChecks.hpp"
#include <assert.h>

int main() {
  BatteryStatus status1 = {25, 70, 0.7};
  BatteryStatus status2 = {50, 85, 0};
  BatteryStatus status3 = {0, 20, 0.8};
  BatteryStatus status4 = {-1, 50, 0.5};
  BatteryStatus status5 = {25, 19, 0.5};
  BatteryStatus status6 = {25, 50, 0.9};

  assert(batteryIsOk(status1) == true);
  assert(batteryIsOk(status2) == false);
  assert(batteryIsOk(status3) == true);
  assert(batteryIsOk(status4) == false);
  assert(batteryIsOk(status5) == false);
  assert(batteryIsOk(status6) == false);
}
