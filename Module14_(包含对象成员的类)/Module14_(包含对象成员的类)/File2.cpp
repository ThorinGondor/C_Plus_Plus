// Module14包含对象成员的类.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <valarray>
#include "Student.h"
using namespace std;

inline void setInfo(Student &s, int n)
{
	s.setArray(n);
}

int main()
{
	Student student[3] = {Student("Kimi",5),Student("Alonso",5),Student("Hamilton",5)};
	for (int i = 0; i < 3; i++)
	{
		cout << "Student " << i << " start:\n";
		setInfo(student[i], 5);
		cout << "Student " << i << " end:\n";
	}
	for (int i = 0; i < 3; i++)
	{
		student[i].showScores();
	}
	system("pause");
    return 0;
}

