

// /* LAB: Operators and Expressions Part 1
// Objectives:
// Familiarize the student with:
// the concept of integers, floating-point numbers, operators and arithmetic operations in C++ programming;
// understanding the precedence and associativity of C++ operators as well as the proper use of parentheses;
// performing basic calculations. 
// */

// #include <iostream>

// using namespace std;

// int main(void) {
// 	float pi = 3.14159265359;
// 	float x,y;

// 	cout << "Enter value for x: ";
// 	cin >> x;

// 	// put your code here
//     float xQuad = x * x;
//     float piQuad = pi * pi;

//     y = ((xQuad/(piQuad*(xQuad + 0.5)))) * (1+(xQuad/(piQuad*((xQuad - 0.5)*(xQuad - 0.5)))));
	
// 	cout << "y = " << y;
// 	return 0;
// }



/* LAB: Operators and Expressions Part 2 

Level of difficulty:
Easy

Objectives:
Familiarize the student with:

shortcut and pre/post increment/decrement operators;
building simple expressions;
translating verbal description into programming language;
testing code using known input and output data.
Scenario

Take a look at the code below: it reads two integer values, manipulates them and finally outputs the k variable. The problem is that the manipulations have been described using natural language, so the code is completely useless now.

We want you to act as an intelligent (naturally!) compiler and to translate the formula into real C++ notation. Try to use pre/post and short-cut operators – they fit perfectly into some of the steps.

Test your code using the data we've provided.

*/

#include <iostream>

using namespace std;

int main(void) {
	int i, j, k;
	
	cout << "Enter i: ";
	cin >> i;
	cout << "Enter j: ";
	cin >> j;
	
	i += 2; 		// increment i by 2
	j -= i;   		// decrement j by i
	k = i/j;  		// divide i by j giving k
	k += k;   		// increment k by k
	k --;			// decrement k by 1
	j = k % i;		// assign k modulo i to j
	k += (k + i);		// increment k by k added to i
	k += (k / j);		// increment k by k divided by j
	k = k * k * k;	// assign k times k times k to k
	k += (i * j);		// increment k by i times j
	
	cout << k << endl;
	return 0;
}