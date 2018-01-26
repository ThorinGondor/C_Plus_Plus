// Module4使用new的指针结构.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
	int age;
	string school;
    
	string getName()
	{
		return name;
	}
};

int main(int argc , char* argv[])
{
	Student *p = new Student;
	cin >> (p->name);
	cin >> (p->age);
	cin >> (p->school);

	cout << (p->name) << endl;
	cout << (p->age) << endl;
	cout << (p->school) << endl;

	delete p;
	system("pause");
    return 0;
}



