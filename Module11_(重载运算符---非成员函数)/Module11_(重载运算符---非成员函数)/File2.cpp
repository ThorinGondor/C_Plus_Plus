// Module11重载运算符非成员函数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Time.h"
using namespace std;


int main(int argc,char * argv[])
{
	Formular F0 = Formular("Ferrari", 47.39, 120.5);
	Formular F1 = Formular("Renault", 47.56, 118.7);

	Formular Fsum = Formular("Racing Car", 0, 0);
	Fsum = operator+(F0,F1);  //调用重载运算符

	Fsum.show();

	School Sc0(4);  //建立对象时，就隐式地强制转换，等同于： School Sc0 = 4;
	Sc0 = 16; 
	Sc0.showSchool();

	School Sc1(4, 418); 
	Sc1.showSchool();
	Sc1 = 5;   //这会使对象失去一个元素，本来对象是二维的，floor=4,room=418，现在只剩floor=5
	Sc1.showSchool();

	system("pause");
    return 0;
}

