#include <iostream>
#include <string_view>

struct UltrasonicSensor {
    std::string_view name {"UltrasonicSensor"};
    int pinNumber {7};
    bool isActive {true};
};

struct TemperatureSensor {
    std::string_view name {"TemperatureSensor"};
    int pinNumber {4};
    bool isActive {false};
};
struct InfraredSensor {
    std::string_view name {"InfraredSensor"};
    int pinNumber {2};
    bool isActive {true};
};

int main() {
    constexpr UltrasonicSensor sensor;
    std::cout << "Sensor Name: " << sensor.name << std::endl;
    return 0;
}



/*this is if we want to get input from the user and store it in a struct, we can use the following code:
#include <iostream>
#include <string>

struct Sensor
{
    std::string name;
    int pinNumber;
    bool isActive;
};

int main()
{
    Sensor sensor{};

    std::cout << "Enter sensor name: ";
    std::getline(std::cin, sensor.name);

    std::cout << "Enter pin number: ";
    std::cin >> sensor.pinNumber;

    int activeInput{};

    std::cout << "Is the sensor active? (1 = yes, 0 = no): ";
    std::cin >> activeInput;

    sensor.isActive = (activeInput == 1);

    std::cout << "\n--- Sensor details ---\n";
    std::cout << "Name: " << sensor.name << '\n';
    std::cout << "Pin number: " << sensor.pinNumber << '\n';
    std::cout << std::boolalpha;
    std::cout << "Active: " << sensor.isActive << '\n';

    return 0;
}*/