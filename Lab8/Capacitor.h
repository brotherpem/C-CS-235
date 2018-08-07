//Pierre Edward Mendy
//CS235 
//Lab 8

#ifndef CAPACITOR_H
#define CAPACITOR_H

#include <iostream>
using namespace std;

//const double PI = 3.1415927;

class Capacitor {
private:
	double tolerance, nominal;
	double minCapacitance, maxCapacitance;
public:
	Capacitor(double, double);
	~Capacitor() {}
	double getMinCapacitance();
	double getMaxCapacitance();
	double getTolerance();
	double getnominal();
	double ATolerance();
	double ANominal();
};

#endif

