// Module4类型组合.cpp: 定义控制台应用程序的入口点。

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
struct birthday
{
	int year;
};

int main(int argc ,char* argv[])
{
	/*********（2）快速创建三个生日对象*********/
	birthday b0,b1, b2;  
	
	cin>>b0.year;
	birthday *p1 = &b1;  //还可以让类的指针指向它的对象的地址
	cin >> (p1->year);
	birthday *p2 = &b2;
	cin >> (p2->year);
	cout << b0.year << ";" << (p1->year) << ";" << (p2->year) << '\n';

	/****（2）通过建立数组方法新建一系列对象*****/
	birthday trio[3];  
	trio[0].year = 1997;
	trio[1].year = 1994;
	trio[2].year = 2008;
	cout << trio[0].year << ";" << trio[1].year << ";" << trio[2].year << '\n';

	/****（3）通过建立指针数组方法新建一系列对象****/
	birthday bt0, bt1, bt2;  //与第一法同样需先创立一些对象
	birthday *staff[3] = { &bt0,&bt1,&bt2 };
	cin >> staff[0]->year;
	cin >> staff[1]->year;
	cin >> staff[2]->year;

	for (int i = 0; i <= 2; i++)
	{
		cout << staff[i]->year << endl;
	}
	/**使用第三法比较好**/
	

	system("pause");
    return 0;
}

