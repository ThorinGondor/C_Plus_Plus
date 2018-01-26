// Module4指针.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(int argc ,char* argv[])
{
	/**（1）**/
	/***法一：***/
	int update;
	int *p;
	p = &update;  //*p的地址p指向了int类变量update的地址，因此随着update数据变化，*p的内容也随着变化
	update = 15;
	cout << *p << endl;
	
	/***法二：***/
	int higgens;
	int *pt = &higgens;  //省了一个语句，同样是将*pt的地址指向了higgens的地址 (&higgens)
	higgens = 75;
	cout << pt << ";" << *pt << endl;
	cout << &higgens << ";" << higgens<< '\n';
	

	/***法三：使用new来为指针分配内存***/
	int *pn = new int;  
	*pn = update;
	cout << *pn << ";" << pn << endl;
	delete pn;  //释放内存,而且只有对new方法下创建的指针，才能释放内存

	/****（2）new 方法创建动态数组***/
	int *px = new int[3];
	px[0] = 67; px[1] = 33; px[2] = 45;
	for (int i = 0; i < 3; i++)
	{
		cout << px[i] << endl;
	}
	delete[] px;  //如果是new []，那么删除也应写成 delete[] 

	/*****（3）指针运算******/
	int arr[5] = {26,93,72,89,56};
	int *pe = arr;  //此时pe指向第一个元素36的地址
	int *pd = arr;  //此时pd也指向第一个元素26的地址
	cout << pe << ";" << pd << endl;
	pe = pe + 1; //此时pe向后移动，指向第二个元素93的地址
	pd = pd - 1; //此时pd向前移动，指向最后一个元素56的地址
	cout << "Interval is : "<<pe - pd << endl;  //元素93和元素56之间的间隔就是2

	/***（4）strcpy_s();库函数方法***/
	char *pf = new char[30];
	char buffer[20] = "This is data buffer";
	strcpy_s(pf,20,buffer);  //strcpy_s();方法可以将字符串存进pf动态数组中
	
	for (int k = 0; k < 20; k++)
	{
        cout << pf[k] << "";
	}
	cout << '\n';
	

	system("pause");
    return 0;
}

