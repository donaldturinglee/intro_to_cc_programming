#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "Enter a degree in Celsius: ";
    double celsius_degree {0.0};
    std::cin >> celsius_degree;

    double fahrenheit_degree { (9.0 / 5.0) * celsius_degree + 32};

    std::cout << "Fahrenheit degree is: " << fahrenheit_degree << '\n';

    return 0;
}