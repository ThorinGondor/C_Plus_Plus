// Module16用迭代器将数组复制到矢量中.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main()
{
	int arr[10] =
	{
		35,18,9,61,74,
		53,62,98,18,9
	};
	vector<int> vs(arr,arr+10);  //定义一个vector向量
	copy(arr, arr + 10, vs.begin());
	cout << "Copy Completed!\n";
	
	/****（1）使用迭代器遍历输出****/
	vector<int>::iterator it;
	for (it = vs.begin(); it != vs.end(); it++)
	{
		cout << *it << endl;
	}

	/****（2）重点：使用STL方法的 ostream_iterator 遍历输出****/
	copy(vs.begin(),vs.end(),ostream_iterator<int>(cout,";"));
	//该方法非常优秀！创建一个ostream_iterator迭代器<int>，这样能够遍历访问vector中的元素，并写入到cout里（相当于打印在控制台），“；”是分隔符，分隔符可以任意设置
	
	/****（3）重点：使用STL方法的 reverse_iterator 可以逆向输出****/
	cout << "\nMethod 3---(reverse_iterator): \n";
	vector<int>::reverse_iterator ri;
	for (ri = vs.rbegin(); ri != vs.rend(); ri++)
	{
		cout << *ri << "; ";
	}
	system("pause");
    return 0;
}

