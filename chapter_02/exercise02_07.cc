#include <iostream>

int main(int argc, char* argv[]) {

    const int kMinutesPerDay {60 * 24};
    const int kMinutesPerYear {kMinutesPerDay * 365};

    std::cout << "Enter the number of minutes: ";
    int minutes;
    std::cin >> minutes;

    int years { minutes / kMinutesPerYear };

    int days { (minutes % kMinutesPerYear) / kMinutesPerDay };

    std::cout << minutes << " minutes is approximately " << years << " and " << days << " days" << '\n';

    return 0;
}