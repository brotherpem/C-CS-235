//Pierre Edward Mendy
//Lab 11 - cs 235
//04-13-2018


#include "BankAccount.h"
#include <iostream>
#include <string>

using namespace std;

//  BankAccount Definitions


BankAccount::BankAccount(string name, double balance)
{
	acctName = name;
	acctBalance = balance;
}

BankAccount::BankAccount()
{
	acctName = "Not Given";
	acctBalance = 0.0;
}


string BankAccount::getName() const
{
	return acctName;
}


double BankAccount::getBalance() const
{
	return acctBalance;
}


void BankAccount::deposit(double amount)
{
	if (amount < 0)
	{
		cout << "Attempt to deposit negative amount - program terminated."
			<< endl;
		exit(1);
	}

	acctBalance += amount;
}


int BankAccount::withdraw(double amount)
{
	int status = OK;

	if (amount < 0)
	{
		cout << "Attempt to withdraw negative amount - program terminated."
			<< endl;
		exit(1);
	}

	if (amount <= acctBalance)
		acctBalance -= amount;
	else
	{
		cout << "Amount exceeds balance - withdrawal denied." << endl;
		status = INSUFFICIENT_FUNDS;
	}
	return status;
}