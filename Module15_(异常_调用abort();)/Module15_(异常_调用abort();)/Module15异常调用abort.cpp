// Module15异常调用abort.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "stdlib.h"  //abort()函数的原型位于头文件“stdlib.h”（或cstdlib）中
using namespace std;

inline double hmean(int a, int b)
{
	if (a == -b)
	{
		cout << "Invalid Number!\n";
		abort();
	}
	else
		return 2.0*a*b / (a + b);
}

int main(int argc, char* argv[])
{
	double x, y, z;
	while (cin>>x>>y)
	{
		z = hmean(x, y);
		cout << z << endl;
	}
	cout << "System End! \n" << endl;
	system("pause");
    return 0;
}


