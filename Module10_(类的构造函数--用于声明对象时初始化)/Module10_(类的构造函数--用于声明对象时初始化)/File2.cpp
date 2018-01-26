// Module10类的构造函数用于声明对象时初始化.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Stock00.h"

int main(int argc,char* argv[])
{
	/***（1）****/
	Stock St0 = Stock("Rose Enterprise",450,12.4);
	St0.buy(50,11.2);
	St0.show();
	St0.sell(100, 14.5);
	St0.show();

	/****（2）***/
	Stock St[3] =
	{
		Stock("AMD",230,17.8), 
		Stock("Nvidia",340,18.9), 
		Stock("Haier",100,15.9)
	};

	for (int i = 0; i < 3; i++)
	{
		St[i].getSum();
		St[i].show();
	}

	Stock *p = St;
	for (int i = 0; i < 3; i++)
	{
		p =&p->topvalue(St[i]);
	}
	p->show();

	system("pause");
    return 0;
}

