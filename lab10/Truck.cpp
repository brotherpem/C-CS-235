//Pierre Edward Mendy
// cs235
//Lab 10
//04/11/2018

#include "Vehicle.h"
#include "Truck.h"
#include "Person.h"
#include <cmath>
#include <string>

// constructor (default)
Truck::Truck() : loadCapacity(0.0), towingCapacity(0), Vehicle() {
	// member initialization list used
}

// constructor (full)
Truck::Truck(string m, int cyl, Person p, double load, int tow): loadCapacity(load), towingCapacity(tow), Vehicle(m,cyl,p) {
	// member initialization list used
}

// constructor (copy)
Truck::Truck(const Truck& theObject) : loadCapacity(theObject.loadCapacity), towingCapacity(theObject.towingCapacity), Vehicle(theObject) {
	// member initialization list used
}

double Truck::getLoadCapacity() const {
	return this->loadCapacity;
}

int Truck::getTowingCapacity() const {
	return this->towingCapacity;
}

void Truck::setLoadCapacity(double newLoad) {
	this->loadCapacity = newLoad;
}

void Truck::setTowingCapacity(int newTowing) {
	this->towingCapacity = newTowing;
}

void Truck::output() {
	// Outputs the data members appropriately labeled.
	cout << "Truck object:\nLoad Capacity: " 
		<< this->getLoadCapacity() << "\nTowing Capacity: " 
		<< this->getTowingCapacity() << endl;

	this->Vehicle::output();
}

Truck& Truck::operator=(const Truck& rtSide) {

	// efficiency check
	if (this == &rtSide) return *this;

	this->loadCapacity = rtSide.loadCapacity;
	this->towingCapacity = rtSide.towingCapacity;
	// copy Vehicle to Vehicle object
	(*this).Vehicle::operator=(rtSide);
	return *this;
}