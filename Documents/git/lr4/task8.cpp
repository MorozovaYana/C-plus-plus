#include <iostream>
#include <cmath>
using namespace std;



int main(){
    
    int value1, value2;
    float number1, number2;
    const float epsilon = 0.000001f;
    
    cout << "Enter the first value: ";
    cin >> value1;
    
    cout << "Enter the second value: ";
    cin >> value2;
    
    if (value1 == 0 || value2 == 0 ) {
        cout << "Division by zero is not allowed!";
        
        return 1;
    }
    
    number1 =(float) 1 / value1;
    number2 =(float) 1 / value2;
    
    if((number1 - number2) < epsilon){
        cout << "Results are equal (by 0.000001 epsilon)" << "\n";
    }else{
        cout << "Results are not equal (by 0.000001 epsilon)"<< "\n";
    }
    
    return 0;
}
