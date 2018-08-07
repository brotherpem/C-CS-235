// Pierre Edward Mendy
//   CS 235   Lab 5 
#ifndef SSN_H
#define SSN_H

#include <iostream>
using namespace::std;
class Ssn {
public:
	Ssn(void);                    // Default constructor
	Ssn(int, int, int);           // 3 Argument constructor
	Ssn(const Ssn &);             // Copy constructor
	Ssn(const char[]);           // pass a string as the parameter
								 //   of the form "456-92-1245" or "456921245"
	Ssn(int);                     // pass an int of the form 456921245

								  //**************************************************************
	~Ssn(void);                   // One and only destructor

	void   setSsn(int f, int m, int l);
	void   setSsn(int);
	void   setSsn(const char[]);

	int    getSsn(void) const;
	void   getSsn(char *) const;        //  form a string in caller's memory

	void   print(ostream & w) const;    //   will print   ddd-dd-dddd

	void   inputN(void);                //   user types an integer
	void   inputS(void);                //   user types a string

	void   copyTo(Ssn &) const;       //   copy invoking instance to parameter

	bool   isSmaller(const Ssn &) const;  // return true if invoking instance
										  //    is smaller than parameter
	static char getSEPARATOR(void);     // static function to return separator char
private:

	static const char SEPARATOR;       // Class data, not member data

	int    first,
		middle,
		last;
};
#endif


