// Module15练习题1.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
#include <string>
#include "TV.h"
using namespace std;


int main(int argc,char* argv[])
{
	TV *tv = new TV(1,124);
	Remote *Rt = new Remote();
	Rt->getStyle();

	tv->ShowSettings();
	Rt->Channel_Up(*tv);
	Rt->Volume_Up(*tv);
	tv->setInput();
	Rt->setMode(*tv);
	tv->ShowSettings();
	tv->setRemoteStyle(*Rt);
	Rt->getStyle();
	
	system("pause");
    return 0;
}

