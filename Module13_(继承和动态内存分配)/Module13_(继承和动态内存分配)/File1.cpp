#include "stdafx.h"
#include <iostream>
#include "DMA.h"
using namespace std;

/*****************（1）基类的构造函数、析构函数、重载运算符************************/
baseDMA::baseDMA(char* l, int r)
{
	int len = strlen(l);
	label = new char[len + 1];
	strcpy_s(label, len + 1, l);
	rating = r;
}
baseDMA::baseDMA(const baseDMA &bD)
{
	int len = strlen(bD.label);
	label = new char[len + 1];
	strcpy_s(label, len + 1, bD.label);
	rating = bD.rating;
}

baseDMA::~baseDMA()
{
	delete[] label;
}
baseDMA & baseDMA::operator=(const baseDMA &bD)
{
	delete[] label;
	int len = strlen(bD.label);
	label = new char[len + 1];
	strcpy_s(label, len + 1, bD.label);
	rating = bD.rating;
	return *this;
}

ostream &operator<<(ostream &os, const baseDMA &bD)
{
	os << "Label: " << bD.label << endl;
	os << "Rating: " << bD.rating << endl;
	return os;
}
void baseDMA::show()
{
	cout << label << endl;
	cout << rating << endl;
}
/***************（2）派生类的构造函数、复制构造函数（两个）、析构函数、重载运算符********************/
hasDMA::hasDMA(char* s, char* l, int r) :baseDMA(l, r)
{
	int len = strlen(l);
	style = new char[len + 1];
	strcpy_s(style, len + 1, s);
}

hasDMA::hasDMA(char* s, const baseDMA &bD) :baseDMA(bD)
{
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s) + 1, s);
}
hasDMA::hasDMA(const hasDMA &hD) : baseDMA(hD)
{
	int len = strlen(hD.style);
	style = new char[len + 1];
	strcpy_s(style, len + 1, hD.style);
}
hasDMA::~hasDMA()
{
	delete[] style;
}

hasDMA & hasDMA::operator=(const hasDMA &hD)
{
	delete[] style;
	int len = strlen(hD.style);
	style = new char[len + 1];
	strcpy_s(style, len + 1, hD.style);
	return *this;
}

ostream &operator<<(ostream &os, const hasDMA &hD)
{
	os << "Style: " << hD.style << endl;
	return os;
}

