// Module16练习题8.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
#include <string>
using namespace std;

int main(int argc, char* agv[])
{
	//创建两个set集合并输入姓名
	set<string> box;
	string buff;
	cout << "Please Enter Mat's friends' names: \n";
	while (cin >> buff&&buff != "quit")
	{
		box.insert(buff);
	}
	for (auto pr = box.begin(); pr != box.end(); pr++)
	{
		cout << *pr << "--";
	}
	cout << '\n';

	set<string> cup;
	cout << "Please Enter Pat's friends' names: \n";
	while (cin>>buff&&buff!="quit")
	{
		cup.insert(buff);
	}
	for (auto pr = cup.begin(); pr != cup.end(); pr++)
	{
		cout << *pr << "--";
	}
	cout << '\n';

	//合并列表,set_union();方法，该方法还能自动除去两个表的重复的元素
	set<string> container;
	set_union(
		box.begin(), box.end(), 
		cup.begin(), cup.end(), 
		insert_iterator<set<string>>(container, container.begin())
	);
	copy(container.begin(), container.end(), ostream_iterator<string>(cout, "--"));
	system("pause");
    return 0;
}

