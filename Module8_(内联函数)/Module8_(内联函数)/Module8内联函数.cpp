// Module8内联函数.cpp: 定义控制台应用程序的入口点。
//内联函数替代了常规的函数调用，通过这种方式可以提升运行速度，但是消耗更多内存，内联函数不能递归
/***
      要使用内联函数，必须采取下述措施之一：
	  （1）在函数声明前加上关键字inline
	  （2）在函数定义前加上关键字inline
      通常选择第二种方法，这样可以省去声明原型。
***/

#include "stdafx.h"
#include <iostream>
using namespace std;

inline double square(int x)
{
	return x*x;
}

int main(int argc,char* argv[])
{
	cout << square(19) << endl;
	system("pause");
    return 0;
}

