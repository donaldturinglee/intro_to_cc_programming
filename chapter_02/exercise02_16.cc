#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {

    std::cout << "Enter the side: ";
    double side;
    std::cin >> side;

    double area {((3 * sqrt(3) / 2) * pow(side, 2))};

    std::cout << "The area of the hexagon is " << area << '\n';

    return 0;
}