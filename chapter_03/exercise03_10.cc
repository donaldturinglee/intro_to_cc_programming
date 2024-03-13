#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {

	srand(time(0));
	int number1 = rand() % 100;
	int number2 = rand() % 100;

	cout << "What is " << number1 << " + " << number2 << "? ";
	int answer;
	cin >> answer;

	if(number1 + number2 == answer) {
		cout << "You are correct!\n";
	} else {
		cout << "Your answer is wrong.\n" << number1 << " + " << number2 << " should be " << (number1 + number2) << '\n'; 
	}

	return 0;
}
