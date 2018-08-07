//Pierre Edward Mendy
//lab 12
//04/18/2018

// RECT.cpp  
// member function definitions for cRectangle2 Class
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace::std;
#include "Rect2.h"

extern ofstream Out;

cRectangle2::cRectangle2(double w, double l)
{
	setWidth(w).setLength(l);
	Out << setw(60) << "2-Argument Rectangle constructor called" << endl;
	return;
}

cRectangle2::cRectangle2(void)
{
  setWidth(1.0).setLength(1.0);
  Out << setw(60) << "Default Rectangle constructor called" << endl;
}

cRectangle2::cRectangle2(const cRectangle2 & t)
{
  setWidth(t.getWidth()).setLength(t.getLength());
  Out << setw(60) << "Rectangle Copy constructor called" << endl;
  return;
}

cRectangle2::~cRectangle2(void)
{
	Out << setw(60) << "Rectangle Destructor called " << endl;
}

double cRectangle2::perimeter(void)  const
{
	return 2.0 * (getWidth() + getLength());
}

double cRectangle2::area(void)       const
{
	return getWidth() * getLength();
}

cRectangle2 &   cRectangle2::setWidth(double w)
{
	width = w > 0.0 && w < 20.0 ? w : 1.0;
	return *this;
}

cRectangle2 &   cRectangle2::setLength(double l)
{
	length = l > 0.0 && l < 20.0 ? l : 1.0;
	return *this;
}

double cRectangle2::getWidth(void)   const { return width; }

double cRectangle2::getLength(void)  const { return length; }

ostream & operator<<(ostream & where, const cRectangle2 & t)
{
  where <<  setw(10) << t.getLength() << setw(10) << t.getWidth();
  return where;
}
