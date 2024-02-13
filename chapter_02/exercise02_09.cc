#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "Enter v0, v1, and t: ";
    double v0, v1, t;
    std::cin >> v0 >> v1 >> t;

    double a {(v1 - v0) / t};

    std::cout << "The average acceleration is: " << a << '\n';

    return 0;
}