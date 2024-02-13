#include <iostream>

int main(int argc, char* argv[]) {

    const double kMetersPerFoot {0.305};

    std::cout << "Enter a value for feet: ";
    double feet;
    std::cin >> feet;

    double meters {feet * kMetersPerFoot};
    std::cout << "The meters is " << meters << '\n';

    return 0;
}