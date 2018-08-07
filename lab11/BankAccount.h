//Pierre Edward Mendy
//Lab 11 - cs 235
//04-13-2018

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>
#include <string>

using namespace std;

//
// Constants to indicate status after withdrawal attempt
//
const int OK = 0;
const int INSUFFICIENT_FUNDS = -1;


//  BankAccount Class Declaration

class BankAccount
{
public:
	BankAccount(string name, double balance);
	// Sets up a BankAccount object with the given name and balance

	BankAccount();      // Default Constructor Added to the exercise

	string getName() const;
	// Returns the name on the BankAccount

	double getBalance() const;
	// Returns the balance on the BankAccount

	void deposit(double amount);
	//  amount is a non-negative number
	//  amount has been added to the account balance

	virtual int withdraw(double amount);
	// amount has been subtracted from the balance if
	// there were sufficient funds (balance >= amount)
	// Returns 0 (OK) if the withdrawal was completed;
	//-1 (INSUFFICIENT_FUNDS) if there were insufficient funds.

protected:
	string acctName;
	double acctBalance;
};
#endif

