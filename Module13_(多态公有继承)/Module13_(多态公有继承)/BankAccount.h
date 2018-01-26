#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:
	BankAccount(const string na,long id,double sur);
	virtual ~BankAccount();
	double getSur();
	void Deposit(double money);  
	virtual void Withdraw(double money);   //虚方法，关键字为virtual，因为派生类和基类均有名称相同的方法，那么虚方法将根据指针或引用来确定到底该调用那个类的方法
	virtual void showInfo();
private:
	string name;
	long ID;
	double surplus;
};

class AccountPlus:public BankAccount
{
public:
	AccountPlus(double ol,double olr,double os,const string na, long id, double sur);
	AccountPlus(double ol, double olr, double os, const BankAccount &BA);
	virtual void Withdraw(double money);
	virtual void showInfo();
private:
	double over_Limit;  //透支上限
	double over_LoanRate; //透支贷款利率
	double over_sum;  //透支总额
};
