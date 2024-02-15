#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "Enter the driving distance: ";
    double driving_distance;
    std::cin >> driving_distance;

    std::cout << "Enter miles per gallon: ";
    double miles_per_gallon;
    std::cin >> miles_per_gallon;

    std::cout << "Enter price per gallon: ";
    double price_per_gallon;
    std::cin >> price_per_gallon;

    double cost { driving_distance / miles_per_gallon * price_per_gallon };
    std::cout << "The cost of driving is $" << cost << '\n';

    return 0;
}