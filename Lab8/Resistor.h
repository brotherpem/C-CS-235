//Pierre Edward Mendy
//CS235 
//Lab 8

#ifndef RESISTOR_H
#define RESISTOR_H

#include <iostream>
using namespace std;

//const double PI = 3.1415927;

class Resistor {
private:
	double tolerance, nominal;
	double minResistance, maxResistance;
public:
	Resistor(double, double);
	~Resistor() {}
	double getMinResistance();
	double getMaxResistance();
	double getTolerance();
	double getnominal();
	double ATolerance();
	double ANominal();
};

#endif

