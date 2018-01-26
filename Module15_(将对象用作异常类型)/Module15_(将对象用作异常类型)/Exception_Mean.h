#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

class Bad_hmean
{
public:
	Bad_hmean(double a, double b) :v1(a), v2(b) {}
	void message();
private:
	double v1;
	double v2;
};

class Bad_gmean
{
public:
	Bad_gmean(double a,double b):v1(a),v2(b) {}
	void message();

private:
	double v1;
	double v2;
};

void Bad_hmean::message()
{
	cout << "Invalid Numbers: a==-b;\n";
}

void Bad_gmean::message()
{
	cout << "Invalid Numbers:a<0 or b<0;\n";
}