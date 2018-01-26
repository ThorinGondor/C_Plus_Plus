// Module6读取文本数据.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc,char * argv[])
{
	//建立对象
	ifstream fin;
	//关联文本文件
	string filename;
	cin >> filename;
	fin.open(filename);
	//判断是否打开
	if (!(fin.is_open()))
	{
		cout << "File is not exit" << endl;
		exit(EXIT_FAILURE);
	}
	//读取文本文件
	double value = 0;
	double sum=0;
	int count=0;

	while (fin.good())
	{
		fin >> value;
		cout << value << endl;
		sum = sum + value;
		count++;
	}

	cout << "OVER:\n";
	cout << sum << endl;
	cout << count << endl;
	//关闭
	fin.close();

	system("pause");
    return 0;
}

