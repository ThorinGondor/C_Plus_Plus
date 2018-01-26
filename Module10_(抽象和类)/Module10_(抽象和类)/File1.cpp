// Module10抽象和类.cpp: 定义控制台应用程序的入口点。
//对声明的函数进行定义

#include "stdafx.h"
#include <iostream>
#include "stock00.h"
using namespace std;


void Stock::acquire(const string &comp, long num, double price)
{
	company = comp;
	if (num < 0)
	{
		cout << "invalid numbers; " << company << "shares reset to 0;" << endl;
		shares = 0;
	}
	else
	{
		shares = num;
		share_val = price;
	}
	getSum();
}

void Stock::buy(long num, double price)
{
	if(num<0)
	{
		cout << "invalid number; " << endl;
	}
	else
	{
		shares = shares + num;
		share_val = price;
	}
	getSum();
}

void Stock::sell(long num,double price)
{
	if (num < 0)
	{
		cout << "invalid number; " << endl;
	}
	else
	{
		shares = shares - num;
		share_val = price;
		getSum();
	}
}

void Stock::update(double price)
{

}

void Stock::show()
{
	cout << company << endl;
	cout << "The shares :"<<shares << endl;
	cout << "The share_val: "<<share_val << endl;
	cout << "The total_val: "<<total_val << endl;
}
