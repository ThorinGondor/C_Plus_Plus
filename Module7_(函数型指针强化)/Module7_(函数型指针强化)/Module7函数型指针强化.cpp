// Module7函数型指针强化.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
//创建三个函数型指针
const double * f1(const double arr[],int n);
const double * f2(const double arr[], int n);
const double * f3(const double arr[], int n);

const double *(*p)(const double arr[], int n);

const double * f1(const double *p,int n)
{
	return p;
}

const double *f2(const double *p, int n)
{
	return p + 1;
}
const double *f3(const double *p, int n)
{
	return p + 3;
}

int main(int argc,char* argv[])
{
	const int size = 3;
	double arr[size] = {117.8, 98.4, 78.5};
	const double *(*p1)(const double arr[],int n);  //对上面建立的第一个函数型指针，可再创建一个指针指向该函数型指针
	p1 = f1;  //该函数指针指向第一个函数指针

	cout << "The Address:"<<(*p1)(arr,3) << endl;
	cout << "The Content:" << *(*p1)(arr, 3)<< endl;
	system("pause");
    return 0;
}

