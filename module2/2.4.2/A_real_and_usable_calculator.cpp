/* 

Level of difficulty

Medium

Objectives

Familiarize the student with:

using the switch statement;
and improve the student's skills in building interactive programs.
Scenario

Your task it to write a real, interactive, four-function calculator. Of course, you may add as many new functions as you want, 
but four basic operations (+ - * /) are a must. Moreover, we hope that your calculator will be smart enough not to be fooled by a division by 0. Be careful!

We want your program to display a menu that looks like this one:
 */

#include <iostream>
using namespace std;

int main (void){

    int calculatorResult;
    double val1;
    double val2;
    double result;

    cout << "Please enter a value between 0 and 4: " << endl;
    cin >> calculatorResult;

    do {

         switch (calculatorResult)
    {
    case 0:
        return 0;
        break;
    case 1:
       cout << "Please enter two values: " << endl;
       cout << "Value 1: " << endl;
       cin >> val1;
       cout << "Value 2: " << endl;
       cin >> val2;
       result = val1 + val2;
       cout << "Result: " << result << endl;
        break;
    case 2:
    cout << "Please enter two values: " << endl;
       cout << "Value 1: " << endl;
       cin >> val1;
       cout << "Value 2: " << endl;
       cin >> val2;
       result = val1 - val2;
       cout << "Result: " << result << endl;
        break;
    case 3:
         cout << "Please enter two values: " << endl;  
         cout << "Value 1: " << endl;
       cin >> val1;
       cout << "Value 2: " << endl;
       cin >> val2;
       result = val1 * val2;
       cout << "Result: " << result << endl;
        break;
    case 4:
        cout << "Please enter two values: " << endl;
       cout << "Value 1: " << endl;
       cin >> val1;
       cout << "Value 2: " << endl;
       cin >> val2;
       if (val2 == 0) {
           cout << "Error: Division by zero is not allowed." << endl;
       } else {
           result = val1 / val2;
           cout << "Result: " << result << endl;
       }
        break;
    
    default:
    cout << "Invalid option. Please enter a value between 0 and 4." << endl;
        break;
    }


    }while (calculatorResult < 0 && calculatorResult > 4);

   

    return 0;
}