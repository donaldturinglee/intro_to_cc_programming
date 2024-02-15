#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {

    std::cout << "Enter three points for a triangle: ";
    double x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double a { sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) };
    double b { sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2)) };
    double c { sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)) };

    double s { (a + b + c) / 2 };

    double area { sqrt(s * (s - a) * (s - b) * (s - c)) };

    std::cout << "The area of the triangle is " << area << '\n';

    return 0;
}