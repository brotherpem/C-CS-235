//Pierre Edward Mendy
//lab 12
//04/18/2018

// RECT2.H      

#ifndef cRECT2_H
#define cRECT2_H
#include <iostream>
using namespace::std;

class cRectangle2 {
	friend ostream & operator<<(ostream &, const cRectangle2 &);

	public:
		cRectangle2(double , double );             // 2-Argument Constructor

		cRectangle2(void);                         // Default Constructor

		cRectangle2(const cRectangle2 &);          // Copy Constructor

		~cRectangle2(void);                        // Destructor

		double perimeter(void)const;

		double area(void)const;

		cRectangle2 &  setWidth(double w);

		cRectangle2 &  setLength(double l);

		double getWidth(void)const;

		double getLength(void) const;

	private:

		double length;

		double width;
};

#endif