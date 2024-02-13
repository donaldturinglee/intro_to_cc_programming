#include <iostream>
#include <iomanip>

int main(int argc, char* argv[]) {

    const double kSecondsPerYear { 60.0 * 60.0 * 24.0 * 365.0 };
    const double kInitialPopulation { 312'032'486 };
    const double kBirthsPerYear { kSecondsPerYear / 7.0 };
    const double kDeathsPerYear { kSecondsPerYear / 13.0 };
    const double kImmigrantPerYear { kSecondsPerYear / 45.0 };

    std::cout << "Enter the number of years: ";
    int years_number;
    std::cin >> years_number;

    double population_change { (kBirthsPerYear - kDeathsPerYear) + kImmigrantPerYear};

    std::cout << std::fixed << std::setprecision(0);

    std::cout << "The population in " << years_number << " is " << kInitialPopulation + population_change * years_number << '\n';

    return 0;
}