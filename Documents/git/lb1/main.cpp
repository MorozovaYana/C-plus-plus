#include <iostream>
#include <math.h>

using namespace std;

int main() {
   
   double a, b, x;
   
   cout << "Enter first value: " ;
   cin >> a;
   
   cout << "Enter second value: " ;
   cin >> b;
   
   x = 7.2 * pow((a+b), (1 + pow(cos(a), 2) * (1 - cos(b)) + 0.711 * log(pow((a+b), 3))));
   
   cout << "Results: " << x << "\n";
   
   return 0;
}
