//Pierre Edward Mendy
//CS235 
//Lab 10

#include "Vehicle.h"
#include "Truck.h"
#include "Person.h"
#include <cmath>
#include <string>


// constructor (default)
Person::Person() : name("Pierre Edward") {
}

// constructor (full)
Person::Person(string theName) : name(theName) {
}

// constructory (copy)
Person::Person(const Person& theObject) : name(theObject.name) {
}

string Person::get_name() const {
	return name;
}

Person& Person::operator=(const Person& rtSide) {
	this->name = rtSide.name;
	return *this;
}

istream& operator >>(istream& inStream, Person& personObject) {

	inStream >> personObject.name;
	return inStream;

}

ostream& operator <<(ostream& outStream, Person& personObject) {

	outStream << personObject.name;
	return outStream;

}