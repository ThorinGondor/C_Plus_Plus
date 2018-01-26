// Module15嵌套类练习.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "QueueDemo.h"
using namespace std;


int main(int argc, char* argv[])
{
	Queue<string> *q0 = new Queue<string>(5);
	q0->show();
	string line[5];
	int i = 0;
	while (!q0->isFull())
	{
		cout << "Please Enter Your Line: ";
		getline(cin, line[i]);
		q0->enqueue(line[i]);
		i++;

	}
    cout << "The Queue is Full! \n";

	string str[5];
	int j = 0;
	while (!q0->isEmpty())
	{
		q0->dequeue(str[j]);
		cout << "item[" << j << "]: " << str[j] << endl;
		j++;
	}
	cout << "The Queue is Empty! \n";
	
	system("pause");
    return 0;
}

