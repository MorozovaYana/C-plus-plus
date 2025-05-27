#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    
    srand((int)time(0));
    
    int size = 10;
    
    int arr[size][size];
    int* ptr = &arr[0][0]; // first value
    
    for (int i = 0; i < size * size; i++) {
        *(ptr + i) = rand() % 100;
    }
    
    cout << "Array:\n";
    for (int i = 0; i < size * size; ++i) {
        cout << *(ptr + i) << "\t";
        if ((i + 1) % size == 0) cout << endl;
    }

    cout << "\nMain diagonal: ";
    for (int i = 0; i < size; ++i) {
        cout << *(ptr + i * size + i) << " ";
    }
    
    cout << "\nSide diagonal: ";
        for (int i = 0; i < size; ++i) {
            cout << *(ptr + i * size + (size - 1 - i)) << " ";
        }
    
    int paried = 0, unpaired = 0;
        for (int i = 0; i < size * size; ++i) {
            if (*(ptr + i) % 2 == 0) {
                ++paried;
            } else {
                ++unpaired;
            }
        }
    
    cout << "\nquantity paried value: " << paried << endl;
    cout << "quantity unparied value: " << unpaired << endl;

    return 0;
}
