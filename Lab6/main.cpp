//Pierre Edward Mendy
//CS235 
//Lab 6 - Complex

#include "Comp.h"
#include <iostream>


using namespace std;


int main()
{

	Complex C1, C2;
	cout << "enter a value for r and i for C1 " << endl;
	cin >> C1;
	cout << "enter a value for r and i for C2 " << endl;
	cin >> C2;
	cout << "The first number: " << C1 << endl;
	cout << "The Second Number: " << C2 << endl;
	cout << " Addition: " << C1 + C2 << endl;
	cout << "Subtraction:  " << C1 - C2 << endl;
	cout << "Multiplication: " << C1 * C2 << endl;




	system("pause");

	return 0;
}

/*
enter a value for r and i for C1
6 3
enter a value for r and i for C2
7 5
The first number : 6 + 3i
The Second Number : 7 + 5i
Addition : 13 + 8i
Subtraction : -1 + -2i
Multiplication : 27 + 51i
Press any key to continue . . .
*/
