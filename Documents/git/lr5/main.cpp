#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double x[5];
    double y[5];

    
    cout << "Enter five value for x: ";
    
    for (int i = 0; i < 5; i++) {
        cin >> x[i];
    }
    
    for (int i = 0; i < 5; i++) {
        y[i] = pow(sin(x[i]), 5) + fabs(5*x[i] - 1.5);
    }
    
    for (int i = 0; i < 5; i++) {
        cout << "y = " << y[i] << "\n";
    }
    
    
    return 0;
}
