#include <iostream>
using namespace std;

int main() {

    int inputCode;
    double price = 0;
    int quantity = 0;
    
    cout << "Enter the product code (001-006): ";
    cin >> inputCode;
    
    switch (inputCode) {
        case 001:
            price = 90.5;
            quantity = 5;
            break;
        case 002:
            price = 73.0;
            quantity = 11;
            break;
        case 003:
            price = 18.33;
            quantity = 45;
            break;
        case 004:
            price = 67.89;
            quantity = 34;
            break;
        case 005:
            price = 15.00;
            quantity = 9;
            break;
        case 006:
            price = 29.99;
            quantity = 109;
            break;
            
        default:
            cout << "Product with this code was not found" << "\n";
            break;
    }
    
    cout << "Product number " << inputCode << " has a price of " << price << " and a stock quantity of " << quantity << "\n";
    
    return 0;
}
