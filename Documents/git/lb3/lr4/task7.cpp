#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
    double value1;
    double value2;
    double value3;
    double value4;
    double value5;

    
    cout << "Enter the first value: " ;
    cin >> value1;
   
    cout << "Enter the sescond value: " ;
    cin >> value2;
    
    cout << "Enter the third value: " ;
    cin >> value3;
    
    cout << "Enter the fourth value: " ;
    cin >> value4;
    
    cout << "Enter the fifth value: " ;
    cin >> value5;
    
    
    
    cout << value1 << "\n";
    cout << fixed << setprecision(2) << value2 << "\n";
    cout << fixed << setprecision(6) << value3 << "\n";
    cout << fixed << setprecision(2) << value4 << "\n";
    cout << fixed << setprecision(0) << value5 << "\n";
    
    return 0;
    
}
