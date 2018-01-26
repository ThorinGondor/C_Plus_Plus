#include "stdafx.h"
#include <iostream>
using namespace std;

// 创建一系列访问链接性不同的变量
extern int Tom; //借用另一个文件的全局变量
static double Jason = 70.94; //本地变量
float Kimi = 61.99;  //全局变量
void remoteAccess()
{
	cout << "The Tom from File 2 is " << Tom << endl;
	cout << "The &Tom from File 2 is " << &Tom << endl;
	cout << "The File 2 Jason is " << Jason << endl;
	cout << "The File 2 &Jason is " << &Jason << endl;
	cout << "The File 2 Kimi is " << Kimi << endl;
	cout << "The File 2 &Kimi is " << &Kimi << endl;
}