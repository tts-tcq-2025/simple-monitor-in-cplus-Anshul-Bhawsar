#include "BatteryChecks.hpp"

int main() {
  BatteryStatus battery = {30, 60, 0.5};
  if (batteryIsOk(battery)) {
    std::cout << "Battery is OK.\n";
  } else {
    std::cout << "Battery is NOT OK.\n";
  }
}
