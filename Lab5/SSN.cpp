// Pierre Edward Mendy
//   CS 235   Lab 5 

#include"Ssn.h"

const char Ssn::SEPARATOR = '-';
char Ssn::getSEPARATOR(void) { return Ssn::SEPARATOR; }

Ssn::Ssn(void) {
	first = 111;
	middle = 22;
	last = 3333;
}
Ssn::Ssn(int f, int m, int l) {
	//easy
	setSsn(f, m, l);
}
Ssn::Ssn(const Ssn & other) {
	//easy
	setSsn(other.getSsn());
}
Ssn::Ssn(const char S[]) {
	// easy
	setSsn(S);
}
Ssn::Ssn(int S) {
	// easy
	setSsn(S);
}
Ssn::~Ssn(void) {}

void   Ssn::setSsn(int f, int m, int l) {
	//easy
	first = f;
	middle = m;
	last = l;
}

void   Ssn::setSsn(int S) {
	first = S / 1000000;
	middle = (S % 1000000) / 10000;
	last = S % 10000;
}

void   Ssn::setSsn(const char S[]) {
	int count = 0;
	int SsnInt = 0;
	int Multiplier = 100000000;
	while (S[count] != '\0') {
		if (S[count] == '-') {
			count++;
			continue;
		}
		else {
			SsnInt = SsnInt + (S[count] - 48)*Multiplier;
			Multiplier /= 10;
			count++;
		}
	}
	this->setSsn(SsnInt);
}

int    Ssn::getSsn(void) const {
	return (first * 1000000 + middle * 10000 + last);
}
void   Ssn::getSsn(char * S) const {
	/*
	S[0] = '0' + (first / 100);
	S[1] = '0' + ((first % 100) / 10);
	S[2] = '0' + (first % 10);

	S[3] = '0' + middle / 10;
	S[4] = '0' + middle % 10;

	S[5] = '0' + last / 1000;
	S[6] = '0' + (last % 1000) / 100;
	S[7] = '0' + (last % 100) / 10;
	S[8] = '0' + last % 10;
	S[9] = '\0';
	*/
	int Si = getSsn();
	for (int i = 9; i > 0; i--) {
		S[9 - i] = '0' + Si / pow(10, (double)i);
		Si %= (int)pow(10, (double)i);
	}
	S[9] = '\0';
}

void   Ssn::print(ostream & w) const {
	w << first << "-" << middle << "-" << last << endl;
}

void   Ssn::inputN(void) {
	// easy
	cout << "Enter a 9 digit social security number: ";
	int social;
	cin >> social;
	setSsn(social);
}
void   Ssn::inputS(void) {
	// easy
	cout << "Enter a 9 digit social security number,"
		<< " with or without dashes ";
	char social[12];
	cin >> social;
	setSsn(social);
}

void   Ssn::copyTo(Ssn & other) const {
	//easy
	other.setSsn(getSsn());
}

bool   Ssn::isSmaller(const Ssn & others) const {
	//easy
	if (first < others.first)   return true;
	else if (first > others.first)    return false;
	else if (middle < others.middle) return true;
	else if (middle > others.middle)  return false;
	else if (last < others.last)     return true;
	else
	return false;
}