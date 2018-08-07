//Pierre Edward Mendy
//Lab 11 - cs 235
//04-13-2018

#ifndef MONEYMARKETACCOUNT_H
#define MONEYMARKETACCOUNT_H
#include <iostream>
#include <string>
#include "BankAccount.h"

using namespace std;

const int FREE_WITHDRAWALS = 2;
const double WITHDRAWAL_FEE = 1.50;

//  MoneyMarketClass Declaration

class MoneyMarketAccount : public BankAccount
{
public:
	MoneyMarketAccount(string name, double balance);
	// Sets up a MoneyMarketAccount with the given name and balance

	virtual int withdraw(double amount);
	

	int getNumWithdrawals() const;
	// Returns the number of withdrawals

private:
	int numWithdrawals;
	static const int FREE_WITHDRAWALS ;
	static const double WITHDRAWAL_FEE ;
};
#endif




