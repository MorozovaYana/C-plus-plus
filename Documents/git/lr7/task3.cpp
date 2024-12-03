#include <iostream>
using namespace std;

int main(void) {
    
    int n;
    int max_size = 15;
    cout << "Enter the value: ";
    cin >> n;
    
    if (n <= 1) {
        cout << "Error: The number must be greater than 1." << endl;
        return 1;
    } else if (n > max_size) {
        cout << "Error: The number is too large to display on this screen." << endl;
        return 1;}
        
    // top
        cout << '+';
          
   
        for(int i = 0; i < n; i++)
            cout << '-';
        cout << '+' << endl;
        
    // middle
        for(int i = 0; i < n; i++) {
            cout << '|';
            
            for(int j = 0; j < n; j++)
                cout << ' ';
            cout << '|' << endl;
        }
        
    //bottom
        cout << '+';
        
        for(int i = 0; i < n; i++)
            cout << '-';
        cout << '+' << endl;
        
        return 0;
    
}





