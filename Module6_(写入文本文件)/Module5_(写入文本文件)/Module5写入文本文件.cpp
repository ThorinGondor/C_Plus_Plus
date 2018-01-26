// Module5写入文本文件.cpp: 定义控制台应用程序的入口点。
//
/**
   写入文本分为四个步骤，见下方代码的注释，非常清晰:
   （1）先对ofstream类建立(new)一个对象
   （2）对象和文本关联
   （3）写入文本
   （4）关闭该对象
**/
#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>  //为了对文本文件进行写入读取操作，必须在头文件创建fstream，其意思是file stream；
using namespace std;

int main(int argc , char* argv[])
{
	//（1）先对ofstream类建立(new)一个对象
	ofstream fout;

	//（2）对象和文本关联
	fout.open("F:\\input.txt");

	//（3）写入文本
	string str1 = "This is C++ data";
	string str2 = "It's similiar to JAVA";
	string str3 = "Howerver it's more complicated!";
	fout << str1<<endl;
	fout << str2 << endl; 
	fout << str3 << endl;//注：这里的三段写入默认是续写，而非覆写。但是该程序重新运行时，还是和Java一样会覆写该文本文件。
	
	//（4）最好关闭该对象
	fout.close();

	//system("pause");
    return 0;
}

