// Module7函数重载模板.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>
void swap(T &i, T &j);  //函数模板+函数重载，特征标不同（参数数目不同）

template <typename T>
void swap(T arr1[], T arr2[],int n);

template <typename T>
void swap(T &i, T &j)
{
	T temp = j;
	j = i;
	i = temp;
}

template <typename T>
void swap(T arr1[], T arr2[], int n)
{
	T buffer;
	for (int i = 0; i < n; i++)
	{
		arr2[i] = arr1[i];
	}
}

int main(int argc, char* argv[])
{
	int i = 34;
	int j = 28;
	std::swap(i, j);
	cout << i << endl;
	cout << j << endl;

	int arr1[4] = {1,2,3,4};
	int arr2[4] = { 5,6,7,8 };
	swap(arr1,arr2,4);
	
	for (int i = 0; i < 4; i++)
	{
		cout << arr1[i]<<"; ";
	    cout << arr2 [i]<< "; ";
	}
	
	system("pause");
    return 0;
}

