#include <iostream>
#include <iomanip>

int main(int argc, char* argv[]) {

    std::cout << "Enter an amount in integer, for example 1156 cents: ";
    int amount;
    std::cin >> amount;

    amount /= 100;

    int remaining_amount { amount };

    int number_of_one_dollars { remaining_amount / 100 };
    remaining_amount %= 100;

    int number_of_quarters { remaining_amount / 25 };
    remaining_amount %= 25;

    int number_of_dimes { remaining_amount / 10 };
    remaining_amount %= 10;

    int number_of_nickels { remaining_amount / 5 };
    remaining_amount %= 5;

    int number_of_pennies = remaining_amount;

    std::cout << "Your amount " << amount << " consists of" << '\n';
    std::cout << std::setw(3) << number_of_one_dollars << " dollars" << '\n';
    std::cout << std::setw(3) << number_of_quarters << " quarters" << '\n';
    std::cout << std::setw(3) << number_of_dimes << " dimes" << '\n';
    std::cout << std::setw(3) << number_of_nickels << " nickels" << '\n';
    std::cout << std::setw(3) << number_of_pennies << " pennies" << '\n';

    return 0;
}