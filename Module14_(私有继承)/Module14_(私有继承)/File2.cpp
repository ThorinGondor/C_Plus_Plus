// Module14私有继承.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <valarray>
#include "Student.h"
using namespace std;

inline void setInfo(Student &s,int n)
{
	cout << "Please Enter Your Name: \n";
	cin>>(string &)s;  //由于和上一个代码项目不同，此代码并没有在头文件声明String name成员，只有私有继承的string类，因此，这里设置名字的时候只能对对象进行string的强转

	for (int i = 0; i < n; i++)
	{
		cout << "Please Enter Your Score: \n";
		cin >> s[i];
	}
}

int main()
{
	Student stu[3] = { Student(4),Student(4),Student(4)};
	for (int i = 0; i < 3; i++)
	{
		setInfo(stu[i],4);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "This is stu[" << i << "]: \n";
		cout << stu[i].getName() << endl;
		cout << stu[i].getAverage() << endl;
	}
	system("pause");
    return 0;
}

