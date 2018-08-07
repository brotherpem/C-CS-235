//Pierre Edward Mendy
//CS235 
//Lab 9

#ifndef LETTER_H
#define LETTER_H
#include "address.h"
#include <string>
#include <fstream>
using namespace::std;

class letter
{
public:
	letter(void);
	letter(const letter & c);
	letter(const address & sentBy, const address & sentTo, double theWeight);
	letter(const string & senderName, const string & senderZip,
		const string & toName, const string & toZip,
		double theWeight);
	~letter(void);

	address  getSender(void)     const;
	address  getTo(void)         const;
	double   getWeight(void)     const;
	string   getSenderName(void) const;
	string   getSenderZip(void)  const;
	string   getToName(void)     const;
	string   getToZip(void)      const;

	letter & setSender(const address &);
	letter & setTo(const address &);
	letter & setWeight(double);

	const letter & operator = (const letter & right);

	double getPostageCost(void) const;  // assume NO ERROR CONDITIONS
										/*
										Weight Not Over     Rates
										(ounces)
										1                   0.44
										2                   0.61
										3                   0.78
										3.5                 0.95
										*/

	void print(ostream &) const;
	//  output will be of the form:
	//  From:
	//  John Wilson
	//  66210

	//  To:
	//  Mary Jones
	//  66212

	// Cost: $0.95



private:

	address from;
	address to;
	double  weight;   // weight in ounces

};

#endif
