//Pierre Edward Mendy
//lab 4 - cs235

#include <iostream>
#include <string>


using namespace std;

int main()
{
	string line;
	int count = 0;

	int letters[26];
	cout << "Enter a sentence:  " << endl;
	getline(cin, line);

	for (int i = 0; i < 26; i++)
	{
		letters[i] = 0;

	}

	for (int i = 0; i < line.length(); i++)
	{
		if (line[i] == ' '|| line[i] == '.'|| line[i] == ',')
		{
			count++;
		}
		letters[tolower(line[i]) - 97]++;
	}

	cout << "\n" << count << "words" << endl;

	for (int i = 0; i < 26; i++)
	{
		if (letters[i] > 0) {
			cout << letters[i] << "" << static_cast<char>(i + 97) << endl;
		} 
	}
	return 0;
	system("pause");
}