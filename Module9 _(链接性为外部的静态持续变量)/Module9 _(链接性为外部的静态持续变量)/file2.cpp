#include "stdafx.h"
#include <iostream>
using namespace std;
void update(double);
void local();

extern double warming;  //此处未定义，用的是别的文件的外部访问静态变量warming

void local()
{
	double warming = 9.8;
	cout << "The local warming is " << warming << endl;
	cout << "but the global warming is " << ::warming << endl;
}
void update(double dt)
{
	warming = warming + dt;
	cout << "Update global warming to:" << warming << endl;
}