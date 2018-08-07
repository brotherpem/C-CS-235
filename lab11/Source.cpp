//Pierre Edward Mendy
//Lab 11 - cs 235
//04-13-2018

#include "BankAccount.h"
#include "CDAccount.h"
#include "MoneyMarketAccount.h"
#include <iostream>
#include <string>

using namespace std;

//   main function

int main()
{
	string name;
	double balance;
	double interestRate;
	double amount;
	int choice;
	char moreTransfers;

	cout << endl;
	cout << "Transferring Money..." << endl;
	cout << "First create the balance of three accounts - a basic account, a " << endl;
	cout << "Money Market account, and a Deposit account."
		<< endl;
	cout << endl;
	cout << "Enter the name of owner of the accounts: ";
	cin >> name;
	cout << "Enter the opening balance in the basic account: ";
	cin >> balance;
	BankAccount basicAcct(name, balance);
	cout << "Enter the opening balance in the Money Market Account: ";
	cin >> balance;
	MoneyMarketAccount moneyMarket(name, balance);
	cout << "Enter the opening balance for the CDAccount: ";
	cin >> balance;
	cout << "Enter the interest rate for the CDAccount (for example, 1 for 1%): ";
	cin >> interestRate;
	CDAccount CD(name, balance, interestRate);
	cout << endl;

	do
	{
		cout << "Choose a direction to transfer funds: " << endl;
		cout << "1. From the basic account to the Money Market Account" << endl;
		cout << "2. From the basic account to the CDAccount" << endl;
		cout << "3. From the Money Market Account to the basic account" << endl;
		cout << "4. From the Money Market Account to the CDAccount" << endl;
		cout << "5. From the CDAccount to the basic account" << endl;
		cout << "6. From the CDAcount to the Money Market Account" << endl;
		cout << "Enter the number of your choice: ";
		cin >> choice;
		cout << endl;

		cout << "Enter the amount to transfer: ";
		cin >> amount;
		cout << endl;

		switch (choice)
		{
		case 1:
			transfer(amount, basicAcct, moneyMarket);
			break;
		case 2:
			transfer(amount, basicAcct, CD);
			break;
		case 3:
			transfer(amount, moneyMarket, basicAcct);
			break;
		case 4:
			transfer(amount, moneyMarket, CD);
			break;
		case 5:
			transfer(amount, CD, basicAcct);
			break;
		case 6:
			transfer(amount, CD, moneyMarket);
			break;
		default:
			cout << "Invalid choice." << endl;
		}

		cout << endl;
		cout << "Current Balances: " << endl;
		cout << "Basic Account: " << basicAcct.getBalance() << endl;
		cout << "Money Market Account: " << moneyMarket.getBalance() << endl;
		cout << "CD Account: " << CD.getBalance() << endl;

		cout << "Transfer more money? (y/n): ";
		cin >> moreTransfers;
		cout << endl;
	} while (moreTransfers == 'y' || moreTransfers == 'Y');

	system("pause");

	return 0;

}

/*

Transferring Money...
First create the balance of three accounts - a basic account, a
Money Market account, and a Deposit account.

Enter the name of owner of the accounts: Pierre
Enter the opening balance in the basic account: 500
Enter the opening balance in the Money Market Account: 300
Enter the opening balance for the CDAccount: 200
Enter the interest rate for the CDAccount (for example, 1 for 1%): 4

Choose a direction to transfer funds:
1. From the basic account to the Money Market Account
2. From the basic account to the CDAccount
3. From the Money Market Account to the basic account
4. From the Money Market Account to the CDAccount
5. From the CDAccount to the basic account
6. From the CDAcount to the Money Market Account
Enter the number of your choice: 1

Enter the amount to transfer: 300


Current Balances:
Basic Account: 200
Money Market Account: 600
CD Account: 200
Transfer more money? (y/n): y

Choose a direction to transfer funds:
1. From the basic account to the Money Market Account
2. From the basic account to the CDAccount
3. From the Money Market Account to the basic account
4. From the Money Market Account to the CDAccount
5. From the CDAccount to the basic account
6. From the CDAcount to the Money Market Account
Enter the number of your choice: 2

Enter the amount to transfer: 200


Current Balances:
Basic Account: 0
Money Market Account: 600
CD Account: 400
Transfer more money? (y/n): y

Choose a direction to transfer funds:
1. From the basic account to the Money Market Account
2. From the basic account to the CDAccount
3. From the Money Market Account to the basic account
4. From the Money Market Account to the CDAccount
5. From the CDAccount to the basic account
6. From the CDAcount to the Money Market Account
Enter the number of your choice: 5

Enter the amount to transfer: 100


Current Balances:
Basic Account: 100
Money Market Account: 600
CD Account: 300
Transfer more money? (y/n): y

Choose a direction to transfer funds:
1. From the basic account to the Money Market Account
2. From the basic account to the CDAccount
3. From the Money Market Account to the basic account
4. From the Money Market Account to the CDAccount
5. From the CDAccount to the basic account
6. From the CDAcount to the Money Market Account
Enter the number of your choice: 6

Enter the amount to transfer: 200


Current Balances:
Basic Account: 100
Money Market Account: 800
CD Account: 100
Transfer more money? (y/n): n

Press any key to continue . . .
*/
