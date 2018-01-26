// Module9链接性为外部的静态持续变量.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void update(double);
void local();

//建立可外部访问的静态变量
double warming = 0.3;//该变量可以通过外部文件访问

int main(int argc,char* argv[])
{
	cout << "The original global warming is " << warming << endl;
	update(0.2); //调用的函数在另一个文件
	local();   //调用的函数在另一个文件
	system("pause");
    return 0;
}

