// Module16使用STL.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
using namespace std;

string &ToLower(string &st)
{
	transform(st.begin(), st.end(), st.begin(), tolower);
	return st;
}

int main(int argc, char* argv[])
{
	//建立vector并输入元素内容
	vector<string> words;
	string buff;
	while (cin>>buff&&buff!="quit")
	{
		words.push_back(buff);
	}
	for (auto pr = words.begin(); pr != words.end(); pr++)
	{
		cout <<*pr << ", ";
	}
	cout << '\n';

	//建立set集合，使用transform();方法将vector元素插入到set集合中
	set<string> wordset;
	transform(words.begin(), words.end(), insert_iterator<set<string>>(wordset, wordset.begin()),ToLower);
	copy(wordset.begin(), wordset.end(), ostream_iterator<string>(cout, "---"));
	cout << '\n';

	//建立map集合,并将vector元素出现的次数写入map的值
	map<string, int> wordmap;
	for (auto pr = wordset.begin();pr!=wordset.end();pr++)
	{
		wordmap[*pr] = count(words.begin(), words.end(), *pr);
	}
	for (auto pr = wordset.begin(); pr != wordset.end(); pr++)
	{
		cout << wordmap[*pr] << "+++";
	}

	system("pause");
    return 0;
}

