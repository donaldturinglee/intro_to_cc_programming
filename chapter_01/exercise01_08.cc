#include <iostream>
#include <iomanip>

int main(int argc, char* argv[]) {

    std::cout << std::fixed << std::setprecision(0);
    std::cout << "The circle perimeter is: " << 2 * 5.5 * 3.14159 << '\n';
    std::cout << "The circle area is: " << 5.5 * 5.5 * 3.14159 << '\n';

    return 0;
}