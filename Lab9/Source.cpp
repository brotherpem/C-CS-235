//Pierre Edward Mendy
//CS235 
//Lab 9

#include "Letter.h"


int main()
{
	//Address 
	cout << "----Addresses----\n" << endl;
	address myAddress;
	myAddress.setName("Mary Gomez ").setZip("99130");
	//myAddress.print(cout);

	address address2("Joseph Mendy ", "12345");
	//address2.print(cout);

	address address3;
	address3 = myAddress;

	address3.print(cout);

	address sender(address2);
	sender.print(cout);

	//Letter Testing
	cout << endl << "--Testing----\n" << endl;

	letter oneLetter(address3, address2, 3.5);
	oneLetter.print(cout);

	cout << endl << "--Letter----\n" << endl;

	letter letter2("Pete Bob", " 554473", "Sam Davis", " 995844", 1.5);
	letter2.print(cout);

	system("pause");
	return 0;
}

/*
----Addresses----

Mary Gomez
99130
Joseph Mendy
12345

--Testing----

From: Mary Gomez
Sender Zip code: 99130
TO: Joseph Mendy
Reciver Zip Code: 12345
Weight: 3.5

--Letter----

From: Pete Bob
Sender Zip code:  554473
TO: Sam Davis
Reciver Zip Code:  995844
Weight: 1.5
Press any key to continue . . .
*/