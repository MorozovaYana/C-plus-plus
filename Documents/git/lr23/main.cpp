#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;

int gcd(int a, int b) {
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a);
}

class Fraction {
public:
    Fraction(int numerator, int denominator) {
        if (denominator == 0) {
            throw invalid_argument("Denominator cannot be zero.");
        }

       
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }

        this->numerator = numerator;
        this->denominator = denominator;
        reduce();
    }

    string toString() {
        int wholePart = numerator / denominator;
        int remainder = abs(numerator % denominator);
        int absDen = abs(denominator);

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

    Fraction plus(Fraction that) {
        int num = this->numerator * that.denominator + that.numerator * this->denominator;
        int den = this->denominator * that.denominator;
        return Fraction(num, den);
    }

    Fraction minus(Fraction that) {
        int num = this->numerator * that.denominator - that.numerator * this->denominator;
        int den = this->denominator * that.denominator;
        return Fraction(num, den);
    }

    Fraction times(Fraction that) {
        int num = this->numerator * that.numerator;
        int den = this->denominator * that.denominator;
        return Fraction(num, den);
    }

    Fraction by(Fraction that) {
        int num = this->numerator * that.denominator;
        int den = this->denominator * that.numerator;
        if (den == 0) throw invalid_argument("Division by zero.");
        return Fraction(num, den);
    }

private:
    int numerator;
    int denominator;

    void reduce() {
        int common = gcd(numerator, denominator);
        numerator /= common;
        denominator /= common;
    }
};


int main() {
    string input1, input2;
    cout << "Enter first fraction (e.g., 3 / 4): ";
    getline(cin, input1);
    cout << "Enter second fraction (e.g., 1 / 3): ";
    getline(cin, input2);

    int num1, den1, num2, den2;
    char slash;

    stringstream ss1(input1);
    ss1 >> num1 >> slash >> den1;

    stringstream ss2(input2);
    ss2 >> num2 >> slash >> den2;

    try {
        Fraction f1(num1, den1);
        Fraction f2(num2, den2);

        cout << f1.toString() << " + " << f2.toString() << " = " << f1.plus(f2).toString() << endl;
        cout << f1.toString() << " - " << f2.toString() << " = " << f1.minus(f2).toString() << endl;
        cout << f1.toString() << " * " << f2.toString() << " = " << f1.times(f2).toString() << endl;
        cout << f1.toString() << " / " << f2.toString() << " = " << f1.by(f2).toString() << endl;
    } catch (exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
