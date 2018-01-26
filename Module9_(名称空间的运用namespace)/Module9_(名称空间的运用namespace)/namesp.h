//头文件namesp.h
//该文件声明了一些名称空间，常量，结构定义和函数原型

#include <iostream>
#include <string>
//声明两个命名空间
namespace Pers
{
	//定义一个结构
	struct Person
	{
		std::string fname;
		std::string lname;
	};
	//声明两个函数原型
	void getPerson(Person &p);
	void showPerson(const Person &p);
}

namespace Debt
{
	//导入Pers空间的Person结构
	using Pers::Person;

	//定义一个结构
	struct debts
	{
		Person ps;
		double amount;
	};
	//声明三个函数原型
	void getDebt(debts &dt);
	void showDebt(const debts &dt);
	double sumDebt(const debts arr[], int n);
}