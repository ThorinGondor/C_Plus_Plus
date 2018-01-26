#include "stdafx.h"
#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

BankAccount::BankAccount(const string na, long id, double sur)
{
	name = na;
	ID = id;
	surplus = sur;
}

BankAccount::~BankAccount()
{
	cout << "System End! \n" << endl;
}

void BankAccount::Deposit(double money)
{
	surplus = surplus + money;
}
void BankAccount::Withdraw(double money)
{
	if (money > surplus)
	{
		cout << "Exceed your surplus! \n";
	}
	else
		surplus = surplus - money;
	
}
void BankAccount::showInfo()
{
	cout << "This is a Bank Account: \n";
	cout << "Name: "<<name << endl;
	cout << "ID: "<<ID << endl;
	cout << "Surplus: "<<surplus << endl;
}

double BankAccount::getSur()
{
	return surplus;
}

AccountPlus::AccountPlus(double ol, double olr, double os, const string na, long id, double sur) :BankAccount(na, id, sur)
{
	over_Limit = ol;
	over_LoanRate = olr;
	over_sum = os;
}

AccountPlus::AccountPlus(double ol, double olr, double os, const BankAccount &BA) :BankAccount(BA)
{
	over_Limit = ol;
	over_LoanRate = olr;
	over_sum = os;
}

void AccountPlus::Withdraw(double money)
{
	if (money < getSur())
	{
		BankAccount::Withdraw(money);
	}
	else
		if (money < getSur() + over_Limit - over_sum)
		{
			double advance = money - getSur();
			over_sum = over_sum + advance*(1.0 + over_LoanRate);
			Deposit(advance);
			BankAccount::Withdraw(money);
		}
}
void AccountPlus::showInfo()
{
	cout << "This is an Account Plus: \n";
	cout << over_Limit << endl;
	cout << over_LoanRate << endl;
	cout << over_sum << endl;
}