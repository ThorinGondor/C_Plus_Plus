// Module13继承和动态内存分配.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "DMA.h"
using namespace std;

int main(int argc,char* argv[])
{
	baseDMA bD0 = baseDMA("Nike",8);
	hasDMA hD0 = hasDMA("red","Adidas",5);
	hasDMA hD1 = hasDMA("red", "Adidas", 5);
	hasDMA hD2 = hasDMA("blue", bD0);
	
	hD1 = hD0; //之所以可以直接这么写，是因为头文件和file1有相对应的重载运算符，这使得 在主函数中获取对象变得十分便捷！
	cout << bD0 << endl;
	cout << hD0 << endl;
	cout << hD1 << endl;
	cout << hD2 << endl;
	hD2.show();
	system("pause");
    return 0;
}

