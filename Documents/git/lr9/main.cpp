//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//int main() {
//    const int size = 10;
//    int arr[size];
//
//    
//   srand(time_t(NULL));
//
//    for (int i = 0; i < size; i++) {
//        arr[i] = rand() % 100 + 1;
//    }
//
//
//    cout << "The Arrays with random numbers: ";
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//   
//    int minIndex = 0, maxIndex = 0;
//
//
//    for (int i = 1; i < size; i++) {
//        if (arr[i] < arr[minIndex]) {
//            minIndex = i;
//        }
//        if (arr[i] > arr[maxIndex]) {
//            maxIndex = i;
//        }
//    }
//
//
//    int temp = arr[minIndex];
//    arr[minIndex] = arr[maxIndex];
//    arr[maxIndex] = temp;
//
//    
//    cout << "Arrays after changes: ";
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
