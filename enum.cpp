#include <iostream>
#include <string_view>

enum class RobotMode {
    idle,
    moving,
    emergencyStop
};

constexpr std::string_view modeName(RobotMode mode) {
    switch (mode) {
        case RobotMode::idle:
            return "Idle";
        case RobotMode::moving:
            return "Moving";
        case RobotMode::emergencyStop:
            return "Emergency Stop";
        default:
            return "Unknown Mode";
    }
}

int main () { 
    constexpr RobotMode currentMode {RobotMode::moving};
    std::cout << "RobotMode: " << modeName(currentMode) << std::endl;
    
    return 0;
}