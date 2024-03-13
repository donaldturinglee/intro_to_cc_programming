#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    std::cout << "Enter an amount in double, for example 11.56: ";
    double amount;
    std::cin >> amount;

    int remaining_amount = static_cast<int>(amount * 100);

    int number_of_one_dollars = remaining_amount / 100;
	remaining_amount = remaining_amount % 100;

	int number_of_quarters = remaining_amount / 25;
	remaining_amount = remaining_amount % 25;

	int number_of_dimes = remaining_amount / 10;
	remaining_amount = remaining_amount % 10;

	int number_of_nickels = remaining_amount / 5;
	remaining_amount = remaining_amount % 5;

	int number_of_pennies = remaining_amount;

	cout << "Your amount " << amount << " consists of\n" << "  ";
	if(number_of_one_dollars) {
		if(number_of_one_dollars > 1) {
			cout << number_of_one_dollars << " dollars\n" << "  ";
		} else {
			cout << number_of_one_dollars << " dollar\n" << "  ";
		}
	}
	if(number_of_quarters) {
		if(number_of_quarters > 1) {
			cout << number_of_quarters << " quarters\n" << "  ";
		} else {
			cout << number_of_quarters << " quarter\n" << "  ";
		}
	}
	if(number_of_dimes) {
		if(number_of_dimes > 1) {
			cout << number_of_dimes << " dimes\n" << "  ";
		} else {
			cout << number_of_dimes << " dime\n" << "  ";
		}
	}
	if(number_of_nickels) {
		if(number_of_nickels > 1) {
			cout << number_of_nickels << " nickels\n" << "  ";
		} else {
			cout << number_of_nickels << " nickel\n" << "  ";
		}
	}
	if(number_of_pennies) {
		if(number_of_pennies > 1) {
			cout << number_of_pennies << " pennies\n" << "  ";
		} else {
			cout << number_of_pennies << " pennie\n" << "  ";
		}
	}

    return 0;
}
