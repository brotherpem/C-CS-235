//Pierre Edward Mendy
//CS235 
//Lab 8

#include "Filter.h"

const double PI = 3.1415927;

Filter::Filter(string Ftype, Resistor Rist, Capacitor Capa) :FilterType(Ftype), R(Rist), C(Capa) {}

Filter::~Filter() {}

double Filter::getMinFreq() {
	return (1 / (2 * PI*R.getMinResistance()*C.getMinCapacitance()));
}

double Filter::getMaxFreq() {
	return (1 / (2 * PI*R.getMaxResistance()*C.getMaxCapacitance()));
}

string Filter::getFilterType() {
	cout << "Enter Filter Type: ";
	cin.ignore();
	getline(cin, FilterType);
	return FilterType;
}

string Filter::AFilter() { 
	return FilterType; 

}

