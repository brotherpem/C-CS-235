//Pierre Edward Mendy
//lab 2 - cs235
// 01/31/2018

#include<iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct point {
	double x, y;
};

void    setX(point & p, double xV);
void    setY(point & p, double yV);
double  getX(const point & p);
double  getY(const point & p);
void    print(ostream & w, const point & p);
point   makePoint(double xV, double yV);
point * makePointPtr(double xV, double yV);
void    makePoint(double xV, double yV, point & result);
void    makePoint(double xV, double yV, point * ptrAns);
void    input(point & p);
double  Distance(const point & p1, const point & p2);


void  main() {
	point P1, P2;
	// test setX and setY for P1 and P2
	setX(P1, 20);
	setX(P2, 30);
	setY(P1, 20);
	setY(P2, 30);


	// for P1 and P2, print out the x and y value for each one of them using the getX and getY methods
	cout << "\n" << getX(P1)<< " "<< getY(P1) << endl;
	cout << "\n" << getX(P2) << " " << getY(P2) << endl;

	// print out the x and y value for P1 or P2 using print method
	print(cout, P1);
	print(cout, P2);
	
	// assign x and y values of Pa using the first makePoint method
	point Pa;
	Pa = makePoint(40, 40);

	// assign x and y values of Pb using the makePointPtr method
	point * Pb;
	Pb = makePointPtr(50, 50);
	
	

	// assign x and y values of Pc using the second makePoint method, notice that Pc is passed as ref 
	point Pc;
	makePoint(60, 60, Pc);
	

	// assign x and y values of Pd using the third makePoint method, notice that Pd is passed as pointer
	
	point Pd; 
	makePoint(70, 70, &Pd);
	
	// assign P3 x and y values using the input method
	point P3;
	cout << " Input point P3: ";
	input(P3);
	cout << "P3 = ";
	print(cout, P3); cout << endl;

	// create a double data type variable and assign the value returned from the distance method to it using P1 and P2

	double dist = Distance(P1, P2);
	cout << "P1 = "; print(cout, P1); cout << endl;
	cout << "P2 = "; print(cout, P2); cout << endl;

	cout << "Distance between P1 and P2 = " << dist << endl;

	delete Pb;
	system("pause");
	
}


void    setX(point & p, double xV) {
	p.x =  xV;
}

void    setY(point & p, double yV) {
	p.y = yV;
}

double  getX(const point & p) {
	return p.x;
}

double  getY(const point & p) {
	return p.y;
}

void    print(ostream & w, const point & p) {
	w << "\n" << p.x;
	w << "\n" << p.y;

}

point   makePoint(double xV, double yV) {
	point p;
	p.x = xV;
	p.y = yV;
	return p;

}

point * makePointPtr(double xV, double yV) {
	point *ptr = new point;
	ptr->x = xV;
	ptr->y = yV;
	return ptr;
	

}

void    makePoint(double xV, double yV, point & result) {
	result.x = xV;
	result.y = yV;

}

void    makePoint(double xV, double yV, point * ptrAns) {

	ptrAns->x = xV;
	ptrAns->y = yV;
}

void    input(point & p) {
	cout << "Enter x and y values: ";
	cin >> p.x >> p.y;
}

double  Distance(const point & p1, const point & p2) {
	double dis;
	dis = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
	return dis;
}

/*


20 20

30 30

20
20
30
30 Input point P3: Enter x and y values: 6 7
P3 =
6
7
P1 =
20
20
P2 =
30
30
Distance between P1 and P2 = 14.1421
Press any key to continue . . .

*/