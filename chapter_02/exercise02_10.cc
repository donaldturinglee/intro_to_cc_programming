#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "Enter the amount of water in kilograms: ";
    double amount_of_water;
    std::cin >> amount_of_water;

    std::cout << "Enter the initial temperature: ";
    double initial_temperature;
    std::cin >> initial_temperature;

    std::cout << "Enter the final temperature: ";
    double final_temperature;
    std::cin >> final_temperature;

    double energy { amount_of_water * (final_temperature - initial_temperature) * 4184 };
    std::cout << "The energy needed is " << energy << '\n';

    return 0;
}