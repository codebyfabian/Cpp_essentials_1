//
// Created by Fabian  Land on 28.10.26.
//


// 3.3.6   LAB   One step further: finding the lengths of months
// Level of difficulty
//
// Medium
//
// Objectives
//
// Familiarize the student with:
//
// building a set of cooperating functions,
// singnalling erroneous arguments using a specific return value.
// Scenario
//
// Let's continue our coder's reflections on time. Now, when you have a reliable function diagnosing the nature of any year,
// you can use it to implement another important function returning the length of any month (measured in days, of course).
//
// Write a function equipped with the following features:
//
// its name is "monthLength"
// it accepts two arguments of type int: year number (first) and month number (second)
// it returns an int value which represents a length of specified month in a specified year (obviously, year is important only when month == 2)
// or 0 if any of the input arguments isn't valid
// it should be mute
// We've prepared a skeleton of the program - fill the function body with an appropriate content!
//
// We've also attached the output that is expected from your program.
//
// Note: there are at least two ways of implementing the function: you can use switch or (something which seems a bit smarter)
// declare a vector storing months' lengths – choose the more convenient style.

#include <iostream>

using namespace std;

bool isLeap(int year) {

    // The code you've inserted already
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

}

int monthLength(int year, int month) {

    // Insert a new code here
    if (month <= 1 || month > 12) {
        return -1;
    }else if (month == 2) {
        return isLeap(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }else {
        return 31;
    }



}

int main(void) {

    for(int yr = 2000; yr < 2002; yr++) {
        for(int mo = 1; mo <= 12; mo++)
            cout << monthLength(yr,mo) << " ";
        cout << endl;
    }
    return 0;
}