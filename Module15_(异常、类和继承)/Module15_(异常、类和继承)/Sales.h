#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Sales
{
public:
	enum{ MONTH=12 };
	Sales(int y);
	Sales(int y,double *gr,int n);
	virtual~Sales() {}

	/*****************************************************************************/
	class Bad_Index :public logic_error
	{
	public:
		Bad_Index(int ix, const string &s = "Index Error In Sales Class!");
		int getB_I() { return B_I; }
		virtual~Bad_Index()throw() {}
	private:
		int B_I;
	};
	/****************************************************************************/
	int getYear()
	{
		return year;
	}
	virtual double operator[](int i) const;
	virtual double &operator[](int i);
private:
	int year;
	double gross[MONTH];
};

class LabelSales:public Sales
{
public:
	/*********************************************/
	class NBad_Index :public Sales::Bad_Index
	{
	private:
		string lbl;
	public:
		NBad_Index(string &lb,int ix,const string &s="Index Error In LabelSales Class!");
		string getLabel_Val() { return lbl; }
		virtual~NBad_Index() {}
	};
	/*********************************************/
	LabelSales(string lb, int y);
	LabelSales(string lb,int y,double *gr,int n);
	virtual~LabelSales() {}
	string getLabel()const { return label; }
	virtual double operator[](int i) const;
private:
	string label;
};
