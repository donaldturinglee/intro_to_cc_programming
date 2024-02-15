#include <iostream>

int main(int argc, char* argv[]) {

    const double g { 9.8 };

    // Formula: F = u * m * g + m * a

    std::cout << "Enter the friction force in Newtons: ";
    double F;
    std::cin >> F;

    std::cout << "Enter the object's mass in kg: ";
    double m;
    std::cin >> m;

    std::cout << "Enter the object's acceleration in m/s^2: ";
    double a;
    std::cin >> a;

    double coefficient_of_friction { F / (m * g) - a / g };
    std::cout << "The coefficient for friction is " << coefficient_of_friction << '\n';

    return 0;
}