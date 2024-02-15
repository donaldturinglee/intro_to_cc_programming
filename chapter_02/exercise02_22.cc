#include <iostream>
#include <iomanip>

int main(int argc, char* argv[]) {

    std::cout << "Enter balance and interest rate (e.g, 3 for 3%): ";
    double balance, interest_rate;
    std::cin >> balance >> interest_rate;

    std::cout << "The interest rate is " << interest_rate << '\n';
    std::cout << "The balance is " << balance << '\n';

    double interest { balance * (interest_rate / 1200) };
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "The interest is $" << interest << '\n';

    return 0;
}