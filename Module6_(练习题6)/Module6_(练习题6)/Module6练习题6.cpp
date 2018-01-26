// Module6练习题6.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct DonatorInfo
{
	string name;
	int fund;
};

int main(int argc , char* argv[])
{
	string Name[100];  //一个数组名为Name的string类数组，能装100个string类字符串
	int fund[100];        //一个数组名为fund的int类数组，能装100个款项值
	
	cout << "Please enter a number less than 100\n";
	int num;  //捐款人数
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		DonatorInfo *p = new DonatorInfo;
		cout << "Enter a name" << endl;
		cin >> (p->name);
		cout << "Enter a fund" << endl;
		cin >> (p->fund);

		Name[i] = (p->name);		
		fund[i] = (p->fund);
	}
	
	ofstream fout;  //设置一个写入对象
	fout.open("F:\\Donator_Info_Storage.txt");
	//只有捐款fund>100的才能写入
	fout << "Grand Patrons:\n";
	fout << "Donator Name:  ";
	for (int j = 0;j<num;j++)
	{
		cout << Name[j]<<" ";
		if (fund[j] > 1000)
		{
			fout << Name[j] << " ";
		}
	}
	cout << endl;

	fout << '\n'<<"Donator fund:  ";
	for (int k = 0; k<num; k++)
	{
		cout << fund[k] << " ";
		if (fund[k] > 1000)
		{
			fout << fund[k] << " ";
		}
	}
	cout << endl;

	//关闭
	system("pause");
    return 0;
}

