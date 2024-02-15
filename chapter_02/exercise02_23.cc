#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {

    std::cout << "Enter investment amount: ";
    double investment_amount;
    std::cin >> investment_amount;

    std::cout << "Enter annual interest rate: ";
    double annual_interest_rate;
    std::cin >> annual_interest_rate;

    std::cout << "Enter number_of_years: ";
    double number_of_years;
    std::cin >> number_of_years;

    double monthly_interest_rate { annual_interest_rate / 1200 };

    double future_value { investment_amount * pow((1 + monthly_interest_rate), number_of_years * 12) };

    std::cout << "Future value is $" << future_value << '\n';

    return 0;
}