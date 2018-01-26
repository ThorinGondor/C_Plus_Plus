// Module9无链接性静态变量.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void remoteAccess();

//建立一系列链接性不同的变量
int Tom = 10;  //全局变量
double Jason = 77.8;  //全局变量
static float Kimi = 67.39;  //本地变量

int main(int argc, char* argv[])
{
	cout << "File 1 Tom = " << Tom << endl;
	cout << "File 1 &Tom = " << &Tom << endl;
	cout << "File 1 Jason = " << Jason << endl;
	cout << "File 1 &Jason = " << &Jason << endl;
	cout << "File 1 Kimi = " << Kimi << endl;
	cout << "File 1 &Kimi = " << &Kimi << endl;

	remoteAccess();

	system("pause");
    return 0;
}

