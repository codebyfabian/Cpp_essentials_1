//
// Created by Fabian  Land on 28.10.26.

// 3.3.5   LAB   Old problems, new methods: functions
// Level of difficulty
//
// Medium
//
// Objectives
//
// Familiarize the student with:
//
// the concept of defining and invoking a function;
// passing argument values into a function;
// refactoring existing code to meet new requirements.
// Scenario
//
// Some time ago we asked you to write a program to find out if a certain year was leap or common. We want to return to the issue, but in a completely different form.
//
// We want you to write a function equipped with the following features:
//
// its name should be "isLeap";
// it accepts one argument of type int representing the year number;
// it returns a bool value: true if the year is leap and false otherwise;
// it should be mute! It mustn't write anything to the output – the only way it reveals its actions is by the value it returns.
// We've prepared a skeleton of the program – fill the function body with the appropriate content.
//
// We've also attached the output that is expected from your program:

#include <iostream>
using namespace std;

bool isLeap(int year) {

    // Insert your code here
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        return true;
    }else {
        return false;
    }


}

int main(void) {

    for(int yr = 1995; yr < 2017; yr++)
        cout << yr << " -> " << isLeap(yr) << endl;
    return 0;
}