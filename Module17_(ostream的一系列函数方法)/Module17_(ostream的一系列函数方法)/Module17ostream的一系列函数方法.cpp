// Module17ostream的put方法和write方法.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <ostream> //iostream是它的派生类
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	//(1)put方法
	cout.put('W').put('E');  //等同于: cout<<WE

							 //(2)write方法
	const char* str = "Kensas";
	int length = strlen(str);
	for (int i = 0; i <= length; i++)
	{
		cout.write(str, i) << endl;  //write方法打印指定数目（i个）的字符！
	}
	cout.write(str, length + 5); //即时指定数目超过了字符串边界，write也会根据指定数目继续打印！
	cout << '\n';
	//(3)hex十六进制
	/*cout << "\nhex: " << hex; //将计数格式状态设为16位
	cout << 18008;*/

	//(4)width方法：设置字段宽度,fill方法，代替空格填充空白部分
	cout.fill('-');

	for (int i = 0; i <= 10; i++)
	{
		cout.width(5);  //设置下一行输出的字段宽度为5，则该输出会紧靠着尾端对齐
		cout << i;
		cout.width(10); //同上，设置下一行输出的字段宽度为5，则该输出会紧靠着尾端对齐
		cout << i*i << endl;
	}

	system("pause");
	return 0;
}
