#include <iostream>
using namespace std;

int main(){
    
    float x, y ;
     
    cout << "Enter the value x: " ;
    cin >> x;
    
    cout << "Enter the value y: " ;
    cin >> y;
    
    if((x >= 0 && y <= x + 1 && y <= -x + 1) || (y >= x-1 && y <= 0 && x>= 0)) {
        cout << "The point falls within the shaded area" << "\n";
    } else{
        cout << "The point is not included in the shaded area" << "\n";
    }
    
    

    return 0;
}
