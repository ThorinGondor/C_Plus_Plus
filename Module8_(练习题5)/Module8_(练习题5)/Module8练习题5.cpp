// Module8练习题5.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>
T max5(T *p)
{
	T temp = p[0];
	for (int i = 1; i < 5; i++)
	{
		if (p[i] > temp)
		{
			temp = p[i];
		}
	}
	return temp;
}

int main(int argc, char* argv[])
{
	int num[5] = {14,89,76,59,44};
	int *pn = num;
	
	double buff[5] = { 56.78, 94.55,94.67,39.50,41.63 };
	double *pd = buff;

	int max_num = max5(pn);
	cout << max_num << endl;

	double max_buff = max5(pd);
	cout << max_buff << endl;
	system("pause");
    return 0;
}

