// Module7练习题.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
double add(double x, double y);
double calculate(double x, double y, double (*p)(double x, double y));

double add(double x, double y)
{
	return x + y;
}
double calculate(double x, double y, double(*p)(double x, double y))
{
	return (*p)(x, y);
}

int main(int argc, char* argv[])
{
	double sum = calculate(24.5, 13.8, add);
	cout << sum << endl;
	system("pause");
    return 0;
}

