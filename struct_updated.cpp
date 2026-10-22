#include <iostream>
#include <string_view>

struct Sensor
{
    std::string_view name;
    int pinNumber;
    bool isActive;
};

int main()
{
    constexpr Sensor ultrasonic{ "Ultrasonic sensor", 7, true };
    constexpr Sensor temperature{ "Temperature sensor", 4, false };
    constexpr Sensor infrared{ "Infrared sensor", 2, true };

    std::cout << std::boolalpha;

    std::cout << "Sensor name: " << ultrasonic.name << '\n';
    std::cout << "Pin number: " << ultrasonic.pinNumber << '\n';
    std::cout << "Active: " << ultrasonic.isActive << "\n\n";

    std::cout << "Sensor name: " << temperature.name << '\n';
    std::cout << "Pin number: " << temperature.pinNumber << '\n';
    std::cout << "Active: " << temperature.isActive << "\n\n";

    std::cout << "Sensor name: " << infrared.name << '\n';
    std::cout << "Pin number: " << infrared.pinNumber << '\n';
    std::cout << "Active: " << infrared.isActive << '\n';

    return 0;
}