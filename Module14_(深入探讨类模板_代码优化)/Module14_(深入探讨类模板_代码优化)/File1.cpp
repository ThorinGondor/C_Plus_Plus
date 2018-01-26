// Module14深入探讨类模板代码优化.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;


int main(int argc,char* argv[])
{
	//（1）输入栈的最大容量StackSize
	int StackSize;
	cout << "Please Enter A StackSize: ";
	cin >> StackSize;
	
	//（2）根据输入的最大容量，创建栈类的对象
	Stack<char*> *St = new Stack<char*>(StackSize);
	
	//（3）设定一系列char类的内容，依次进栈
	char* line[50] = {"Kobe","James","Curry","Jason","Leonard","WestBrook","Durant","Korver"};
	int i = 0;
	while (!St->isFull())
	{
		cout << "The Line: ["<<line[i]<<"] Has been Pushed! \n";
		St->Push(line[i]);
		i++;
		cout << "This Line Has Been Successfully Pushed! \n";
	}
	cout << "The Stack now is Full! \n";
	
	//（4）依次出栈，打印出栈的语句
	char* str;
	while (!St->isEmpty())
	{
		St->Pop(str);
		cout << str << endl;
	}

	system("pause");
    return 0;
}

