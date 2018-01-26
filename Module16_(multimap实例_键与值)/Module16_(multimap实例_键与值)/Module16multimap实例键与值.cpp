// Module16multimap实例键与值.cpp: 定义控制台应用程序的入口点。
//multimap存储的是一对一对的键和值，因此创建时在泛型定义里就写了如：<int,string>这样的定义
//因此创建multimap如下： multimap<int,string> codes;
//要想向multimap输入元素也必须是一对一对地输入，因此需要借助pair
//建立pair如下： pair<int,string> item0(30,"Curry");
//输入方法如下：codes.insert(item0);

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <map>  //used for multimap;
using namespace std;

int main(int argc, char* argv[])
{
	//创建一个multimap，并使用pair来把内容insert入map
	multimap<int, string> codes;
	pair<int, string> item0(30,"Stephen Curry");
	pair<int, string> item1(1, "Derrick Rose");
	pair<int, string> item2(24, "Kobe Bryant");
	pair<int, string> item3(44, "Jerry West");
	codes.insert(item0);
	codes.insert(item1);
	codes.insert(item2);
	codes.insert(item3);
	codes.insert(pair<int,string>(13,"James Harden"));
	codes.insert(pair<int,string>(1,"McGrady"));
	codes.insert(pair<int,string>(23,"Lebron James"));
	codes.insert(pair<int,string>(23,"Draymond Green"));
	codes.insert(pair<int,string>(1,"Stoudemire"));

	//使用map自带的迭代器遍历输出
	multimap<int, string>::iterator it;
	for (it = codes.begin(); it != codes.end(); it++)
	{
		cout << (*it).first << ";" << (*it).second << endl;
	}

	cout << codes.count(1) << endl;//获取数值为“1”的键的数量

	//获取键为1的对子，并将对子的键和值输出****这是难点！！！
	pair<multimap<int, string>::iterator, multimap<int, string>::iterator> range = codes.equal_range(1);
	for (it = range.first; it != range.second; it++)
	{
		cout << (*it).first <<"***"<< (*it).second << endl;
	}
	system("pause");
    return 0;
}

