// Module7函数和数组.cpp: 定义控制台应用程序的入口点。
//函数和数组结合在一起是关键，需要多加练习。
/**
       (1)首先声明带数组的函数的方法：
	         语句：int arr[]
			 用法如下所示例子：
	         int Demo(int arr[], int n);
	   (2)其次，调用该函数的方法：
	          语句：arr
			  用法如下：
			  int arr[num];
			  Demo(arr,num);
**/
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int SumDemo(int[], int n);

int main(int argc, char* argv[])
{
	const int size = 10;
	int arr[size] = {26,34,78,99,49,50,91,38,80,39};
	int sum = SumDemo(arr,size);
	cout << sum << endl;
	system("pause");
    return 0;
}
int SumDemo(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size-1; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}

