// Module8对象继承和引用.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <ostream>
#include<fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	ifstream fin;
	ofstream fout;
	fin.open("F:\\Storage.txt");
	fout.open("F:\\Destination.txt");
	char line[100];
	
	while(fin.good())
	{
		fin.getline(line, 100);
	    fout <<line<< endl;
		cout << line << endl;
	}
	
	system("pause");
    return 0;
}

