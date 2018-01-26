// Module15异常机制trycatch.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

inline double hmean(int a, int b)
{
	if (a == -b)
		throw "Invalid Numbers!";
	return 2.0*a*b / (a + b);
}

int main(int argc,char* argv[])
{
	double x, y, z;
	while (cin>>x>>y)
	{
		try
		{
			z = hmean(x, y);
		}
		catch (const char* s)
		{
			cout << s << endl;
			cout << "Please Enter Next 2 Numbers: ";
			continue;
		}
		cout << "z:" << z << endl;
		cout << "Please Enter Next 2 Numbers: ";
	}
	system("pause");
    return 0;
}

