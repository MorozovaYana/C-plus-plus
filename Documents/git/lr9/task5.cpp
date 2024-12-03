//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <climits>
//
//using namespace std;
//
//int main() {
//   
//    srand(static_cast<unsigned int>(time(0)));
//
//    
//    const int size = 10;
//    int arr[size];
//
// 
//    for (int i = 0; i < size; ++i) {
//        arr[i] = rand() % 10;
//    }
//
//  
//    cout << "Generated array: ";
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << "\n";
//
//    // find largest and secondLargest
//    int largest = INT_MIN;
//    int secondLargest = INT_MIN;
//
//    for (int i = 0; i < size; ++i) {
//        int num = arr[i];
//        if (num > largest) {
//            secondLargest = largest;
//            largest = num;
//        } else if (num > secondLargest && num < largest) {
//            secondLargest = num;
//        }
//    }
//
//// secons element
//    if (secondLargest != INT_MIN) {
//        cout << "The second largest element is: " << secondLargest << "\n";
//    } else {
//        cout << "There is no second largest element." <<  "\n";
//    }
//
//    return 0;
//}
