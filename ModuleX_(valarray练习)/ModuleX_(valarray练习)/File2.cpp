// ModuleXvalarray练习.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <valarray>
#include <string>
#include "Student.h"
using namespace std;

void SetInfo(Student &stu,int n)
{
	stu.SetScore(n);
}

int main(int argc, char* argv[])
{
	Student stu[3] = {Student("Kimi",3),Student("Alonso",3),Student("Hamilton",3) };
	for (int i = 0; i < 3; i++)
	{
		SetInfo(stu[i],3);
	}
	
	for (int i = 0; i < 3; i++)
	{
		cout << "Sum is: "<<stu[i].getSum() << endl;
	}
	cout << '\n';

	for (int i = 0; i < 3; i++)
	{
		cout << "Average is " << stu[i].getAverage() << endl;
	}
	cout << '\n';

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Score is: " << stu[i].getScore(j) << endl;
		}
	}
	cout << '\n';
	system("pause");
	return 0;
}
