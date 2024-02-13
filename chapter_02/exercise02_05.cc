#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "Enter the subtotal and a gratuity rate: ";
    double subtotal, gratuity_rate;
    std::cin >> subtotal >> gratuity_rate;

    double gratuity {(subtotal * gratuity_rate) / 100};
    double total {subtotal + gratuity};

    std::cout << "The gratuity is " << gratuity << " and total is " << total << '\n';

    return 0;
}