// Module7函数模板.cpp: 定义控制台应用程序的入口点。
/*****
     函数模板：
	 (1)声明方法：
	 template <typename AnyType>
	 void swap(AnyType &a, AnyType &b);
	 (2)调用方法：
	 int / double/ char* i;
	 int /double/ char* j;
	 std::swap( i , j );

	 函数模板实现了参数类型通用化，int类函数、double类、char类函数等均可以传入该函数实现功能。
*****/

#include "stdafx.h"
#include <iostream>
using namespace std;
template <typename T>
void swap(T &i, T &j);

template <typename T>  //该行代码指出：要建立一个模板，并将类型命名为T
void swap(T &i, T &j) 
{
	T temp = j;
	j = i;
	i = temp;
}
int main(int argc, char * argv[])
{
	int i = 20;
	int j = 15;
	std::swap(i, j);  //别忘了std！
	cout << "i = " << i << endl;
	cout << "j = " << j << endl;

	double x = 12.8;
	double y = 13.7;
	std::swap(x, y);
	cout << "i = " << x << endl;
	cout << "j = " << y << endl;

	char* str1 = "Kimi";
	char* str2 = "Massa";
    std::swap(str1, str2);
	cout << str1 << endl;
	cout << str2 << endl;

	system("pause");
    return 0;
}

