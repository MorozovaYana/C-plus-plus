#include <iostream>
#include <iomanip>
using namespace std;


struct Date {
    int hours;
    int minutes;
};

int main() {
    Date startTime, endTime;
    int startAllMinutes, endAllMinutes, durationMinutes;

    
    cout << "Enter start hours: ";
    cin >> startTime.hours;
    cout << "Enter start minutes: ";
    cin >> startTime.minutes;

    
    if (startTime.hours < 0 || startTime.hours >= 24 || startTime.minutes < 0 || startTime.minutes >= 60) {
        cout << "Incorrect start time!" << endl;
        return 1;
    }

 
    cout << "Enter end hours: ";
    cin >> endTime.hours;
    cout << "Enter end minutes: ";
    cin >> endTime.minutes;

   
    if (endTime.hours < 0 || endTime.hours >= 24 || endTime.minutes < 0 || endTime.minutes >= 60) {
        cout << "Incorrect end time!" << endl;
        return 1;
    }

    
    startAllMinutes = startTime.hours * 60 + startTime.minutes;
    endAllMinutes = endTime.hours * 60 + endTime.minutes;

    
    if (endAllMinutes >= startAllMinutes) {
        durationMinutes = endAllMinutes - startAllMinutes; // one day
    } else {
        durationMinutes = (24 * 60 - startAllMinutes) + endAllMinutes; // after 00;00
    }

   
    Date duration;
    duration.hours = durationMinutes / 60;
    duration.minutes = durationMinutes % 60;


    cout << "Duration: " << duration.hours << ":"
         << duration.minutes << endl;

    return 0;
}
