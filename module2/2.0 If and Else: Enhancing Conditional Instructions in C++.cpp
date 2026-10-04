
/* 
As you surely know, due to some astronomical reason, a year may be leap or common. The former is 366 days long while the latter is 365 days.

Since the introduction of the Gregorian calendar (in 1582), the following rule is used to determine the kind of year:

if the year number isn't divisible by 4, it is a common year;
otherwise, if the year number isn't divisible by 100, it is a leap year;
otherwise, if the year number isn't divisible by 400, it is a common year;
otherwise, it is a leap year.
The code should output one of two possible messages, which are Leap year or Common year, depending on the value entered.

It would be good to verify if the year entered falls into the Gregorian era and to output a warning otherwise.

Test your code using the data we've provided.


 */

// #include <iostream>
// using namespace std;


// int main(void) {
//     int year;

//     cout << "Enter a year: " << endl;
//     cin >> year;
//     if (year<1582){
//         cout << "Error" << endl;
//     }else{
//         if(year % 4){
//             cout << "Common year" << endl;
//         }else if(year % 100){
//             cout << "Leap year" << endl;
//         }else if(year % 400){
//             cout << "Common year"<< endl;
//         }else{
//             cout << "Leap year"<< endl;
//         }
//     }
//     return 0;
// }

/* 
Some actual evaluations - taxes
Wherever you are and whatever you pay for, you usually spend your money on two things: the first is for a good or service you are buying, and the second is taxes. This means that the amount of money you are transferring (named "gross price") to the seller is a sum of the actual price (named "net price") and the tax. The tax is calculated as a percentage of the net price and its rate depends on a lot of unpredictable factors (e.g. where you live, what you buy, etc., etc., etc.).

Your task is to write a simple "tax calculator" – it should accept two values: a gross price and a tax rate expressed as a percentage (i.e. a value greater than 0 and, let's be optimistic, less than 100).

Look at the code below – it only reads two input values and outputs the results, so you need to complete it with a few smart calculations.

It would be good to verify if the values entered are reasonable (e.g. gross price is greater than zero and tax rate falls into the previously mentioned range).

Test your code using the data we've provided.


 */

#include <iostream>

using namespace std;

int main(void) {
	float grossprice, taxrate, netprice, taxvalue;
	
	cout << "Enter a gross price: ";
	cin >> grossprice;
	cout << "Enter a tax rate: ";
	cin >> taxrate;
	
	// Insert you code here
    if (grossprice <= 0) {
        cout << "Error: Gross price must be greater than zero." << endl;
        return 1;
    }else if (taxrate <= 0 || taxrate >= 100) {
        cout << "Error: Tax rate must be greater than 0 and less than 100." << endl;
        return 1;
    } else {
        netprice = grossprice / (1 + taxrate / 100);
        taxvalue = grossprice - netprice;
    }
	
	cout << "Net price: " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;
	return 0;
}