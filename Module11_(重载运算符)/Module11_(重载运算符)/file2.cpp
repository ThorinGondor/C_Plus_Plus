// Module11重载运算符.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include "Time.h"
using namespace std;

int main(int argc,char * argv[])
{
	Time T0 = Time(4, 35);
	Time T1 = Time(2, 47);
	T0.show();
	T1.show();

	Time Total = Time(0,0);
	Total = T0 + T1;   //调用重载运算符，加法
	Total.show();

	Time Diff = Time(0, 0);
	Diff = T0 - T1;   //调用重载运算符，减法
	Diff.show();
	
	Time adjust = Time(0, 0);
	adjust = 2 * Total;   //调用重载运算符，乘法，注意此处应用了友元，使得数字“2”可以写在前面。
	adjust.show();

	system("pause");
    return 0;
}

