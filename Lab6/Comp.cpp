//Pierre Edward Mendy
//CS235 
//Lab 6 - Complex

#include "Comp.h"

Complex::Complex()
{
	realNum = 0;
	imaginaryNum = 0;
}
Complex::Complex(double a, double b)
{
	realNum = a;
	imaginaryNum = b;

}

ostream &operator <<(ostream &output,const  Complex &num) {
	output << num.realNum << " + " << num.imaginaryNum << "i";
	return output;
}

istream &operator >>(istream &input, Complex &c)

{

	input >> c.realNum >> c.imaginaryNum;

	return input;

}

Complex operator+(Complex a, Complex b)
{
	Complex sum;
	sum.realNum = a.realNum + b.realNum;
	sum.imaginaryNum = a.imaginaryNum + b.imaginaryNum;
	return sum;
}
Complex operator-(Complex c, Complex d)
{
	Complex subt;
	subt.realNum = c.realNum - d.realNum;
	subt.imaginaryNum = c.imaginaryNum - d.imaginaryNum;
	return subt;
}
Complex operator*(Complex s1 , Complex s2)
{
	Complex multi;
	multi.realNum = ((s1.realNum * s2.realNum) - (s1.imaginaryNum * s2.imaginaryNum));
	multi.imaginaryNum = ((s1.imaginaryNum * s2.realNum) + (s1.realNum * s2.imaginaryNum));
	return multi;
}

/*Complex Complex::operator / (Complex &other) const {

	Complex a;
	double temp = (other.realNum * other.realNum) + (other.imaginaryNum * other.imaginaryNum);
	a.realNum = (this->realNum * other.realNum) + (this->imaginaryNum * other.imaginaryNum) / temp;
	a.imaginaryNum = (this->imaginaryNum * other.realNum) - (this->realNum * other.imaginaryNum) / temp;
	return a;

}

void Complex::operator = (Complex &other) {
	this->realNum = other.realNum;
	this->imaginaryNum = other.imaginaryNum;

}

void Complex::display()const {
	if (imaginaryNum < 0)
		cout << realNum << " - " << abs(imaginaryNum) << "i";
	else if (imaginaryNum == 0)
		cout << realNum;
	else
		cout << realNum << " + " << imaginaryNum << "i";
}*/
