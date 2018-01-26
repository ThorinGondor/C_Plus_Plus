// Module16函数和容器方法remove.cpp: 定义控制台应用程序的入口点。
/****
    本例演示对list进行remove的两种操作方法,代码如下所示：
	    list.remove(4);
	    remove(list.begin(),list.end(),4);
	
	两种方法都能删除元素，但是又有所区别，参考下例代码
****/

#include "stdafx.h"
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	//创建数组，list链表两个，并复制、输出：
	int arr[10] = { 4,5,4,2,2,3,4,8,1,4 };
	list<int> list0(arr, arr + 10);
	list<int> list1(list0);
	copy(list0.begin(), list0.end(), ostream_iterator<int>(cout, "---"));
	cout << '\n';
	copy(list1.begin(), list1.end(), ostream_iterator<int>(cout, "---"));
	cout << '\n';
	
	//对list的数据进行删除操作，两种remove方法：
	list0.remove(4);  //除去值为4的所有元素
	copy(list0.begin(), list0.end(), ostream_iterator<int>(cout, "---"));
	cout << '\n';
	cout << "list0 size: " << size(list0) << endl;  //元素中有四个4，因此删除后list长度从10降到6

	remove(list1.begin(),list1.end(),4);  //虽然也能删除4，但是list仍包含十个元素！！！,长度仍为10！！！
	copy(list0.begin(), list0.end(), ostream_iterator<int>(cout, "---"));
	cout << '\n';
	cout << "list1 size: " << size(list1) << endl;  //长度输出，10
	
	//结束
	system("pause"); 
    return 0;
}

