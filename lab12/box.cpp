//Pierre Edward Mendy
//lab 12
//04/18/2018


// BOX.cpp    
//  Student will write the following member and friend functions
// member function definitions for BOX.cpp  Box Class

#include <fstream>
#include <iomanip>
#include <ostream>
using namespace::std;
#include "Box.h"
extern ofstream Out;

cBox::cBox(double w, double l, double h) : cRectangle2(w, l), height(h)
{

	Out << setw(60) << "3-Argument Box Constructor called " << endl;
	return;
}

// Copy Constructor
cBox::cBox(const cBox & t) : cRectangle2(t), height(t.getHeight())
{

  Out << setw(60) << "Box Copy constructor called" << endl;
  return;
}

cBox::~cBox(void)
{
	Out << setw(60) << "Box Destructor called " << endl;
}

double cBox::perimeter(void)const
{
	return ((4 * this->getHeight()) + (2 * this->cRectangle2::perimeter()));

}

double cBox::area(void)const
{
	return ((2 * (this->cRectangle2::getLength())*(this->height))
		+ (2 * (this->cRectangle2::getLength())*(this->cRectangle2::getWidth()))
		+ (2 * (this->cRectangle2::getWidth())*(this->height)));
}


cBox & cBox::setHeight(double h)
{
	this->height = h;
	return *this;
}

double cBox::getHeight(void) const
{
	return this->height;
}

double volume(const cBox & t)
{
	return (t.height * t.cRectangle2::getLength() * t.cRectangle2::getWidth());
}

ostream & operator<<(ostream & where, const cBox & t)
{
	where << setw(10) << t.cRectangle2::getLength() << setw(10) << t.cRectangle2::getWidth() << setw(10) << t.height;

	return where;
}