#include <iostream>
using namespace std;

int main() {
    
    const int m = 10;
    
    int array[m] = {4, -6, 5, -7, 1, -4, 9, -3, 6, -2};
    
    cout << "The initial array: ";
       for (int i = 0; i < m; i++) {
           cout << array[i] << " ";
       }
       cout << endl;
    
    int maxIndex = 0;
      for (int i = 1; i < m; i++) {
          if (array[i] > array[maxIndex]) {
              maxIndex = i;
          }
      }
    
    for (int i = 0; i < maxIndex; i++) {
            if (array[i] < 0) {
                array[i] = 0;
            }
        }
    
    cout << "The modified array: ";
    for (int i = 0; i < m; i++) {
           cout << array[i] << " ";
       }
       cout << endl;
    
    return 0;
}


