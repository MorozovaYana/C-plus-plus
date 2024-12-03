#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

   srand(static_cast<unsigned int>(time(0)));


   const int size = 10;
   int arr[size]; // Статичний масив

   
   for (int i = 0; i < size; i++) {
       arr[i] = rand() % 100;
   }

  
   cout << "The Arrays with random numbers ";
   for (int i = 0; i < size; i++) {
       cout << arr[i] << " ";
   }
   cout << "\n";

  
   int A;
   cout << "Enter the value A: ";
   cin >> A;

   
   int count = 0;
   for (int i = 0; i < size; i++) {
       if (arr[i] > A) {
           count++;
       }
   }

   
   cout << "Number of elements greater than " << A << ": " << count << "\n";

   return 0;
}
