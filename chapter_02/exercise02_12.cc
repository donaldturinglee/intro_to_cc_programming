#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "Enter v and a: ";
    double v, a;
    std::cin >> v >> a;

    double length {(v * v) / (2 * a)};
    std::cout << "The minimum runway length for this airplane is " << length << '\n';

    return 0;
}