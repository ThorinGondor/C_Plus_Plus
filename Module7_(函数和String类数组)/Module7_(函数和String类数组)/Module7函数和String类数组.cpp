// Module7函数和String类数组.
//知识点：使用函数传递string类数组
//本题需求，创建一个String类数组，填充该数组，并逐个显示该数组。
//而且这些功能应使用函数完成程序模块化设计

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
void fillARR(string arr[], int size);
void showARR(const string arr[], int size);


int main(int argc ,char * argv[])
{
	const int size = 10;
	string arr[size];

	fillARR(arr, size);
	showARR(arr,size);

	system("pause");
    return 0;
}

void fillARR(string arr[], int size)
{
	string buffer;
	for (int i = 0; i < 10; i++)
	{
		cout << "Please Enter a Word randomly:\n";
		cin >> buffer;
		if (!cin)  //出现非法输入
		{
			cin.clear();  //清除该非法输入
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Invalid Input ! Break ! \n";
			break;
		}
		arr[i] = buffer;
	}
}

void showARR(const string arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout <<"arr["<<i<<"]: "<< arr[i] << endl;
	}
}

