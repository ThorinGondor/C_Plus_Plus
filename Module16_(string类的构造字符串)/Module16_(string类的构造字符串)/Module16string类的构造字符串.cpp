// Module16string类的构造字符串.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;


int main(int argc,char* argv[])
{
	int count = 0;
	ifstream fin;
	ofstream fout;
	fin.open("F:\\tobuy.txt");
	fout.open("F:\\tobuy_copy.txt");
	if (!fin.is_open())
	{
		cout << "Coundn't Open This File!\n";
	    exit(EXIT_FAILURE);
	}
	else
	{
		string line;
		getline(fin, line,';');  //注意';'是单引号括起来的!
		while (fin)
		{
			count++;
			fout <<count<<": "<<line <<';'<< endl;  //line内容写入文本
			cout << count << ": " << line <<"."<< endl;  //line内容打印在控制台
			getline(fin, line, ';');
			
		}
		cout << "Print Done!\n";
	}
		
	system("pause");
    return 0;
}

