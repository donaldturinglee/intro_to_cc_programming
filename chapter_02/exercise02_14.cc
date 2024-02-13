#include <iostream>

int main(int argc, char* argv[]) {

    const double kKilogramsPerPound {0.45359237};
    const double kMetersPerInch {0.0254};

    std::cout << "Enter weight in pounds: ";
    double weight;
    std::cin >> weight;

    std::cout << "Enter height in inches: ";
    double height;
    std::cin >> height;

    weight *= kKilogramsPerPound;
    height *= kMetersPerInch;

    double bmi { weight / (height * height) };

    std::cout << "BMI is " << bmi << '\n';

    return 0;
}