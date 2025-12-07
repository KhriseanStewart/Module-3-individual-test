// Name: Khrisean Stewart
// Date: 2025-12-06
// Id Number: 2401010326
// Question: 2
// Instructor: Doron Williams

#include <iostream>
#include <iomanip>
using namespace std;

class Converter {
private:
    float value;
public:
    // default value to 1.0
    Converter() : value(1.0f) { }

    Converter(float v) {
        if (v > 0.0f) value = v;
        else { cout << "0value must be > 0.0. setting to 1.0\n"; value = 1.0f; }
    }

    float usdToJmd() {
        float res = value * 159.41f;
        cout << fixed << setprecision(2) << value << " USD to Jamaica dallor is appox " << res << " JMD\n";
        return res;
    }

    float milesToKilometers() const {
        float res = value * 1.609f;
        cout << fixed << setprecision(2) << value << " Miles is appox " << res << " Kilometers\n";
        return res;
    }

    float fahrenheitToCelsius() const {
        float res = (value - 32.0f) * 5.0f/9.0f;
        cout << fixed << setprecision(2) << value << " Fahrenheit is appox " << res << " Celsius\n";
        return res;
    }

    float poundsToKilograms() const {
        float res = value / 2.205f;
        cout << fixed << setprecision(2) << value << " Pounds is appox " << res << " Kilograms\n";
        return res;
    }

    float gallonsToLitres() const {
        float res = value * 3.785f;
        cout << fixed << setprecision(2) << value << " Gallons is appox " << res << " Litres\n";
        return res;
    }
};

int main() {
    Converter c1;
    c1.usdToJmd();

    Converter c2(5.0f);
    c2.milesToKilometers();
    c2.fahrenheitToCelsius();
    c2.poundsToKilograms();
    c2.gallonsToLitres();

    Converter c3(-2.0f);
    c3.usdToJmd();

    return 0;
}
