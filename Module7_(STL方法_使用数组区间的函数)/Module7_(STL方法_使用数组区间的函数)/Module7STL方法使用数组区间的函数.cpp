// Module7STL方法使用数组区间的函数.

//重点：
//该方法在函数操作数组时，需要使用数组的区间，
//因此必需使用两个指针（例如：*pb、*pe）指向数组的第一位和最后一位后一位，
//函数的建立如下所示： 
//       double sumDemo(double *pb, double *pe);

#include "stdafx.h"
#include <iostream>
using namespace std;
double sumDemo(const double *pb, const double *pe);

int main(int argc, char* argv[])
{
	double arrs[5] = {23.5, 68.3, 92.7, 80.9, 2.8};
	double sum = sumDemo(arrs,arrs+5);  //STL方法下，传递了区间，arrs+5指向数组结尾的后一位
	cout << sum;
	system("pause");
    return 0;
}

double sumDemo(const double *pb, const double *pe)  //该函数的创建，使用了STL方法，很有意思在于，两个参数为数组的区间，因此为指针，分别指向数组的第一位和数组最后一位的后一个位置。
{
	const double *p;
	double sum=0;
	for (p = pb;p<pe;p++)
	{
		sum = sum + *p;
	}
	return sum;
}