#include <iostream>

int main(int argc, char* argv[]) {

    const double PI {3.14159};

    std::cout << "Enter the radius and length of a cylinder: ";
    double radius, length;
    std::cin >> radius >> length;

    double area {radius * radius * PI};
    double volume {area * length};

    std::cout << "The area is " << area << '\n';
    std::cout << "The volume is " << volume << '\n';

    return 0;
}