#include "stdafx.h"
#include <iostream>
using namespace std;

int main(int agrc,char*argv[])
{
	//new
	int *p0 = (int*)malloc(sizeof(int));  //C++的强制转换 (int*)  Java的强制转换 (int)
	int *p1 = new int;                    //创建一个int类型的指针*p1
	*p1 = 12;                             //指针p1的数据内容是12
	cout << *p1<<' '<<p1 << endl;         //输出指针p1的数据内容、指针p1的地址
	delete p1;                            //删除指针p1


    /***一些类型匹配***/
	int *p3 = new int[5];  //创建一个长度为5的数组指针为*p3，注意new int()和new int[]的区别
	p3[0] = 34;            //填充该数组 p3[0]——p3[5]
	p3[1] = 56;
	p3[2] = 41;
	p3[3] = 2;
	p3[4] = 847;
	p3[5] = 17;
	for (int j = 0; j <= 5; j++)   //打印该数组
	{
		cout << p3[j] << endl;
	}
#if 0
	delete p3;
#endif
   
	int *p2 = new int(45); //创建一个数据内容为45的指针
	char* ch = new char;
	ch = "Jason";
	cout << *p2<<' '<<ch << endl;
	/*****************/


	system("pause");
    return 0;
}

