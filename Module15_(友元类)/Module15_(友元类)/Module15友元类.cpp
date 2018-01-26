// Module15友元类.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "TV.h"
using namespace std;

int main(int argc,char* argv[])
{
	TV *p0 = new TV;

	p0->showSettings();
	p0->cha_Up();
	p0->vol_Up();
	p0->showSettings();
	
	Remote *r0 = new Remote;
	r0->cha_Up(*p0);
	r0->vol_Up(*p0);
	r0->set_Mode(*p0);
	r0->set_Input(*p0);
	r0->set_Cha(*p0, 15);
	p0->showSettings();
	system("pause");
    return 0;
}

