// Module4使用new和delete的实例.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
string getName();

int main(int argc , char* argv[])
{
	string name;
	name = getName();
	cout << name << endl;
	system("pause");
    return 0;
}

string getName()
{
	char buffers [30];
	cin >> buffers;

	char *p = new char[strlen(buffers)+1];  //必须创建一个长度比原数组更大的指针数组，至少大1，才能用于存储原数组

	strcpy_s(p,strlen(buffers)+1,buffers);

	for (int i = 0; i < strlen(p); i++)
	{
		cout << p[i];
	}
    cout<< '\n';
	return p;
}

