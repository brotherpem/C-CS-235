//Pierre Edward Mendy
//CS235 
//Lab 8

#include "Capacitor.h"

Capacitor::Capacitor(double N, double T) :nominal(N), tolerance(T) {}

double Capacitor::getMinCapacitance() {
	return (nominal - (nominal*tolerance));
}

double Capacitor::getMaxCapacitance() {
	return (nominal + (nominal*tolerance));
}

double Capacitor::getTolerance() {
	cout << "Please Enter Capacitor Tolerance (%): ";
	cin >> tolerance;
	return tolerance;
}

double Capacitor::getnominal() {
	cout << "Please Enter Capacitor Nominal: ";
	cin >> nominal;
	return nominal;
}

double Capacitor::ATolerance() {
	
	return tolerance;
}

double Capacitor::ANominal() {
	
	return nominal; 

}


