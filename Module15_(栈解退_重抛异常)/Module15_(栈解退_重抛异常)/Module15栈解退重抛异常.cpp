// Module15栈解退重抛异常.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include "Exception_Mean.h"
using namespace std;

class Demo
{
public:
	Demo(const string str);
	~Demo();
	void show()
	{
		cout << "Demo " << word << " Lives!\n";
	}
private:
	string word;
};

Demo::Demo(const string str)
{
	word = str;
	cout << "Demo " << word << " Created!\n";
}

Demo::~Demo()
{
	cout << "Demo " << word << " Destroyed!\n";
}

inline double hmean(int a, int b)
{
	if (a == -b)
		throw Bad_hmean(a, b);
	else
		return 2.0*a*b / (a + b);
}

inline double gmean(int a, int b)
{
	if (a < 0 || b < 0)
		throw Bad_gmean(a, b);
	else
		return sqrt(a*b);
}

inline double means(int a, int b)
{
	Demo *D1 = new Demo("Found in means!");
	double am = (a + b) / 2.0;
	double hm;
	double gm;
	try
	{
		hm = hmean(a, b);
		gm = gmean(a, b);
	}
	catch (Bad_hmean &Bh)
	{
		Bh.message();
		cout << "Exception caught in means();\n";
		throw;   //此处为重抛，它将被main函数里的catch块捕捉并处理
	}
	catch (Bad_gmean &Bg)
	{
		Bg.message();
		cout << "Exception caught in means();\n";
		throw;
	}
	cout << "am is " << am << endl;
	cout << "hm is " << hm << endl;
	cout << "gm is " << gm << endl;
	D1->show();
	return (am + hm + gm) / 3.0;
}

int main()
{
	Demo *D0 = new Demo("Found in Block in main!");
	double x, y, z;
	{
		while (cin>>x>>y)
	    {
		    try
		    {
			    z = means(x, y);
			    cout << "z is: " << z << endl;
		    }
		    catch (Bad_hmean &Bh)
		    {
			    Bh.message();
			    cout << "Try Again! \n";
			    continue;
		    }
		    catch (Bad_gmean &Bh)
		    {
			    cout<< Bh.message() << endl;
			    cout << "The System is End!\n";
			    break;
		    }
	    }
	    D0->show();
	}
	
	system("pause");
    return 0;
}

