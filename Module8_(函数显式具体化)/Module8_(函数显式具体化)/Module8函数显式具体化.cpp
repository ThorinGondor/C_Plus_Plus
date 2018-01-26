// Module8函数显式具体化.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct Job
{
	string name;
	double salary;
	int floor;
};

template <> void std::swap<Job>(Job &j1, Job &j2)
{
	double temp1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = temp1;

	int temp2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = temp2;
}

int main(int argc, char* argv[])
{
	//建立对象
	Job Curry = 
	{
		"Stephen Curry",
		1.53,
		15
	};
	Job Harden = 
	{
		"James Harden",
		0.83,
		13
	};
	//交换两个对象各自的薪金
	swap(Curry, Harden);

	cout << Curry.salary << endl;
	cout << Harden.salary << endl;

	system("pause");
    return 0;
}

