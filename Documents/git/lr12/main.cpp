#include <iostream>

using namespace std;

int main(void) {
int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
int n = sizeof(vector) / sizeof(vector[0]);    // 9

    
    int *min = vector; // 3
    
 
    
    for (int *p = vector + 1; p < vector + n; p++) {
        if (*p < *min) {
            *min = *p;
        }
    }
    
      cout << *min <<"\n";

    
return 0;
}
