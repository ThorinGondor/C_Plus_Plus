// Module14类模板用作参数练习.cpp: 定义控制台应用程序的入口点。
//
/*****
   本代码示例：设置一个class类，该类将之前所写的Stack模板作为它的参数，引用其功能，则该类可以调用Stack的方法，实现进栈和出栈。
   如果只是要调用该方法，那么该类并不需要再去自己创建一些新的成员，只需要创建该Stack的对象即可，即：Thing<int> S1、S2、S3。
****/
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

template <template <typename T> class Thing>
class DataBase
{
public:
	DataBase() {};
	bool Push(int n, double x, string str)
	{
		return S1.Push(n) && S2.Push(x) && S3.Push(str);
	}
	bool Pop(int &n, double &x, string &str)
	{
		return S1.Pop(n) && S2.Pop(x) && S3.Pop(str);
	}
private:
	Thing<int> S1;  //相当于建立Stack对象，即栈的对象，这样可以在public里使用栈提供的方法
	Thing<double> S2;
	Thing<string> S3;
};

int main(int argc,char* argv[])
{
	DataBase<Stack> DB;
	int num;
	double xl;
	string line;
	while (cin>>num>>xl>>line&&num>0&&xl>0)
	{
		if (!DB.Push(num, xl, line))
			break;
	}
	while (DB.Pop(num,xl,line))
	{
		cout << num << ";" << xl << ";" << line << endl;
	}
	system("pause");
    return 0;
}

