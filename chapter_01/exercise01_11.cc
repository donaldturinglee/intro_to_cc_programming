#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "The current total population is: " << 312'032'486 << '\n';
    std::cout << "The total population in the first year is: " << 312'032'486 + ((60 * 60 * 24 * 365 / 7 - 60 * 60 * 24 * 365 / 13) + 60 * 60 * 24 * 365 / 45) << '\n';
    std::cout << "The total population in the second year is: " << 312'032'486 + ((60 * 60 * 24 * 365 / 7 - 60 * 60 * 24 * 365 / 13) + 60 * 60 * 24 * 365 / 45) * 2 << '\n';
    std::cout << "The total population in the third year is: " << 312'032'486 + ((60 * 60 * 24 * 365 / 7 - 60 * 60 * 24 * 365 / 13) + 60 * 60 * 24 * 365 / 45) * 3 << '\n';
    std::cout << "The total population in the fourth year is: " << 312'032'486 + ((60 * 60 * 24 * 365 / 7 - 60 * 60 * 24 * 365 / 13) + 60 * 60 * 24 * 365 / 45) * 4 << '\n';
    std::cout << "The total population in the fifth year is: " << 312'032'486 + ((60 * 60 * 24 * 365 / 7 - 60 * 60 * 24 * 365 / 13) + 60 * 60 * 24 * 365 / 45) * 5 << '\n';

    return 0;
}