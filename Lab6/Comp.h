//Pierre Edward Mendy
//CS235 
//Lab 6 - Complex

// header file
#ifndef COMP_H
#define COMP_H

#include <iostream>
using namespace std;
class Complex
{
	//overloded arithmeic operators on complex numbers
	friend ostream &operator << (ostream &output,const Complex& num);
	friend istream &operator >> (istream &input, Complex& c);
	friend Complex operator + (Complex a, Complex b);
	friend Complex operator - (Complex c, Complex d);
	friend Complex operator * (Complex s1, Complex s2);

public:
	Complex(); //default constructor
	Complex(double, double); //argumented constructor

private:
	double realNum; //real number
	double imaginaryNum; //imaginary number


							
	

};
#endif

