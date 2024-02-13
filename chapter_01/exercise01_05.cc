#include <iostream>
#include <iomanip>
int main(int argc, char* argv[]) {

    std::cout << "The result of 9.5 * 4.5 - 2.5 * 3 / 45.5 - 3.5 is: " <<
            std::fixed <<
            std::setprecision(2) <<
            ((9.5 * 4.5) - (2.5 * 3)) / (45.5 - 3.5) << '\n';

    return 0;
}