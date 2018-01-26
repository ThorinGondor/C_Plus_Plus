// Module15返回错误码.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>  //use abort();
#include <cfloat>  //use DBL_MAX
using namespace std;

inline bool hmean(double a, double b, double *ans)
{
	if (a == -b)
	{
		cout << "Invalid Numbers! \n";
		*ans = DBL_MAX;
		return false;
	}
	else
	{
		*ans = 2.0*a*b / (a + b);
		return true;
	}
}

int main(int argc,char* argv[])
{
	double x, y, z;
	while (cin>>x>>y)
	{
		if (hmean(x,y,&z))
		{
			cout << x << ";" << y << ";" << z << endl;
		}
		else
		{
			cout << "please enter next 2 numbers: ";
		}
	}
	system("pause");
    return 0;
}

