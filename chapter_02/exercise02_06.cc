#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "Enter a number between 0 and 1000: ";
    int number;
    std::cin >> number;

    int units {number % 10};
    number /= 10;
    int tens {number % 10};
    number /= 10;
    int hundreds {number % 10};

    int sum {units + tens + hundreds};

    std::cout << "The sum of the digits is " << sum << '\n';

    return 0;
}