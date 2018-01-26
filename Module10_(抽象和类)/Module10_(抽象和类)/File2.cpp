//使用类

#include "stdafx.h"
#include <iostream>
#include "stock00.h"
using namespace std;

int main(int argc, char * argv[])
{
	//class类建立对象
	Stock St1;
	//调用对象的方法
	St1.acquire("NanoSmart", 100, 12.3);
	St1.show();
	St1.buy(200,13.5);
	St1.show();
	St1.sell(30, 16.7);
	St1.show();

	Stock St2;
	St2.acquire("AppleSeed", 300, 14.5);
	St2.show();
	St2.buy(50, 15.7);
	St2.show();
	St2.sell(250, 19.8);
	St2.show();
	system("pause");
	return 0;
}