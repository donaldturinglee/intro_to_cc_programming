#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "Enter the coordinates for two points: ";
    double x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    double slope { (y2 - y1) / (x2 - x1) };
    std::cout << "The slope for the line that connects two points (" << x1 << ", " << y1 << ") and " <<
            "(" << x2 << ", " << y2 << ") is " << slope << '\n';

    return 0;
}