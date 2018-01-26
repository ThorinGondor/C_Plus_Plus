// Module15嵌套类嵌套一个Node类队列.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include "queue.h"
using namespace std;

int main(int argc, char* argv[])
{
	Queue<string> *p0 = new Queue<string>(4);
	string buffer;
	
	while (!p0->isFull())
	{
		cout << "Please Enter Your Name: ";
		getline(cin, buffer);
		p0->enQueue(buffer);
	}
	
	while (!p0->isEmpty())
	{
		p0->deQueue(buffer);
		cout << buffer << endl;
	}
	system("pause");
    return 0;
}

