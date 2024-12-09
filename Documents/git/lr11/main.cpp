#include <iostream>
#include <iomanip>
using namespace std;


struct Date{
    int hours;
    int minutes;
};

int main() {

    Date time;
    int addMin;
    int allMin;
    
    cout << "Enter hours: ";     // 0-23
    cin >> time.hours;
    cout << "Enter minutes: ";   // 0-59
    cin >> time.minutes;
    
    if (time.hours < 0 || time.hours >= 24 || time.minutes < 0 || time.minutes >= 60) {
        cout << "incorrect time!" << endl;
        return 1;}
    
    cout << "Enter number minutes:  ";
    cin >> addMin;
    
    allMin = time.hours * 60 + time.minutes + addMin;
    
    Date changedTime;
    
    changedTime.hours = (allMin / 60) % 24;
    changedTime.minutes = allMin % 60;
    
    cout << "Changed time: "  << setw(2) << setfill('0') << changedTime.hours << ":"
             << setw(2) << setfill('0') << changedTime.minutes << "\n";
    
    return 0;
}
