// Module14多重继承.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Staff.h"
using namespace std;


int main()
{
	
	Waiter *w0 = new Waiter;
	w0->set();
	w0->show();

	Singer *w1 = new Singer;
	w1->set();
	w1->show();
	
	SingerWaiter *sw = new SingerWaiter;
	sw->set();
	sw->show();

	system("pause");
    return 0;
}

