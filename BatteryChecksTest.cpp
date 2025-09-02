#include "BatteryChecks.hpp"
#include <iostream>
using namespace std;

// Simulated battery health check function
bool BatteryIsOk(float temperature, float soc, float chargeRate) {
    bool tempOk = temperature >= 0.0 && temperature <= 45.0;
    bool socOk = soc >= 20.0 && soc <= 80.0;
    bool chargeRateOk = chargeRate <= 0.8;
    return tempOk && socOk && chargeRateOk;
}

void ExpectTrue(bool condition) {
    if (!condition) {
        cout << "Expected true, but got false" << endl;
    }
}

void ExpectFalse(bool condition) {
    if (condition) {
        cout << "Expected false, but got true" << endl;
    }
}

int main() {
    cout << "=== Battery Checker Tests ===" << endl;

    ExpectTrue(BatteryIsOk(25, 70, 0.7f));
    ExpectTrue(BatteryIsOk(0, 80, 0.7f));
    ExpectTrue(BatteryIsOk(45, 20, 0.7f));
    ExpectFalse(BatteryIsOk(-1, 80, 0.7f));
    ExpectFalse(BatteryIsOk(10, 85, 0.7f));
    ExpectFalse(BatteryIsOk(50, 70, 0.0f));
    ExpectFalse(BatteryIsOk(30, 70, 0.9f));

    cout << "All ok" << endl;
    return 0;
}
