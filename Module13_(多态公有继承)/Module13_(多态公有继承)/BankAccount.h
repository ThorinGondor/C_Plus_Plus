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
	virtual void Withdraw(double money);   //�鷽�����ؼ���Ϊvirtual����Ϊ������ͻ������������ͬ�ķ�������ô�鷽��������ָ���������ȷ�����׸õ����Ǹ���ķ���
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
	double over_Limit;  //͸֧����
	double over_LoanRate; //͸֧��������
	double over_sum;  //͸֧�ܶ�
};
