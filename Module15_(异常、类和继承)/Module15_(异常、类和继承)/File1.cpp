#include "stdafx.h"
#include <iostream>
#include <string>
#include "Sales.h"
using namespace std;

Sales::Sales(int y)
{
	year = y;
	for (int i = 0; i < MONTH; i++)
	{
		gross[i] = 0;
	}
}

Sales::Sales(int y, double *gr, int n)
{
	year = y;
	int lim = (n > MONTH) ? MONTH : n;
	int i;
	for (i = 0; i < lim; i++)
	{
		gross[i] = gr[i];
	}
	for (int j = i; j < MONTH; j++)
	{
		gross[j] = 0;
	}
}

LabelSales::LabelSales(string lb, int y) : Sales(y)
{
	label = lb;
}

LabelSales::LabelSales(string lb, int y, double *gr, int n):Sales(y,gr,n)
{
	label = lb;
}

Sales::Bad_Index::Bad_Index(int ix, const string &s):B_I(ix),logic_error(s)
{
}

LabelSales::NBad_Index::NBad_Index(string &lb, int ix, const string &s):lbl(lb),Bad_Index(ix,s)
{
}

double Sales::operator[](int i) const
{
	if (i<0 || i>= MONTH)
		throw Bad_Index(i);
	return gross[i];
}

double &Sales::operator[](int i)
{
	if (i<0 || i>= MONTH)
		throw Bad_Index(i);
	return gross[i];
}


double LabelSales::operator[](int i) const
{
	if (i<0 || i >= MONTH)
		throw NBad_Index(getLabel(), i);
	return Sales::operator[](i);
}
