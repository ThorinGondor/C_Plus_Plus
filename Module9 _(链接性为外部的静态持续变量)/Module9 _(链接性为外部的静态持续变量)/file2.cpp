#include "stdafx.h"
#include <iostream>
using namespace std;
void update(double);
void local();

extern double warming;  //�˴�δ���壬�õ��Ǳ���ļ����ⲿ���ʾ�̬����warming

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