#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main (){
    
    double a, b, h;
   
    cout << "Enter the value a: ";
    cin >> a;
    cout << "Enter the value b: ";
    cin >> b;
    cout << "Enter the value h: ";
    cin >> h;
    
    double x = a;
    
    cout << "---------------------\n";
    cout << ": "  << "X" << " : " << setw(4) << "Y" << setw(6) << " :\n";
    cout << "---------------------\n";
    
    while (x <= b) {
        double expression = sin(x) + pow(x, 2);
        if (expression >= 0) {
            double y = sqrt(expression);
            cout << ": " << x << " : " << setw(4) << y << " :\n";
        }else {
            x += h;
            continue;
            
        }
        
        x += h;
    }
    
    cout << "---------------------\n";
    
    return 0;
}







