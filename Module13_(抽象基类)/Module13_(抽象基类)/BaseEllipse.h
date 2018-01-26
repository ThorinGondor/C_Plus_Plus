#include "stdafx.h"
#include<iostream>
#include <string>
using namespace std;

class AccountABC   //���Ի��࣬����Brass��BrassPlus���е����еĳ�Ա�ͷ���
{
public:
	AccountABC(const string &na,long id,double bal);
	void Deposit(double money);
	virtual void Withdraw(double money);
	double getBalance();
	virtual void ViewAccount();
	virtual ~AccountABC();
private:
	string name;
	long ID;
	double balance;
protected:
	string getName();
	long getID();
};
/******************************������Brass*********************************************/
class Brass :public AccountABC
{
public:
	Brass(const string &na, long id, double bal);
	virtual void Withdraw(double money);
	virtual void ViewAccount();
	virtual ~Brass();
};

/***********************************������BrassPlus******************************************/
class BrassPlus:public AccountABC
{
public:
	BrassPlus(const string &na, long id, double bal,double ml, double r);
	//BrassPlus(const Brass &Ba,double ml, double r);
	virtual void Withdraw(double money);
	virtual void ViewAccount();
	void ResetMax(double ml) { maxLoan = ml; }
	void ResetRate(double r) { rate = r; }
	void ResetOwes() { owesBank = 0; }
private:
	double maxLoan;
	double rate;
	double owesBank;
};

