#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {

    std::cout << "Enter a, b, c: ";
    double a, b, c;
    std::cin >> a >> b >> c;

    double discriminant { pow(b, 2) - 4 * a * c };

    if (discriminant > 0) {
        double r1 { (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) };
        double r2 { (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) };
        std::cout << "The roots are " << r1 << " and " << r2 << '\n';
    } else if (discriminant == 0) {
        double r { (-b) / (2 * a) };
        std::cout << "The root is " << r << '\n';
    } else {
        std::cout << "The equation has no real roots" << '\n';
    }

    return 0;
}