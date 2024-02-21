#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "Enter three integers: ";
    double n1, n2, n3;
    std::cin >> n1 >> n2 >> n3;

    if (n1 > n2 && n2 > n3) {
        std::cout << "n1, n2, and n3 are " << n3 << ", " << n2 << ", and " << n1 << '\n';
    } else if (n1 > n3 && n3 > n2) {
        std::cout << "n1, n2, and n3 are " << n2 << ", " << n3 << ", and " << n1 << '\n';
    } else if (n2 > n1 && n1 > n3) {
        std::cout << "n1, n2, and n3 are " << n3 << ", " << n1 << ", and " << n2 << '\n';
    } else if (n2 > n3 && n3 > n1) {
        std::cout << "n1, n2, and n3 are " << n1 << ", " << n3 << ", and " << n2 << '\n';
    } else if (n3 > n2 && n2 > n1) { 
        std::cout << "n1, n2, and n3 are " << n1 << ", " << n2 << ", and " << n3 << '\n';
    } else if (n3 > n1 && n1 > n2) {
        std::cout << "n1, n2, and n3 are " << n2 << ", " << n1 << ", and " << n3 << '\n';
    }
    
    return 0;
}
