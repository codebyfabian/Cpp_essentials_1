/*  1.6.4   LAB   Printing Data
Scenario

All operations on float numbers should be made while keeping one thing in mind: they are not entirely accurate.

If we're comparing two float numbers, we must use an epsilon comparison. Write code to check if two given numbers differ by only a small value (i.e. 0.000001).

Ask for two integer numbers from the user. Divide 1 by each of them (1 by the first number and 1 by the second number) and compare the results of this operation. Print the information to the user. Remember to convert to floats before dividing.

Put these values into your code:
*/

#include <iostream>
#include <iomanip>

using namespace std;


int main(void) {
    float v1 = 2.3;
    float v2 = 2.3;
    float v3 = 2.123456;
    float v4 = 2.123456;
    float v5 = 2.123456;
    cout << setprecision(2) << v1 << endl; // 2 Stellen gesamt
    cout << setprecision(2) << v1 << endl;
    cout << setprecision(6) << v1 << endl; // 6 Stellen gesamt
    cout << setprecision(2) << v1 << endl;
    cout << setprecision(0) << v1 << endl;
    
    return 0;
}

