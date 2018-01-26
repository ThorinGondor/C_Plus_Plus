// Module5二维数组.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
void Dimension2Array();

int main(int argc, char* argv[])
{
	Dimension2Array();
	system("pause");
    return 0;
}

void Dimension2Array()
{
	//初始化一个二维数组
	int arrs[4][5] =
	{
		{1,2,3,4,5},
		{9,8,7,6,5},
		{2,4,6,8,0},
		{1,3,5,7,9}
	};


	char* pt[4];  //相当于Java里的String pt[4];  可以把char*理解为string
	pt[0] = "Shanghai";
	pt[1] = "Peking";
	pt[2] = "Canton";
	pt[3] = "HongKong";

	int line = 0;
	for (int i = 0; i < 4; i++)
	{
		cout << pt[i] << ": ";
		for (int j = 0; j < 5; j++)
		{
			cout << arrs[line][j]<<" ";
		}
		line++;
		cout << endl;
	}
}
/*
输出结果：
Shanghai: 1 2 3 4 5
Peking: 9 8 7 6 5
Canton: 2 4 6 8 0
HongKong: 1 3 5 7 9
*/