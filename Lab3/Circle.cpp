//Pierre Edward Mendy
//02/02/2018
//    CIS 235    Lab     -  defining class circle , writing member functions
#include <iostream>
#include <cmath>
using namespace::std;
class circle {
public:
	void   setX(double xV);
	void   setY(double yV);
	void   setR(double rV);
	void   set(double value, char whichOne);  // use 'x' for x, use 'y' for y
											  // and use 'r' for radius
	double getX(void)         const;
	double getY(void)         const;
	double getR(void)         const;
	double get(char whichOne) const;          // use 'x' for x, use 'y' for y 
											  // and use 'r' for radius
	void   print(ostream & w) const;
	double area(void)     const;
	void   input(void);
	circle move(double xC, double yC) const;  // return a circle formed from 
											  // the invoking instance by:
											  // keep the same radius, adjust the x and y
											  //   of the center by the xC and yC amounts

	circle reSize(double rC)       const;  // return a circle formed from 
											   // the invoking instance by:
										   // keep the same center
											   //    adjust the radius by rC

private:
	double x,
		y,
		radius;
};

// The following is NOT a member function
circle makeCircle(double xV, double yV, double rV);

void main()
{
	circle a;
	a.setX(10);
	a.setY(20);
	a.setR(5);
	a.print(cout);
	a = a.move(100, 0);

	//   test input and print using a
	a.input();

	//   test the area function using a
	cout << "Area of circle a, is: " << a.area() << endl;

	//   add 2.4 to the x value of the circle a - use print to show the answer
	cout << "Adding 2.4 to x coordinate of circle a..." << endl;
	a.setX(a.getX() + 2.4);
	a.print(cout);

	//   test makeCircle, move and reSize  - use print to show the answers
	cout << "new circle, enter  X, Y, and R values: ";
	double x = 0, y = 0, radius = 0;
	cin >> x >> y >> radius;
	circle newCircle = makeCircle(x, y, radius);
	newCircle.print(cout);

	cout << "we are to move the circle: where do you prefer? X and Y: ";
	cin >> x >> y;
	newCircle = newCircle.move(x, y);
	newCircle.print(cout);

	cout << "now we are to resize the circle: what size do you prefer? Radius: ";
	cin >> radius;
	newCircle = newCircle.reSize(radius);
	newCircle.print(cout);

	cout << endl;

	//   using input create a circle named one
	//   using set   create a circle named two
	//   using setX, setY, and setR create a circle named three
	circle one, two, three;
	
	one.input();
	two.set(1, 'x');
	two.set(1, 'y');
	two.set(1, 'r');
	three.setX(one.getX() + one.getR() * 2.5);
	three.setY(one.getY() + one.getR() * 2.5);

	

	// Use of function chaining
	//   starting with center of x = 2.3, y = 4.5 and radius = 8.2
	//     move the circle by adjusting x by 1.1 and y by 3.3
	//     then resize the circle by adding 5.5 to the radius
	//   print the resulting circle

	cout << "Welcome to function changing." << endl;
	cout << "circle makeCircle(double xV, double yV, double rV) makes:" << endl;
	makeCircle(2.3, 4.5, 8.2).move(1.1, 3.3).reSize(5.5).print(cout);

	system("pause");
}

void circle::setX(double xV)
{
	this->x = xV;

}

void   circle::setY(double yV)
{

	this->y = yV;
}

void   circle::setR(double rV)
{
	this->radius = rV;

}

void   circle::set(double value, char whichOne)
{
	char letter = toupper(whichOne);
	switch (letter)
	{
	case 'X':
		this->setX(x) ;
		break;
	case 'Y':
		this->setY(y);
		break;
	case 'R':
		this->setR(radius);
		break;

	}
}

double circle::getX(void)    const
{
	return this->x;
}

double circle::getY(void)    const
{
	return this->y;
}

double circle::getR(void)    const
{
	return this->radius;
}

double circle::get(char whichOne) const
{
	char letter = toupper(whichOne);
	switch (letter)
	{
	case 'X':
		return this->x ;
		break;
	case 'Y':
		return this->y;
		break;
	case 'R':
		return this->radius;
		break;
	default:
		return 0;

	}
}

void   circle::print(ostream & w) const
{
	w << "X: " << this->x << endl;;
	w << "Y: " << this->y << endl;
	w<< "R: " << this->radius << endl;
	w.flush();


}

double circle::area(void)     const
{
	return 3.14159265 * (this->radius * this->radius);
}

void   circle::input(void)
{

	double x = 0, y = 0, radius = 0;
	cout << "Input X, Y, and R: ";
	cin >> this->x >> this->y >> this->radius;
	this->set(x, 'X');
	this->set(y, 'Y');
	this->set(radius, 'r');
}

circle circle::move(double xC, double yC) const
{
	circle temp;

	temp.setX(xC);
	temp.setY(yC);
	temp.setR(this->getR());
	
	return temp;

}

circle circle::reSize(double rC) const
{
	circle temp;

	temp.setX(this->x);
	temp.setY(this->y);
	temp.setR(rC);

	return temp;
}

circle makeCircle(double xV, double yV, double rV) {
	// Write the body here

	circle temp;

	temp.setX(xV);
	temp.setY(yV);
	temp.setR(rV);

	return temp;
}

/*
Input X, Y, and R: 2.5
3.4
5
Area of circle a, is: 78.5398
Adding 2.4 to x coordinate of circle a...
X: 4.9
Y: 3.4
R: 5
new circle, enter  X, Y, and R values: 3
4
5
X: 3
Y: 4
R: 5
we are to move the circle: where do you prefer? X and Y: x
X: 3
Y: 4
R: 5
now we are to resize the circle: what size do you prefer? Radius: X: 3
Y: 4
R: 5

Input X, Y, and R: Welcome to function changing.
circle makeCircle(double xV, double yV, double rV) makes:
X: 1.1
Y: 3.3
R: 5.5
Press any key to continue . . .
*/