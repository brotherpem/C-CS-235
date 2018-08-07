//Pierre Edward Mendy
//CS235 - lab 7
#include<iostream>
using namespace std;

//this is the array class
class Array{
	//memebrs of class
private:
	int size;
	int *a;

public:
	//variables
	int i, n, sum = 0;

	//default constructor
	Array(){
		//ask the size of the array
		cout << "Enter the size of the array: ";
		cin >> size;
		//dynamic memory allocation of the array
		a = new int[size];

		//assiging values to array
		for (i = 0; i< size; i++){
			*(a + i) = i;
			}

	}
	//method1 to add array

	void add_array(){
		for (i = 0; i<size; i++)
		{
			sum = sum + *(a + i);

		}
		cout << sum << endl;
	}

	//method 2 to print the array elemnts

	void print_array()
	{
		for (i = 0; i<size; i++)
			cout << *(a + i) << " ";
	}
};

//main function

int main(){
	//creating an class object
		Array Jccc;
	//print arrays
	cout << "Array elements are: " << endl;
	Jccc.print_array();

	//print sum

	cout << endl << "The Total sum of the array element is: " << endl;
	Jccc.add_array();
	cout << endl;

	system("pause");
	return 0;

}

/*
Enter the size of the array: 4
Array elements are:
0 1 2 3
The Total sum of the array element is:
6

Press any key to continue . . .
*/