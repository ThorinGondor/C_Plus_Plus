// Module13多重继承练习.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Media.h"
using namespace std;


int main()
{
	/*
	Media *M[3];
	
	for (int i = 0; i < 3; i++)
	{
		M[i] = new Media();
		M[i]->set();
	   
	}
	for (int i = 0; i < 3; i++)
	{
		M[i]->show();
	}
	*/
	 
	YoukuTudou * Y[3];
	for (int i = 0; i < 3; i++)
	{
		Y[i] = new YoukuTudou();
		Y[i]->set();

	}
	for (int i = 0; i < 3; i++)
	{
		Y[i]->show();
	}
	system("pause");
    return 0;
}

