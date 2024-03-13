#include <iostream>

using namespace std;

bool is_leap_year(int year) {
	if(year % 4 != 0) {
		return false;
	} else if(year % 100 != 0) {
		return true;
	} else if(year % 400 != 0) {
		return false;
	} else {
		return true;
	}
}

int main(int argc, char* argv[]) {

	cout << "Enter a month in the year (e.g., 1 for Jan): ";
	int month;
	cin >> month;

	cout << "Enter a year: ";
	int year;
	cin >> year;

	switch(month %= 10) {
		case 1: {
			cout << "January " << year << " has 31 days\n";
			break;
		}
		case 2: {
			cout << "February " << year << " has " << (is_leap_year(year) ? 29 : 28) << " days\n";
			break;
		}
		case 3: {
			cout << "March " << year << " has 31 days\n";
			break;
		}
		case 4: {
			cout << "April " << year << " has 30 days\n";
			break;
		}
		case 5: {
			cout << "May " << year << " has 31 days\n";
			break;
		}
		case 6: {
			cout << "June " << year << " has 30 days\n";
			break;
		}
		case 7: {
			cout << "July " << year << " has 31 days\n";
			break;
		}
		case 8: {
			cout << "August " << year << " has 31 days\n";
			break;
		}
		case 9: {
			cout << "September " << year << " has 30 days\n";
			break;
		}
		case 10: {
			cout << "October " << year << " has 31 days\n";
			break;
		}
		case 11: {
			cout << "November " << year << " has 30 days\n";
			break;
		}
		case 12: {
			cout << "December " << year << " has 31 days\n";
			break;
		}
	}

	return 0;
}
