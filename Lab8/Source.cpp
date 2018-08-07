//Pierre Edward Mendy
//CS235 
//Lab 8
#include "Capacitor.h"
#include "Filter.h"
#include <iostream>
#include "Resistor.h"
#include <iomanip>

using namespace std;

//void clear_screen(void);

const double PI = 3.1415927;

void main() {

	Resistor R1(50000, .05);

	R1.getnominal();
	R1.getTolerance();

	Capacitor C1(.00000006, .1);

	C1.getnominal();
	C1.getTolerance();

	Filter F1("UNK", R1, C1);
	F1.getFilterType();

	cout << setiosflags(ios::fixed)
		<< setiosflags(ios::right)
		<< setiosflags(ios::showpoint)
		<< setprecision(3);

	cout << "-------------------------------" << endl;
	cout << "Cutoff Frequency of a Sinlge Pole RC Filter" << setw(10) << endl;
	cout << "Min Freq: " <<setw(10) << F1.getMinFreq() << endl;
	cout << "Max Freq: " <<setw(10) << F1.getMaxFreq() << endl;

	cout << "-------------------------------" << endl;

	cout << "Resistor Stats" << setw(10) << endl;
	cout << "Tolerance: " << setw(10) << R1.ATolerance() << endl;
	cout << "Nominal: " << setw(10) << R1.ANominal() << endl;
	cout << endl;
	cout << "Capacitor Stats" << setw(10) << endl;
	cout << "Tolerance: " << setw(10) << C1.ATolerance() << endl;
	cout << "Nominal: " << setw(10) << C1.ANominal() << endl;
	cout << endl;
	cout << "Filter Stats: " << setw(10) << endl;
	cout << "Filter Type: " << setw(10) << F1.AFilter() << endl;
	cout << "Min Freq: " << setw(10) << F1.getMinFreq() << endl;
	cout << "Max Freq: " << setw(10) << F1.getMaxFreq() << endl;


	system("pause");
}

/*

Please Enter Resistor Nominal: 50000
Please Enter Resistor Tolerance (%): 0.05
Please Enter Capacitor Nominal: .00000006
Please Enter Capacitor Tolerance (%): .1
Enter Filter Type: High Pass
-------------------------------
Cutoff Frequency of a Sinlge Pole RC Filter
Min Freq:     62.049
Max Freq:     45.932
-------------------------------
Resistor Stats
Tolerance:      0.050
Nominal:  50000.000

Capacitor Stats
Tolerance:      0.100
Nominal:      0.000

Filter Stats:
Filter Type:  High Pass
Min Freq:     62.049
Max Freq:     45.932
Press any key to continue . . .
*/






