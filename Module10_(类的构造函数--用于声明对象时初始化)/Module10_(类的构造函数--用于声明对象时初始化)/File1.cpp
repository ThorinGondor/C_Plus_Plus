//�ļ�1�����ͷ�ļ������ĺ���ԭ�ͺ͹��캯���������������ж���
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Stock00.h"

Stock::Stock(const string & comp, double num, double price)
{
	company = comp;
	shares = num;
	share_value = price;
}

Stock::~Stock()
{
	using namespace std;
	cout << "See You~" << endl;
}

void Stock::buy(const double num, double price)
{
	shares = shares + num;
	share_value = price;
	getSum();
}

void Stock::show()
{
	cout << company << endl;
	cout << shares << endl;
	cout << share_value << endl;
	cout << total << endl;
}

void Stock::sell(const double num, double price)
{
	shares = shares - num;
	share_value = price;
	getSum();
}

Stock Stock::topvalue(Stock &St)  //����������Stock�Ķ���
{
	if (St.total > total)
		return St;  //���ظ�������
	else
		return *this;  //���������Ķ�����Ǹ�������
}