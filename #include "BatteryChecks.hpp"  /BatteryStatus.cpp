#include "BatteryChecks.hpp"

// Simple range check for each parameter
bool BatteryIsOk(float temperature, float soc, float chargeRate) {
    bool tempOk = temperature >= 0.0 && temperature <= 45.0;
    bool socOk = soc >= 20.0 && soc <= 80.0;
    bool chargeRateOk = chargeRate <= 0.8;
    return tempOk && socOk && chargeRateOk;
}
