#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {

    const double a { 9.8 };

    std::cout << "Enter the ball travel time in seconds: ";
    double travel_time;
    std::cin >> travel_time;

    // eq1: v1 = v0 + a * t
    // eq2: d = average_speed * t (average_speed = (v0 + v1) / 2
    // eq3: d = v0 * t + a * t^2 / 2
    // eq4: v1^2 = v0^2 + 2 * a * d

    double v0 {0};
    double height_of_building { (v0 * travel_time) + ((a * pow(travel_time, 2)) / 2) };

    std::cout << "The height of the building is " << height_of_building << " meters" << '\n';

    return 0;
}