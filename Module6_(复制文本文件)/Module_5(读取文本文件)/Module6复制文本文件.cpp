// Module6复制文本文件.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>  //要想操作文本，必须声明头文件：fstream
using namespace std;

int main(int argc, char* argv[])
{
	//建立对象
	ifstream fin;
	ofstream fout;

	//关联文本文件
	char filename[20];
	cin.get(filename, 20);
	fin.open(filename);
	fout.open("F:\\target.txt");

	//读取并写文本
	char line[100];
	while (fin.good())  //或者eof结束符：!(fin.eof())
	{
		fin.getline(line,100);  //该代码为读取，将一整行的字符全部读取字符存进line[]中,getline函数将会读取完一整行并抛弃该行的回车符，这样下一轮的getline依旧可以读取到下一行的数据
		fout << line<<endl;        //再将line存储的该行字符串写入目标文件，注意换行。
		cout << line << endl;    
	}

	//最好关闭
	fin.close();
	fout.close();

	system("pause");
    return 0;
}

