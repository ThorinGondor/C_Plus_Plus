// Module8练习题6.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template <typename T>  //创建模板函数
T maxn(const T arr[],const int n)  //可以返回T类型数据，例如int类型、double类型等等
{
	T temp = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > temp)
		{
			temp = arr[i];
		}
	}
	return temp;
}

inline char* getMax(char *p[] ,int n )
{
	char* temp = p[0];
	for (int i = 1; i < n; i++)
	{
		if (strlen(p[i]) > strlen(temp)) 
		{
			temp = p[i]; 
		}
	}
	cout << p << endl;
	return temp;
}
int main(int argc, char* argv[])
{
	//第六题——第一小问
	int num[5] = { 25,89,32,79,67 };
	double buff[4] = {47.8,39.2,74.5,20.9};
	
	int max_num = maxn(num,5);
	double max_buff = maxn(buff, 4);
	cout << max_num << endl;
	cout << max_buff << endl;

	//第六题——第二小问
	char* name[4] = 
	{
		"Kimi",
		"Durant",
		"Green",
		"Ronaldo"
	};
	
	string max_str = getMax(name,4);
	cout << max_str << endl;
	system("pause");
    return 0;
}

