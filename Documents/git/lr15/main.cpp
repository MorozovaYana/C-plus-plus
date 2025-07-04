#include <iostream>
using namespace std;

// exercise 1

bool isLeap(int year) {

    if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }else return false;

}

// exercise 2

int monthLength(int year, int month) {
    
    
    switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return 31;
            case 4: case 6: case 9: case 11:
                return 30;
            case 2:
            if (isLeap(year) ){
                return 29;
            }else return 28;
            default:
                return -1;
        }
    
    
    vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
       if (month == 2 && isLeap(year)) {
           return 29;
       }
       return daysInMonth[month - 1];
}


int main(void) {

// exercise 1
    for(int yr = 95; yr < 105; yr++)
    cout << yr << " -> " << isLeap(yr) << endl;
    
    cout << endl;
    
// exercise 2
    
    for(int yr = 2000; yr < 2002; yr++) {
        for(int mo = 1; mo <= 12; mo++)
            cout << monthLength(yr,mo) << " ";
        cout << endl;
    }

    cout << endl;
    
    return 0;
}
