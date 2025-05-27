#include <iostream>
using namespace std;

bool isPrime(int num){
    
    
    if (num <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0){
            return false;
        }
    }
    return true;
}


int main() {
    
  // exercise 1
    
    int number;
    
    cout << "Enter your number: ";
    cin >> number;
    
    if (number <= 1) {
        cout << "Incorrect number" << endl;
        return 1;
        }
    
    if (isPrime(number)) {
            cout << number << " is a prime number." << endl;
        } else {
            cout << number << " is not a prime number." << endl;
        }
    
// exercise 2
    
    
    for(int i = 0; i <= 21; i++){
        if(isPrime(i))
            cout << i << " ";}
    
    cout << endl;
    
    return 0;
}
