// Module7函数传递结构的对象.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct TravelTime
{
	int min;
	int hour;
};

struct PolarSystem
{
	float distance;
	double angel;
};

//切记切记：类的函数的建立，必须在类已经建立（struct）的基础上，才能进行声明！不然报错！
TravelTime sumTravelTime(TravelTime TT0,TravelTime TT1);
void  showTime(TravelTime TT2);

void showPolar(const PolarSystem *p0);

TravelTime sumTravelTime(TravelTime T0, TravelTime T1)
{
	TravelTime T2;
	T2.hour = T0.hour + T1.hour + (T0.min + T1.min) / 60;
	T2.min = (T0.min + T1.min) % 60;

	return T2;
}

void showTime(TravelTime TT2)
{
	cout << "The sum hour is " << TT2.hour << endl;
	cout << "The sum minute is " << TT2.min << endl;
}

int main(int argc, char* argv[])
{
	TravelTime TT0 = { 36, 5 };  //36分钟。5小时
	TravelTime TT1 = { 54, 4 };  //54分钟，4小时
	TravelTime TT2 = sumTravelTime(TT0, TT1);
	
	showTime(TT2);  //这个是创建了对象，此法比较简单，调用时传递对象即可

	PolarSystem *p0 = new PolarSystem;
	p0->distance = 120.5;
	p0->angel = 45.7;
	showPolar(p0);   //由于设置了指针指向该类，那么传递函数里传递的是PolarSystem类的指针地址

	system("pause");
    return 0;
}

void showPolar(const PolarSystem *p0)
{
	cout << "The Polar Distance is : "<<p0->distance << endl;
	cout << "The Polar Angel is: "<<p0->angel << endl;
}