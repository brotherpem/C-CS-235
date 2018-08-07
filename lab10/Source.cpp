//Pierre Edward Mendy
// cs235
//Lab 10
//04/11/2018

#include "Person.h"
#include "Truck.h"
#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	
	// Variable declarations

	string ownerName;
	string manufacturerName;
	int numCyl;
	double load;
	int towingCapacity;

	cout << endl;
	cout << "Testing Truck and Person classes..." << endl;
	cout << endl;

	cout << "First create 3 trucks..." << endl;
	cout << "Truck A ... " << endl;
	cout << "Enter the name of the owner: ";
	cin >> ownerName;
	cout << "Enter the number of cylinders: ";
	cin >> numCyl;
	cout << "Enter the name of the manufacturer: ";
	cin >> manufacturerName;
	cout << "Enter the load capacity: ";
	cin >> load;
	cout << "Enter the towing capacity: ";
	cin >> towingCapacity;

	Truck truckA;
	Person ownerA;
	cout << "Using the functions to set up the owner "
		<< "and truck A..." << endl;
	
	truckA.setOwner(ownerA);
	truckA.setManufacturer(manufacturerName);
	truckA.setCylinders(numCyl);
	truckA.setLoadCapacity(load);
	truckA.setTowingCapacity(towingCapacity);
	

	cout << "Truck A " << endl;
	truckA.output();
	cout << endl;

	cout << endl << "The end..." << endl;

	system("pause");
	return 0;
}

/*
Testing Truck and Person classes...

First create 3 trucks...
Truck A ...
Enter the name of the owner: Pierre
Enter the number of cylinders: 4
Enter the name of the manufacturer: benz
Enter the load capacity: 800
Enter the towing capacity: 80
Using the functions to set up the owner and truck A...
Truck A
Truck object:
Load Capacity: 800
Towing Capacity: 80
Owner: Pierre Edward
Manufacturer: benz
Number of Cylinders: 4

The end...
Press any key to continue . . .
*/