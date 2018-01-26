// Module7函数重载.cpp: 定义控制台应用程序的入口点。
//函数允许名称相同，但是特征标应不同，参数的类型、数目的不同可以使特征标不同，以便区分*/
/****
  以下几种可以使重载函数的特征标不同：
  （1）参数是否有const修饰
  （2）参数类型不同，例如string类和int类
  （3）参数数目不同
***/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

inline char* PrintPart(char * str,int n)
{
	char *pc = new char[n+1];
	int i;
	for (i = 0; i < n; i++)
	{
		pc[i] = str[i];
	}

	for (int k = i; k <= n; k++)
	{
		pc[k] = '\0';
	}
	return pc;
}

inline long PrintPart(long num,int n)
{

}

int main(int argc, char* argv[])
{
	
	char * str = "Hawwaii!!!";
	long num = 123456789;
	
	for (int i = 1; i < 10; i++)
	{
		char * buff = PrintPart(str, i);
		cout << buff  << endl;
		cout << PrintPart(num, i) << endl;
		delete[] buff;
	}
	system("pause");
    return 0;
}


