#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;

class Fraction {
public:
    Fraction(int numerator, int denominator) {
        // Ensure only numerator is negative if result is negative
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
        this->numerator = numerator;
        this->denominator = denominator;
    }

    string toString() {
        int wholePart = numerator / denominator;
        int remainder = abs(numerator % denominator);
        int absDen = abs(denominator);

        // Proper sign handling
        if (remainder == 0) {
            return to_string(wholePart);
        } else if (wholePart != 0) {
            return to_string(wholePart) + " " + to_string(remainder) + "/" + to_string(absDen);
        } else {
            string sign = (numerator < 0) ? "-" : "";
            return sign + to_string(remainder) + "/" + to_string(absDen);
        }
    }

    double toDouble() {
        return static_cast<double>(numerator) / denominator;
    }

private:
    int numerator;
    int denominator;
};

int main() {
    string input;
    cout << "Enter a fraction (e.g., 3 / 4): ";
    getline(cin, input);

    // Parse input (assumes valid input of the form "a / b")
    stringstream ss(input);
    int num, den;
    char slash;
    ss >> num >> slash >> den;

    if (den == 0) {
        cerr << "Denominator cannot be zero!" << endl;
        return 1;
    }

    Fraction fraction(num, den);
    cout << fraction.toString() << " is " << fraction.toDouble() << " in decimal" << endl;
    return 0;
}
