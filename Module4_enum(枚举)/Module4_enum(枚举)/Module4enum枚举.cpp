// Module4enum枚举.cpp: 定义控制台应用程序的入口点。

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc ,char* argv[])
{
	//下示代码为创建一个枚举类型，枚举类型名为GoldenStateWarriors，一系列枚举量，还有枚举名GSW
	enum GoldenStateWarriors{Curry=30,Durant=35,Green=23,Thompson=11,Pachulia=6};
	GoldenStateWarriors GSW;
	GSW = Durant;
	cout << GSW << endl;  //输出的是Curry对应的数值，如果没有对应数值。则输出该枚举量的位置
	system("pause");
    return 0;
}

