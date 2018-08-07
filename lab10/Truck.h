//Pierre Edward Mendy
// cs235
//Lab 10
//04/11/2018

#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>
#include "Vehicle.h"
#include <string>
using namespace std;
class Truck : public Vehicle
{
public:
	Truck();
	Truck(string m, int cyl, Person p, double load, int tow);
	Truck(const Truck& theObject);
	double getLoadCapacity() const;
	int getTowingCapacity() const;
	void setLoadCapacity(double newLoad);
	void setTowingCapacity(int newTowing);

	void output();
	// Outputs the data members appropriately labeled.

	Truck& operator=(const Truck& rtSide);
private:
	double loadCapacity;
	int towingCapacity;
};
#endif