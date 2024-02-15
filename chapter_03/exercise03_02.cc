#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "Enter two integers: ";
    int first_number, second_number;
    std::cin >> first_number >> second_number;

    if (second_number == 0) {
        std::cerr << "The divisor cannot be zero!\n";
    } else if (first_number % second_number == 0) {
        std::cout << first_number << " is divisible by " << second_number << '\n';
    } else {
        std::cout << first_number << " is not divisible by " << second_number << '\n';
    }

    return 0;
}