#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    double x, y, a,b;
    
    cout << "Enter the value x: " ;
    cin >> x;
    
    cout << "Enter the value a: " ;
    cin >> a;
    
    cout << "Enter the value b: " ;
    cin >> b;
    
    if (b == 0) {
        cout << "No solution. Enter another value for b: ";
        cin >> b;
    }
    
    
    if(x < 0){
        y = pow(x, 3) + a/b;
    }
    else if(x == 0){
        y =  sin(a/b) + 4 * b * x ;
    }
    else {
        y = sqrt(x) + a/b;
    }
    
    
    cout << "Resuts: " << y << "\n";
    
    return 0;
}
