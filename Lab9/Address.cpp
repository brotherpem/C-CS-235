//Pierre Edward Mendy
//CS235 
//Lab 9

#include "Address.h"
address::address(void) : name("unknown"), zip("00"){

	//setName("").setZip(0);
}
address::address(const address & c):	name(c.name), zip(c.zip) {

	
}
address::address(const string & theName, const string & theZip) {

	name = theName;
	zip=theZip;
}
address::~address(void) {

}

string address::getName(void) const {

	return name;
}
string address::getZip(void)  const {

	return zip;
}

address & address::setName(const string & theName) {

	this->name = theName;
	return *this;

}
address & address::setZip(const string & theZip) {

	this->zip = theZip;
	return *this;
}

const address & address::operator=(const address & right) {

	if (this == &right) return *this;
	this->name = right.name;
	this->zip = right.zip;
	return *this;
}

void address::print(ostream & w) const {

	w << "" << name << "\n" << zip << endl;

}