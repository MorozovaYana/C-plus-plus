#include <iostream>
#include <math.h>

using namespace std;

int task2() {
    
    double a, b, y;
    
    cout << "Enter first value: " ;
    cin >> a;
    
    cout << "Enter second value: " ;
    cin >> b;
    
    y = pow( 0.7 * log(a/b) * pow(sin((a+b) * M_PI/10), 2) + 0.8 * log(b/a) * pow(cos((a+b) * M_PI/10), 2), 3./2) ;
    
    cout << "Results: " << y << "\n";
    
    return 0;
}
