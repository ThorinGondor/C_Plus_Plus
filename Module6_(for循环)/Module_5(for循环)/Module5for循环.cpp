// Module5for循环.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(int agrc, char* argv[])
{
	/***（1）将字符串反向输出***/
	string line = "animal";
	cout << line<<'\n';

	for (int i = line.size()-1; i >=0; i--)
	{
		cout << line[i];
	}
	cout << endl;

	/***（2）递增递减指针***/
	double arr[3] = { 13.5,22.6,67.3 };
	double *p = arr;  //此时指针指向第一个元素13.5
	cout << *p << endl;
	p = p + 1;  //此时指针向后移动，指向第二个元素22.6
	cout << *p << endl;

	/***（3）另一种反向输出字符的方法***/
	string word;
	cin >> word;

	char buffer;
	for (int i =0,j=word.size()-1;i<j;i++,j--)
	{
		//交换字符
		buffer = word[j];
		word[j] = word[i];
		word[i] = buffer;
	}
	cout << word << endl;
	
	/***（4）比较字符串是否相同的方法***/
	bool flag = strcmp("Kimi", "Kimi");  //注意java是boolean，cpp是bool！
	//如果相同，则flag=0，如果不同，则flag=1；
	cout << flag << endl;

	/****（5）cin.get()的用法和EOF结束输入****/
	//用cin.fail();方法可以判断是否输入ctrl+z，如果输入，则cin.fail()=true，否则为false
	cout << "EOF\n";
	char ch;
	while (cin.fail()==false)
	{
		cin.get(ch);
		cout << ch;
	}


	/*****关闭****/
	system("pause");
    return 0;
}

