//Pierre Edward Mendy
//CS235 
//Lab 9

#include "Letter.h"
using namespace std;
#include<iostream>

letter::letter(void) :from("unknown", "00000"), to("unknown", "00000"), weight(0.0) {
	//setSender("").setTo("").setWeight(0);


}
letter::letter(const letter & c){
	from = c.getSender();
	to = c.getTo();
	weight = c.getWeight();

}
letter::letter(const address & sentBy, const address & sentTo, double theWeight):from(sentBy), to(sentTo), weight(theWeight++) {



}
letter::letter(const string & senderName, const string & senderZip,
	const string & toName, const string & toZip, double theWeight): from (senderName, senderZip), to(toName, toZip), weight(theWeight) {

	//setWeight(theWeight);


}
letter::~letter(void) {


}

address  letter::getSender(void)     const {

	return from;
}
address  letter::getTo(void)         const {

	return to;
}
double   letter::getWeight(void)     const {

	return weight;
}
string   letter::getSenderName(void) const {

	return from.getName();
}
string   letter::getSenderZip(void)  const {

	return from.getZip();
}
string   letter::getToName(void)     const {

	return to.getName();
}
string   letter::getToZip(void)      const {

	return to.getZip();
}

letter & letter::setSender(const address & frm) {

	this->from = frm;
	return *this;
}
letter & letter::setTo(const address & tt) {
	this->to = tt;
	return *this;

}
letter & letter::setWeight(double w) {

	this->weight = w;
	return *this;
}

const letter & letter::operator = (const letter & right) {

	if (this == &right) return *this;
	this->from = right.from;
	this->to = right.to;
	this->weight = right.weight;
	return *this;
}

double letter::getPostageCost(void) const {
	// assume NO ERROR CONDITIONS
	/*
	Weight Not Over     Rates
	(ounces)
	1                   0.44
	2                   0.61
	3                   0.78
	3.5                 0.95
	*/

	if (weight <= 1) {
		return weight * (0.44);
	}
	else if (weight <= 2) {
		return weight * (0.61);
	}
	else if (weight <= 3) {
		return weight * (0.78);
	}
	else if (weight <= 3.5) {
		return weight * (0.95);
	}
	else {
		return weight;

	}

}

void letter::print(ostream & out) const {
	//  output will be of the form:
	//  From:
	//  John Wilson
	//  66210

	//  To:
	//  Mary Jones
	//  66212

	// Cost: $0.95

	out << "From: " << getSenderName() <<endl
		<< " Sender Zip code: " << getSenderZip() << endl
		<<"TO: "  << getToName() << endl
		<<" Reciver Zip Code: " <<getToZip()  <<endl 
		<<" Weight: " << getWeight() << endl;



}
