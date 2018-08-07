//Pierre Edward Mendy
//lab 12
//04/18/2018
// BOX.H      

#ifndef cBOX_H
#define cBOX_H
#include <iostream>
#include "Rect2.h"
using namespace::std;

class cBox : public cRectangle2 {

	friend ostream & operator<<(ostream &, const cBox &);

	friend double volume(const cBox &);  // gives the volume
													 // could have been a member function

	public:

		cBox(double = 1.0, double = 1.0, double = 1.0);

		cBox(const cBox &);

		~cBox(void);

		double  perimeter(void)     const;   // gives the perimeter of the 12 edges

		double  area(void)          const;        // gives the total surface area

		cBox &  setHeight(double l);

		double  getHeight(void)const;

	private:

		double height;
};

#endif