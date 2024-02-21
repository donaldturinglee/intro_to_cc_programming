#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    cout << "Enter weight in pounds: ";
    double weight;
    cin >> weight;

    cout << "Enter height in feet: ";
    double feet;
    cin >> feet;

    cout << "Enter height in inches: ";
    double inches;
    cin >> inches;

    const double kKilogramsPerPound {0.45359237};
    const double kMetersPerInch {0.0254};
    const double kFeetPerInch {12};
    
    double height = inches + feet * kFeetPerInch;

    double weight_in_kilograms = weight * kKilogramsPerPound;
    double height_in_meters = height * kMetersPerInch;
    double bmi = weight_in_kilograms / (height_in_meters * height_in_meters);

    cout << "Your BMI is " << bmi << '\n';
    if (bmi < 18.5) {
        cout << "Underweight\n";
    } else if (bmi < 25.0) {
        cout << "Normal\n";
    } else if (bmi < 30.0) {
        cout << "Overweight\n";
    } else {
        cout << "Obese\n";
    }

    
    return 0;
}
