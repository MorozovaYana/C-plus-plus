#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
   
   double pi4 = 0.;
   long n;
   cout << "Number of iterations? ";
   cin >> n;

   for (long k = 0; k < n; ++k) {
           if (k % 2 == 0) {
               pi4 += 1.0 / (2.0 * k + 1.0);
           } else {
               pi4 -= 1.0 / (2.0 * k + 1.0); 
           }
       }
   
   cout << fixed << setprecision(20);
   cout << "Pi = " << (pi4 * 4.) << endl;
   
return 0;
}

