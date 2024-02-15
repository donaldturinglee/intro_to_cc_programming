#include <iostream>
#include <cmath>
#include <iomanip>

int main(int argc, char* argv[]) {



    std::cout << "a" << std::setw(5) << "b" << std::setw(13) << "pow(a, b)" << '\n';

    double a {1};
    double b {2};
    std::cout << a << std::setw(5) << b << std::setw(5) << pow(a, b) << '\n';

    a = 2;
    b = 3;
    std::cout << a << std::setw(5) << b << std::setw(5) << pow(a, b) << '\n';

    a = 3;
    b = 4;
    std::cout << a << std::setw(5) << b << std::setw(6) << pow(a, b) << '\n';

    a = 4;
    b = 5;
    std::cout << a << std::setw(5) << b << std::setw(8) << pow(a, b) << '\n';

    a = 5;
    b = 6;
    std::cout << a << std::setw(5) << b << std::setw(9) << pow(a, b) << '\n';

    return 0;
}