//Pierre Edward Mendy
//Lab 11 - cs 235
//04-13-2018

#include "CDAccount.h"
#include <iostream>
#include <string>
using namespace std;


CDAccount::CDAccount(string name, double balance, double rate)
{
	BankAccount::acctName = name;
	BankAccount::acctBalance = balance;
	this->interestRate = rate;
}

int CDAccount::withdraw(double amount)
{
	this->acctBalance -= amount;

	if (this->acctBalance >= 0)
		return 0;
	else
		return -1;
}

void transfer(double amount, BankAccount& fromAcct, BankAccount& toAcct)
{
	fromAcct.withdraw(amount);
	toAcct.deposit(amount);
}
