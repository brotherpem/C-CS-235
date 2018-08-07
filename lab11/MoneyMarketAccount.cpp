//Pierre Edward Mendy
//Lab 11 - cs 235
//04-13-2018

#include "MoneyMarketAccount.h"
#include <iostream>
#include <string>

using namespace std;

MoneyMarketAccount::MoneyMarketAccount(string name, double balance)
{
	this->acctName = name;
	this->acctBalance = balance;
}

int MoneyMarketAccount::getNumWithdrawals() const
{
	return this->numWithdrawals;
}

int MoneyMarketAccount::withdraw(double amount)
{
	this->numWithdrawals++;

	this->acctBalance -= amount;

	if (this->acctBalance >= 0)
		return 0;
	else
		return -1;
}