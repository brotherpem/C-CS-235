//Pierre Edward Mendy
// cs235
//Lab 10
//04/11/2018

#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Person
{
public:
	Person();
	Person(string theName);
	Person(const Person& theObject);
	string get_name() const;
	Person& operator=(const Person& rtSide);
	friend istream& operator >>(istream& inStream,
		Person& personObject);
	friend ostream& operator <<(ostream& outStream,
		Person& personObject);
private:
	string name;
};
#endif