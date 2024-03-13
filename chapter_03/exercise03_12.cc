#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
	
	srand(time(0));

	int answer = rand() % 2;

	cout << "Guess head or tail? Enter 0 for head and 1 for tail: ";
	int guess;
	cin >> guess;

	if(guess == answer) {
		cout << "Correct guess\n";
	} else {
		cout << "Incorrect guess\n";
	}

	return 0;
}
