// Module4struct结构.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct Student  //创建学生对象  JAVA里的方法是class student {}
{
	char* name;
	string school;
	int age;
	double height;

	string getName()
	{
		return name;
	}
};

int main(int argc,char* argv[])  //主函数
{
	/**（1）建立对象，注意和JAVA区别**/
	Student S1 =   //C++建立对象的写法，JAVA的写法： Student S1 = new Student();  int age = S1.age;......
	{
		
		"ZhangSan",
		"Duke_University",
		20,
		180.5
	};

	Student S2 =
	{
		"LiSi",
		"Columbia_University",
		22,
		178.5
	};

	cout << S1.age <<";"<< S1.school<<";"<<S1.name <<";"<< S1.height << endl;
	cout << S2.age <<";"<< S2.school<<";"<<S2.name << ";"<<S2.height << endl;
    
	/***（2）调用类的函数功能***/
	string str = S1.getName();
	cout <<"Function use:"<< str << endl;
	
	/***（3）C++可以同时建立两个对象，JAVA只能依次建立***/
	Student guest [2]=
	{
		{"WangWu","Havard_University",23,168.7},
	    {"ZhangBo","Butler_University",22,190.5}
	};

	cout << guest [0].name << ";"<<guest [0].school << endl;
	cout << guest [1].name << ";"<<guest [1].school << endl;

	system("pause");
    return 0;
}

