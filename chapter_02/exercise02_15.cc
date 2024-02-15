#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {

    std::cout << "Enter x1 and y1: ";
    double x1, y1;
    std::cin >> x1 >> y1;

    std::cout << "Enter x2 and y2: ";
    double x2, y2;
    std::cin >> x2 >> y2;

    double distance {sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))};

    std::cout << "The distance of the two points is " << distance << '\n';

    return 0;
}