// Module7深入探讨函数指针.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
using namespace std;
//声明三个函数指针原型
const double *origin1(double arr[], int size);
const double *origin2(double arr[], int size);
const double *origin3(double arr[], int size);

//再声明一个函数指针，可以指向前三个函数
const double *(*p)(double arr[], int size);

const double *origin1(double arr[], int size)
{
	return arr;   //返回的是地址
}

const double *origin2(double arr[], int size)
{
	return arr + 1;
}

const double *origin3(double arr[], int size)
{
	return arr + 2;
}

int main(int argc, char* argv[])
{
	const int size = 5;
	double arr[size] = {56.8, 90.3, 30.4, 44.7, 19.8};
	p = origin1;  //函数指针p关联函数指针origin1
	cout << *(*p)(arr,size) << endl;  //函数指针调用

	p = origin2;
	cout << *(*p)(arr, size) << endl;

	p = origin3;
	cout << *(*p)(arr, size) << endl;

	system("pause");
    return 0;
}

