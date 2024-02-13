#include <iostream>

int main(int argc, char* argv[]) {

    const double kMetersPerFoot {0.305};

    std::cout << "Enter a value for feet: ";
    double feet;
    std::cin >> feet;

    double meter {feet * kMetersPerFoot};
    std::cout << "The meter is " << meter << '\n';

    return 0;
}