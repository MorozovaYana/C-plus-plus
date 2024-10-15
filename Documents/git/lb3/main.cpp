#include <iostream>
using namespace std;

int main() {
   
   int N;
   int r = 0;
   
   cout << "Enter the value N: ";
   cin >> N;
   
   if (N >= 100 && N <= 999) {
       
       int x = N / 100;
       int y = (N / 10) % 10;
       int z = N % 10;
       
       if(x >= 5 ) {
           r += x;
       }
       
       if(y >= 5 ) {
           r += y;
       }
       
       if(z >= 5 ) {
           r += z;
       }
       
       cout << "Resuts: " << r << "\n";
   }
   else{
       cout << "Error"<< "\n";
   
   }
      
   
   return 0;
}
