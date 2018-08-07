//Pierre Edward Mendy
//lab 4 - cs235

#include <iostream>
#include <string>


using namespace::std;

int main()
{
	//declare variables
	string line;
	int count = 0;
	// create a array  and store numbers of the characters
	int letters[26];
	// ask the user to write a sentence
	cout << "Enter a sentence:  " << endl;
	// get the text by the getline function
	getline(cin, line);

	// initialize the array
	for (int i = 0; i < 26; i++)
	{
		letters[i] = 0;

	}
	// initialize a loop for the total word count
	for (int i = 0; i < line.length(); i++)
	{
		if (line[i] == ' ' || line[i] == '.' || line[i] == ',')
		{
			count++;
		}
		letters[tolower(line[i]) - 97]++;
	}

	//output the number of words
	cout << "\n" << count << "words" << endl;

	// use a for loop to output total count for occurrence of the letters
	
	for (int i = 0; i < 26; i++)
	{
		if (letters[i] > 0) {
			cout << letters[i] << " " << static_cast<char>(i + 97) << endl;
		}
	}
	system("pause");
	return 0;
	
}

/*

Enter a sentence:
I am An information Sytem Technology Student.

7words
3 a
1 c
1 d
3 e
1 f
1 g
1 h
3 i
1 l
3 m
5 n
4 o
1 r
2 s
5 t
1 u
2 y
Press any key to continue . . .*/
