// Pierre Edward Mendy
//   CS 235   Lab 5 

#include"Ssn.h"

void main() {
	Ssn S1;
	S1.print(cout);
	S1.setSsn(555339999);
	S1.print(cout);
	//-----------------------
	char *S = new char[12];
	S1.getSsn(S);
	S1.print(cout);
	//-------------------------
	char St1[] = "123456789";
	char St2[] = "123-45-6789";
	S1.setSsn(St1);
	S1.print(cout);
	S1.setSsn(St2);
	S1.print(cout);
	delete[] S;
	system("pause");

}

/*
111-22-3333
555-33-9999
555-33-9999
123-45-6789
123-45-6789
Press any key to continue . . .
*/