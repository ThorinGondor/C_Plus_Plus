// Module15将对象用作异常类型.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include "Exception_Mean.h"
using namespace std;

inline double hmean(double a, double b)
{
	if (a == -b)
		throw Bad_hmean(a, b); //将对象作为异常抛出! 即：Bad_hmean &Bh = Bad_hmean(a,b);
	else
		return 2.0*a*b / (a + b);
}

inline double gmean(int a,int b)
{
	if (a < 0 || b < 0)
		throw new Bad_gmean(a, b);  //将对象作为异常抛出! 即：Bad_gmean *Bg = new Bad_gmean(a,b);
	else
		return sqrt(a*b);
}

int main(int argc, char* argv[])
{
	double x, y, z;
	while (cin>>x>>y)
	{
		try
		{
			//可能产生异常的程序块
			z = hmean(x, y);
			cout << "hmean z is: " << z << endl;
			cout << "gmean return is: " << gmean(x,y) << endl;
		}
		catch (Bad_hmean &Bh)  //抛出的异常是对象！ 即：Bad_hmean &Bh = Bad_hmean(a,b);
		{
			Bh.message();
			cout << "Try Again! \n";
			continue;
		}
		catch(Bad_gmean *Bg) //抛出的异常是对象！ 即：Bad_gmean *Bg = new Bad_gmean(a,b);
		{
			Bg->message();
			cout << "System must be shut down! \n";
			break;
		}
	}
	cout << "Bye!\n";
	system("pause");
    return 0;
}

