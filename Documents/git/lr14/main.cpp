#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    srand((double)time(0));
    
 exercise 1
    
    double * arr = new  double [10];
    double* ptr = &arr[0];
    
    
    for (int i = 0; i < 10; i++) {
        *(ptr + i) = ((double)rand() / RAND_MAX) * 4.0 - 2.0; // від -2 до 2
        }

    for (int i = 0; i < 10; i++) {
            cout << *(ptr + i) << " ";
        }
        cout << endl;

    int positive = 0;
    int negative = 0;

       for (int i = 0; i < 10; i++) {
           if (*(ptr + i) > 0) positive++;
           else if (*(ptr + i) < 0) negative++;
       }

       cout << "quantity positive value: " << positive << endl;
       cout << "quantity negative value: " << negative << endl;
    
    delete [] arr;
    
// exercise 2
 
    srand((int )time(0));
    
    int size = 3;
    int** arrTwo = new int* [size];
    for (int i = 0; i < size; i++) {
        arrTwo[i] = new int [size];
    }
    
    int* ptr = &arrTwo[0][0];
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arrTwo[i][j] = rand() % 100;
        }
    }
    
    for (int i = 0; i < size ; i++) {
        for (int j = 0; j < size; j++) {
            cout << "\t" << arrTwo[i][j];
        }
        cout << endl;
    }
    
    cout << "\nMain diagonal: ";
    for (int i = 0; i < size; i++) {
            cout << arrTwo[i][i] << " ";
        }
    cout << endl;
    
    
    cout << "Side diagonal: ";
    for (int i = 0; i < size; i++) {
        cout << arrTwo[i][size - 1 - i]  << " ";
    }
    cout << endl;
    
    
    
    
    int paried = 0, unparied = 0;
       for (int i = 0; i < size; i++) {
           for (int j = 0; j < size; j++) {
               if (arrTwo[i][j] % 2 == 0)
                   paried++;
               else
                   unparied++;
           }
       }
    cout << endl;
    
    cout << "quantity paried value: " << paried << endl;
    cout << "quantity unparied value: " << unparied << endl;
    
    for (int i = 0; i < size; i++)
    {
        delete [] arrTwo [i];
    }
    
    return 0;
}
