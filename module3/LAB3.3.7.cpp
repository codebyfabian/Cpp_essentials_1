//
// Created by Fabian  Land on 28.10.26.
//


#include <iostream>

using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

bool isLeap(int year) {
    // The code you've inserted already
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int monthLength(int year, int month) {
    // The code you've inserted already

    if (month < 1 || month > 12) {
        return -1;
    }else if (month == 2) {
        return isLeap(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }else {
        return 31;
    }

}

int dayOfYear(Date date) {

    // Insert your code here
    int summation = 0;
    int months = date.month;
    for (int month = 1; month < months; month++) {
        summation += monthLength(date.year,month);
        
    }
    summation += date.day;
    return summation;
}

int main(void) {

    Date d;
    cout << "Enter year, month, day: ";
    cin >> d.year >> d.month >> d.day;
    cout << dayOfYear(d) << endl;
    return 0;
}