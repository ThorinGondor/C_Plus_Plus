// Module14类模板.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Stacktp.h"
using namespace std;

int main(int argc,char* argv[])
{
	Stack<string> *St = new Stack<string>();
	string str;

	while (!St->isFull())
	{
		cout << "Please Enter An Line: ";
		cin >> str;
		cout<<"Full? "<<St->isFull()<<endl;
		St->Push(str);
		cout << "This Line Successfully Pushed! \n";
	}
	cout << "Full? " << St->isFull() << endl;

	while (!St->isEmpty())
	{
		St->Pop(str);
		cout << "Poped Line: "<<str << endl;
	}
	system("pause");
    return 0;
}

