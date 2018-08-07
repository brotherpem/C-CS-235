//Pierre Edward Mendy
// cs235
//Lab 10
//04/11/2018

#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include "Person.h"
#include <string>
using namespace std;

class Vehicle 
{
public:
	Vehicle();
	Vehicle(string m, int cyl, Person p);
	Vehicle(const Vehicle& theObject);
	string getManufacturer() const;
	int getCylinders() const;
	Person getOwner() const;
	void setManufacturer(string maker);
	void setCylinders(int cylinders);
	void setOwner(Person p);

	void output();
	// Outputs the data members of the class appropriately labeled

	Vehicle& operator=(const Vehicle& rtSide);
private:
	string manufacturer;
	int numCylinders;
	 Person owner;
};
#endif
