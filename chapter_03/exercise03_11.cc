#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

	cout << "Enter package weight: ";
	double package_weight;
	cin >> package_weight;

	if(package_weight) {
		if(package_weight <= 1) {
			cout << "The shipping cost is $3.5\n";
		} else if(package_weight <= 3) {
			cout << "The shipping cost is $5.5\n";
		} else if(package_weight <= 10) {
			cout << "The shipping cost is $8.5\n";
		} else if(package_weight <= 20) {
			cout << "The shipping cost is $10.5\n";
		}
	}

	return 0;
}
