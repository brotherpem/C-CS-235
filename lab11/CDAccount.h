//Pierre Edward Mendy
//Lab 11 - cs 235
//04-13-2018

#ifndef CDACCOUNT_H
#define CDACCOUNT_H
#include "BankAccount.h"
#include "MoneyMarketAccount.h"
#include <iostream>
#include <string>

using namespace std;

// Allocate Memory and Initialize CDAccount static field
const double PENALTY = 0.25; //25% of interest

void transfer(double amount, BankAccount& fromAcct, BankAccount& toAcct);

//  CDAccount Declaration

class CDAccount : public BankAccount
{
public:
	CDAccount(string name, double balance, double rate);
	// Sets up a CDAccount object with the name and balance and interestRate
	// equal to rate/100 (rate converted to decimal form)

	virtual int withdraw(double amount);
	// amount is a nonnegative number
	// If amount + the penalty (PENALTY*interestRate*acctBalance)
	// is less than or equal to the account balance, the amount and the
	// penalty are subtracted from the balance.
	// Returns OK (0) if there were sufficient funds for the withdrawal and
	// returns INSUFFICENT_FUNDS (-1) otherwise.

private:
	double interestRate;
	static const double PENALTY;     //Will use 25% of interest
};
#endif





