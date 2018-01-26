// Module7函数指针函数传递函数.cpp: 定义控制台应用程序的入口点。
/****
       指针声明方法：
       double(*p)(int);

	   用例：
	   double Demo1(int);
	   double Demo2(int);
	   main
	   {
	       DemoAPP(Demo1);
		   DemoAPP(Demo2);
	   }
	   double DemoAPP(double (*p)(int))
	   {}

	   就能够传递函数，在目的函数里调用传递来的函数
	   而且，这样，函数指针其实非常灵活，该指针能够代表不同的传递来的函数，也即意味着能够调用不同的传递来的函数
****/
#include "stdafx.h"
#include <iostream>
using namespace std;
float Ferrari(float time);
float Mclaren(float time);
void estimateTime(float (*p)(float time),float time);

float Ferrari(float time)
{
	time = time*0.85;
	return time;
}

float Mclaren(float time)
{
	time = time*0.97;
	return time;
}

float Mercedes(float time)
{
	time = time*0.75;
	return time;
}

int main(int argc, char* argv[])
{
	float time;
	cin >> time;
	estimateTime(Ferrari,time);  //可见这里调用函数estimateTime()函数时，内部传递的不但有一些数据，更有函数也被传递过去
	estimateTime(Mclaren, time);
	estimateTime(Mercedes, time);
	system("pause");
    return 0;
}

void estimateTime(float (*p)(float time), float time)  //函数被传递过来后，由一个函数型指针接收，该指针指向被传来的函数地址，这样就能实现在该函数中调用传递来的不同函数
{
	float result = (*p)(time);  //例如主函数的第一次调用，那么*p即Ferrari函数，那么这里等效于：Ferrari(time)；主函数第二次调用，那么传递来的是McLaren函数，则这里又等效于:Mclaren(time);真的是很方便！
	cout << result << endl;
}

