#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std; 

class Formular
{
public:
	Formular(string na,double t,double o_c);
	~Formular();
	friend Formular operator+(const Formular & F0,const Formular &F1);  //��Ϊ�Ƿǳ�Ա���ʶ�����ӦΪ��Ԫ���������friend
	void show()
	{
		cout << name << endl;
		cout << time << endl;
		cout << oil_consume << endl;
	}
private:
	string name;
	double time;
	double oil_consume;
};

class School
{
public:
	School(const int flo);
	School(const int flo, const int ro);
	~School();
	void showSchool()
	{
		cout << floor << endl;
		cout << room << endl;
	}
private:
	int floor;
	int room;
};
