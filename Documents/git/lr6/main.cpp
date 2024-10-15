#include <iostream>
using namespace std;

int main() {
   
    int n;
    cout << "Enter the value N: ";
    cin >> n;
    
    int count = 0;
    int number;
    
    while (n > 0) {
        number = n % 10;
        if (number > 3) {
            count++;
        }
        n /= 10;
    }
    
    cout << "Number of digits greater than 3: " << count << "\n";
    
    return 0;
}
