#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "Enter a, b, c, d, e, f: ";
    double a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;

    double determinant { a * d - b * c };

    if (determinant == 0) {
        std::cout << "The equation has no solution." << '\n';
    } else {
        double x { (e * d - b * f) / (a * d - b * c) };
        double y { (a * f - e * c) / (a * d - b * c) };
        std::cout << "x is " << x << " and y is " << y << '\n';
    }

    return 0;
}