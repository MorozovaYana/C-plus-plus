#include <iostream>
#include <time.h>
using namespace std;

int main() {
  srand(time_t(NULL));
    
    int m = 12;
      int array [m];
  
      for(int i = 0; i < m; i++) {
        array[i] = rand()  % 100 ;
          
      }
  
      for (int i = 0; i < m; i++) {
          cout << array[i] << " ";
      }
  
    cout << endl;

  
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

  
    cout << "Array sorted in ascending order: ";
    for (int i = 0; i < m; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    
    cout << "Array sorted in descending order: ";
    for (int i = 0; i < m; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

