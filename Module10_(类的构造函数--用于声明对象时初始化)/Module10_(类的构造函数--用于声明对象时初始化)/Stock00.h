//本项目知识点：
//构造函数：在创建对象时自动调用，初始化对象。
//析构函数：程序结束时自动调用，一般不在代码中显式地调用。

//头文件，声明类，声明构造函数和析构函数，声明一系列函数原型
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class Stock
{
public:
	Stock(const string &comp,double num, double price);  //这是构造函数，程序初始化时自动调用
	~Stock();                                                                //这是析构函数，程序结束时自动调用
	void sell(const double num, double price);
	void buy(const double num, double price);
	void show();
	void getSum()
	{
		total = shares*share_value;
	}
	Stock topvalue(Stock &St);
private:
	string company;  //对应comp
	double shares;  //对应num
	double share_value;  //对应price
	double total;
	

};


