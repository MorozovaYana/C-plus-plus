#include <iostream>
#include <ctime>
using namespace std;

struct Date {
    int year;
    int month;

    int day;
};

Date today(void) {
    
    time_t t = time(NULL);
    tm tl = *localtime(&t);
    
    Date d;
    
    d.year = tl.tm_year + 1900;
    d.month = tl.tm_mon + 1;
    d.day = tl.tm_mday;
    
    return d;
    
}

bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int monthLength(int year, int month) {
    
    
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
       if (month == 2 && isLeap(year)) {
           return 29;
       }
       return daysInMonth[month -1 ];
}

int daysBetweenBirthday (Date d1, Date d2) {
    int days1 = d1.day;
    
    for (int y = 1; y < d1.year; y++){
        days1 += isLeap(y) ? 366 : 365;
    }
          
    for (int m = 1; m < d1.month; m++){
        days1 += monthLength(d1.year, m);
    }
           

    int days2 = d2.day;
    
    for (int y = 1; y < d2.year; y++){
        days2 += isLeap(y) ? 366 : 365;
    }
           
    for (int m = 1; m < d2.month; m++){
        days2 += monthLength(d2.year, m);
    }
          
    return abs(days2 - days1) + 1;
}

int main() {
    
    Date user;
    
    cout << "enter your date (year,month,day): ";
    cin >> user.year >> user.month >> user.day;
    cout << "your birthday is " << user.year << "-" << user.month << "-" << user.day << endl;
    
            
    Date t = today();
    cout << "today is " << t.year << "-" << t.month << "-" << t.day << endl;
    
    
    int daysPassed = daysBetweenBirthday(user, t);
    cout << "a day has passed since my birthday: " << daysPassed << endl;
        
return 0;
}
    
  
