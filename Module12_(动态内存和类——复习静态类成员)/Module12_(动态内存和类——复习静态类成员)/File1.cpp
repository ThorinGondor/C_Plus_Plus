// Module12动态内存和类复习静态类成员.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include "StringBad.h"
using namespace std;

StringBad::StringBad(StringBad &SB,char* line)
{
	len = strlen(line);
	str = new char[len+1];  //给str分配内存，必须！
	strcpy_s(str, len+1,line);
	num_string++;
	cout << num_string << ": Object Created! " << endl;
}

StringBad::~StringBad()
{
	cout << "system end;" << endl;
}

