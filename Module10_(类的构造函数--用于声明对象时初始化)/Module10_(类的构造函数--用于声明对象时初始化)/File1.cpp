//文件1，针对头文件声明的函数原型和构造函数、析构函数进行定义
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Stock00.h"

Stock::Stock(const string & comp, double num, double price)
{
	company = comp;
	shares = num;
	share_value = price;
}

Stock::~Stock()
{
	using namespace std;
	cout << "See You~" << endl;
}

void Stock::buy(const double num, double price)
{
	shares = shares + num;
	share_value = price;
	getSum();
}

void Stock::show()
{
	cout << company << endl;
	cout << shares << endl;
	cout << share_value << endl;
	cout << total << endl;
}

void Stock::sell(const double num, double price)
{
	shares = shares - num;
	share_value = price;
	getSum();
}

Stock Stock::topvalue(Stock &St)  //返回类型是Stock的对象
{
	if (St.total > total)
		return St;  //返回副本对象
	else
		return *this;  //函数本身存的对象而非副本对象
}