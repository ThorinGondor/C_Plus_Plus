#include "stdafx.h"
#include <iostream>
#include "Time.h"

Time::Time(int h, int min)
{
	hours = h;
	minutes = min;
}

Time::~Time()
{
	cout << "System End; " << endl;
}

Time Time::operator+(const Time &T)
{
	//建立一个sum对象
	Time sum = Time(0,0);
	sum.minutes = T.minutes + minutes;
	sum.hours = T.hours + hours+sum.minutes/60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator-(const Time &T)
{
	Time diff = Time(0, 0);
	int total0 = T.hours + hours;
	int total1 = T.minutes + minutes;
	diff.minutes = (total1 - total0) % 60;
	diff.hours = (total1 - total0) / 60;
	return diff;
}

Time operator*(const int m,const Time &T)  //该函数的原型函数有firend关键字，为友元函数
{
	Time result = Time(0,0);
	long total = T.hours*m * 60 + T.minutes*m;
	result.hours =total/60;
	result.minutes =total%60;
	return result;
}