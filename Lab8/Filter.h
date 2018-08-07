//Pierre Edward Mendy
//CS235 
//Lab 8

#ifndef FILTER_H
#define FILTER_H

#include "Resistor.h"
#include "Capacitor.h"
#include <string>

//const double PI = 3.1415927;

class Filter {
private:
	string FilterType;
	double minFreq, maxFreq;
	Resistor R;
	Capacitor C;
public:
	Filter(string, Resistor, Capacitor);
	~Filter();
	double getMinFreq();
	double getMaxFreq();
	string getFilterType();
	string AFilter();
};

#endif



