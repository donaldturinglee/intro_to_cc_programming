#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "Enter a temperature: ";
    double temperature;
    std::cin >> temperature;

    if (temperature > 100.0) {
        std::cout << "too hot" << '\n';
    } else if (temperature < 30) {
        std::cout << "too cold" << '\n';
    } else {
        std::cout << "just right" << '\n';
    }

    return 0;
}