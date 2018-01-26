#include "stdafx.h"
#include<iostream>
#include "BaseEllipse.h"
using namespace std;

AccountABC::AccountABC(const string &na, long id, double bal)
{
	name = na;
	ID = id;
	balance = bal;
}

AccountABC::~AccountABC()
{
	cout << "system end ! \n";
}

string AccountABC::getName()
{
	return name;
}

long AccountABC::getID()
{
	return ID;
}

void AccountABC::Deposit(double money)
{
	balance = balance + money;
}

void AccountABC::Withdraw(double money)
{
	balance = balance - money;
}

double AccountABC::getBalance()
{
	return balance;
}
void AccountABC::ViewAccount()
{

}
/*************************************/
Brass::Brass(const string &na, long id, double bal) :AccountABC(na, id, bal)
{
}

Brass::~Brass()
{
}
void Brass::Withdraw(double money)
{
	if (money <= getBalance())
		AccountABC::Withdraw(money);
	else
		cout << "Exceed Your Balance!" << endl;
}

void Brass::ViewAccount()
{
	cout << "Brass Client: " << getName() << endl;
	cout << "Account ID: " << getID() << endl;
	cout << "Balance: $" << getBalance() << endl;
}
/**************************************/
BrassPlus::BrassPlus(const string &na, long id, double bal, double ml, double r) :AccountABC(na, id, bal)
{
	maxLoan = ml;
	rate = r;
	owesBank = 0;
}

/*BrassPlus::BrassPlus(const Brass &Ba, double ml, double r) :AccountABC(Ba)
{
	maxLoan = ml;
	rate = r;
	owesBank = 0;
}*/

void BrassPlus::Withdraw(double money)
{
	if (money < getBalance())
		AccountABC::Withdraw(money);
	else if (money <= getBalance() + maxLoan - owesBank)
	{
		double advance = money - getBalance();
		owesBank = advance*(1.0 + rate) + owesBank;
		cout << "Bank advance: $" << advance << endl;
		cout << "Finance Charge: $" << advance*rate << endl;
		Deposit(advance);
		AccountABC::Withdraw(money);
	}
	else
		cout << "Credit Limitation Exceed! " << endl;
}

void BrassPlus::ViewAccount()
{
	cout << "Brass Client: " << getName() << endl;
	cout << "Account ID: " << getID() << endl;
	cout << "Balance: $" << getBalance() << endl;
	cout << "Max Loan: $" << maxLoan << endl;
	cout << "Owed to Bank: $" << owesBank << endl;
	cout << "Loan Rate: " << rate * 100 << endl;
}