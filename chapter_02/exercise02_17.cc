#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {

    std::cout << "Enter the temperature in Fahrenheit (must be between -58°F and 41°F): ";
    double temperature;
    std::cin >> temperature;

    std::cout << "Enter the wind speed miles per hour (must be greater than or equal to 2): ";
    double wind_speed;
    std::cin >> wind_speed;

    double wind_chill_temperature { 35.74 + (0.6215 * temperature) - (35.75 * pow(wind_speed, 0.16)) + (0.4275 * temperature * pow(wind_speed, 0.16)) };

    std::cout << "The wind chill index is " << wind_chill_temperature << '\n';

    return 0;
}