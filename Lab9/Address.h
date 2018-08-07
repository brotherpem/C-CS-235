//Pierre Edward Mendy
//CS235 
//Lab 9

#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
#include <iostream>
using namespace::std;

class address
{
public:
	address(void);
	address(const address &);
	address(const string & theName, const string & theZip);
	~address(void);

	string getName(void) const;
	string getZip(void)  const;

	address & setName(const string & theName);
	address & setZip(const string & theZip);

	const address & operator=(const address & right);

	void print(ostream &) const;
	//  output will be of the form:
	//  John Wilson
	//  66210


private:
	string name;
	string zip;

};

#endif
