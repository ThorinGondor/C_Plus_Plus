// Module15exception类.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <new>
#include <iostream>
#include <cstdlib>  //用于exit
using namespace std;

struct Big
{
	double Staff[20000];
};

int main(int argvc, char* argv[])
{
	Big *p0;
	try
	{
	    p0 = new Big[8500];
	}
	catch (bad_alloc &ba)
	{
		cout << ba.what() << endl;
		//exit(EXIT_FAILURE);
	}
	system("pause");
    return 0;
}

