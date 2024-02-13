#include <iostream>
#include <iomanip>

int main(int argc, char* argv[]) {

    const double PI {3.14159};

    std::cout << "The result of 4 * (1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11) is: " <<
            std::fixed <<
            std::setprecision(5) <<
            4.0 * (1.0 - 1.0 / 3.0 + 1.0 / 5.0 - 1.0 / 7.0 + 1.0 / 9.0 - 1.0 / 11.0) << '\n';

    std::cout << "The result of 4 * (1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13) is: " <<
              std::fixed <<
              std::setprecision(5) <<
              4.0 * (1.0 - 1.0 / 3.0 + 1.0 / 5.0 - 1.0 / 7.0 + 1.0 / 9.0 - 1.0 / 11.0 + 1.0 / 13.0) << '\n';

    return 0;
}