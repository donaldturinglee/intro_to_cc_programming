#include <iostream>

int main(int argc, char* argv[]) {

    const double kAnnualInterestRate { 0.05 };
    const double kMonthlyInterestRate { kAnnualInterestRate / 12 };

    std::cout << "Enter the monthly saving amount: ";
    double amount;
    std::cin >> amount;

    double monthly_saving_amount {amount * (1 + kMonthlyInterestRate)};
    std::cout << "After the first month, the account value is " << monthly_saving_amount << '\n';
    monthly_saving_amount = (amount + monthly_saving_amount) * (1 + kMonthlyInterestRate);
    std::cout << "After the second month, the account value is " << monthly_saving_amount << '\n';
    monthly_saving_amount = (amount + monthly_saving_amount) * (1 + kMonthlyInterestRate);
    std::cout << "After the third month, the account value is " << monthly_saving_amount << '\n';
    monthly_saving_amount = (amount + monthly_saving_amount) * (1 + kMonthlyInterestRate);
    monthly_saving_amount = (amount + monthly_saving_amount) * (1 + kMonthlyInterestRate);
    monthly_saving_amount = (amount + monthly_saving_amount) * (1 + kMonthlyInterestRate);
    std::cout << "After the sixth month, the account value is " << monthly_saving_amount << '\n';

    return 0;
}