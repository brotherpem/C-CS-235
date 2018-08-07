//Pierre Edward Mendy
//CS235 
//Lab 8

#include "Resistor.h"

const double PI = 3.1415927;

Resistor::Resistor(double N, double T) :nominal(N), tolerance(T) {}

double Resistor::getMinResistance() {
	return (nominal - (nominal*tolerance));
}

double Resistor::getMaxResistance() {
	return (nominal + (nominal*tolerance));
}

double Resistor::getTolerance() {
	cout << "Please Enter Resistor Tolerance (%): ";
	cin >> tolerance;
	return tolerance;
}

double Resistor::getnominal() {
	cout << "Please Enter Resistor Nominal: ";
	cin >> nominal;
	return nominal;
}

double Resistor::ATolerance() {
	return tolerance;

}
double Resistor::ANominal() {
	
	return nominal; 

}








