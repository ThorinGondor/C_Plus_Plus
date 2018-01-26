// Module16List的insert方法及其他.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <list>
#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <queue>
using namespace std;

int main()
{
	//建立链表list和数组，并将数组的内容insert到链表元素中：
	//注：添加的方式不止insert一种，还有和vector一样通用的push_back，push_insert方法
	list<string> list0;
	string stuffs[5] = 
	{
		"C++ Primer",
		"Jave Web",
		"HTML",
		"FPGA",
		"Java EE"
	};
	string plus[3] = 
	{
		"LabView",
		"MatLab",
		"PHP"
	};
	list0.insert(list0.begin(),stuffs,stuffs+5);
	list0.insert(list0.end(), plus, plus + 3);
	list0.push_back("End");
	list0.push_front("start");
	
	//使用智能指针、ostream迭代器分别 遍历输出
	for (auto pr = list0.begin(); pr != list0.end(); pr++)
	{
		cout << *pr << "---";
	}
	cout << '\n';

	copy(list0.begin(),list0.end(),ostream_iterator<string>(cout,"---"));
    
	//list删除元素的方法remove();
	list0.remove("LabView");
	cout << "\nAfter The Remove:\n";
	copy(list0.begin(), list0.end(), ostream_iterator<string>(cout, "---"));
	
	//list的排序方法sort();
	list0.sort();
	cout << "\nAfter The Sort:\n";
	copy(list0.begin(), list0.end(), ostream_iterator<string>(cout, "---"));

/********************************************************************************/
	//queue类模板
	//注：queue类模板限制很多！不仅不允许随机访问队列元素，甚至不允许遍历队列
	queue<string> line;
	for (int i = 0; i < 5; i++)
	{
		line.push(stuffs[i]);  //进队五个元素
	}
	cout << "\nQueue:\n";
	cout << size(line) << endl;
	for (int i = 0; i < 2; i++)
	{
		line.pop(); //出队两个元素
	}
	cout << size(line) << endl;

	system("pause");
    return 0;
}

