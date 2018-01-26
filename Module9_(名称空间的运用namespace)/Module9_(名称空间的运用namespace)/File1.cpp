// Module9名称空间的运用namespace.cpp: 定义控制台应用程序的入口点。
//File1文件主要针对头文件声明的函数进行对应的定义

#include "stdafx.h"
#include <iostream>
#include "namesp.h"

//建立头文件定义的Pers空间和Debt空间，并定义空间里的函数
namespace Pers
{
	void getPerson(Person &p)
	{
	}
	void showPerson(const Person &p)
	{
		std::cout << p.fname << std::endl;
		std::cout << p.lname << std::endl;
	}
}
namespace Debt
{
	void getDebt(debts &dt)
   {
		using namespace std;
		cout << "Please Enter First Name: \n";
		cin >> dt.ps.fname;
		cout << "Please Enter Last Name: \n";
		cin>> dt.ps.lname;
		cout << "Please Enter Amount: \n";
		cin >> dt.amount;
	}

    void showDebt(const debts &dt)
    {
		using namespace std;
		cout << dt.ps.fname<< endl;
		cout << dt.ps.lname << endl;
		cout << dt.amount << endl;
	}

    double sumDebt(const debts *p,int n)
	{
		using namespace std;
		double sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum = sum + p[i].amount;
		}
		return sum;
	}
}

