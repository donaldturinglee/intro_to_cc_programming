#include <iostream>

int main(int argc, char* argv[]) {

    const double kKilogramsPerPound {0.454};

    std::cout << "Enter a number in pounds: ";
    double pounds;
    std::cin >> pounds;

    double kilograms {pounds * kKilogramsPerPound};
    std::cout << "The kilograms is " << kilograms << '\n';
    return 0;
}