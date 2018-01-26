// Module9无链接性变量.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Where
{
	char* name;
	int age;
	float height;
};

int main(int argc,char* argv[])
{
	//建立指针对象的写法一：
	Where *p0 = new Where;
	p0->name = "Alonso";
	p0->age = 36;
	p0->height = 171;
	//建立指针对象的写法二：
	Where *p1 = new Where{"Kimi",35,175};
	system("pause");
	return 0;
}

