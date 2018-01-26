#include "stdafx.h"
#include<iostream>
using namespace std;

class Time
{
public:
	Time(int h,int min);
	~Time();
	Time operator+(const Time &T);
	Time operator-(const Time &T);
	friend Time operator*(const int m,const Time &T);  //������Ԫ�����friend�ؼ��ּ���
	void show()
	{
		cout << hours<<" hour" << endl;
		cout << minutes << " minutes"<<endl;
	}
private:
	int hours;
	int minutes;
};
