// Module4第四章复合类型.cpp: 定义控制台应用程序的入口点。

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc ,char* argv[])
{
	/***(1)数组初始化、字符串初始化***/
	int arr[5] = { 18,97,66,56,99};  //创建一个数组，元素个数为5
	
	int *p = new int[3];
	p[1] = 12;
	p[2] = 67;
	p[3] = 77;

	char buff[4] = {'a','b','c',78};
	for (int i = 0; i < 4; i++)
	{
		cout << buff[i] << ' ';
	}
	cout << '\n';
	
	char str[6] = { 'C','u','r','r','y' ,'\0'};  //以空字符结尾才能是一个string类字符串！
	cout << str << endl;
	//或者这样写：方便
	char con[] = "Curry";
	cout << con << endl;

	/***(2)字符串输入***/
	char buffers[30] ;
	cout << "Randomly print in" << endl;
	cin >> buffers;
	cout << buffers<<'\n';

	/***(3)获取每一行输入：getline();***/
	char name[10];
	char sex[5];
	char huanchong[100];
	
	cout << "Enter your name\n" ;
	cin.getline(huanchong,10);  
	cin.get(name,10);   //由于getline有时候存在被跳过的可能，最好在getline前面再写一个getline
	cout << "Enter your age\n" ;
	cin.getline(huanchong, 10);
	cin.getline(sex, 5);
	
	cout << name << "\n";
	cout<<sex << '\n';

	/***(3)获取每一行输入：get();***/
	char type[10];
	char factory[10];

	cout << "Enter your type\n";
	cin.get(type, 10).get();
	cout << "Enter your factory\n";
	cin.get(factory, 10).get();  //相比getline()；可以发现cin.get(name,10).get();函数更好用

	cout << type << "\n" << factory << '\n';

	/***(4)C++的string类***/
	//一定要先创建 #inlcude <string> !!!
	string line1 = "string-C++";
	string line2 = " is almost similiar to Java. ";
	cout << "Line1+Line2"<<line1 +line2<< endl;

	//将一行读取到str：
	string line3;
	cout << "Enter something\n";
	getline(cin, line3);
	cout << "Line3 "<<line3 << endl;

	system("pause");
    return 0;
}

