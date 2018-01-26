/* 
               C++primer plus第二章：
*/
#include "stdafx.h"
#include <iostream>
using namespace std;
int Run(int);  //C++里，需先声明函数方法的原型

namespace stu
{
	int work(int k)
	{
		if (k == 15)
			return 2;
		else
			return 3;
	}
}

int main(int argc,char *argv[])
{
	int *p = new int[5];
	p[0] = 37;
	p[1] = 10;
	p[2] = 15;
	p[3] = 66;
	p[4] = 95;
	
	for (int i = 0; i < 5; i++)
	{
		cout << p[i] << endl;
	}
	
	char* ch = "next step";
	char* str = new char;
	str = "over!"; 
	cout<<ch<<';'<<str << endl;

	double x = sqrt(225);
	double y = pow(5.0, 3);
	cout << x << ";"<<y<<endl;

    int t = Run((int)x);
	cout << t << endl;

	int u = stu::work(15);
	cout << u << endl;

	/**练习题primer plus**/
	cout<< "Enter the number of hours"<<endl ;
	int hour = 0;
	cin >> hour;
	cout << "Enter the number of minutes" << endl;
	int minute = 0;
	cin >> minute;
	cout << "Time: "<<hour<<":"<<minute<<endl ;

	system("pause");
    return 0;
}
int Run(int j)
{
	if (j == 15)
			return 1;
	else
			return 0;
}


 