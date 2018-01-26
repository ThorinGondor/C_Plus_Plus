// Module16使用backinsertiteratorinsertiterator迭代器.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void Show(string &s)
{
	cout << s << "--";
}

int main(int argc, char* argv[])
{
	//创建三个string类数组
	string s1[4] =
	{
		"Stephen Curry",
		"Klay Thompson",
		"Kevin Durant",
		"Draymond Green"
	};
	string s2[2] =
	{
		"Lebron James",
		"Kevin Love"
	};
	string s3[2] =
	{
		"Kyrie Irving",
		"Gordon Hayward"
	};
    
	//创建一个vector向量
	vector<string> words(s1,s1+4);
	
	//数组内容复制到向量：
	copy(s1, s1 + 4, words.begin());

	//使用两种方法遍历输出vector
	for (auto pr = words.begin(); pr != words.end(); pr++)
	{
		cout << *pr << "--";
	}
	cout << endl;

	for_each(words.begin(), words.end(), Show);
	cout << endl;
	
	//将s2的元素插入到words的元素的后面，这种情况需要特殊的迭代器
	copy(s2, s2 + 2, back_insert_iterator<vector<string>>(words));
	for_each(words.begin(), words.end(), Show);
	cout << endl;

	//将s3的元素插入到words的元素的前面，需要特殊迭代器
	copy(s3, s3 + 2, insert_iterator<vector<string>>(words,words.begin()));
	copy(words.begin(), words.end(), ostream_iterator<string>(cout, "--"));  //第三种遍历方法，也是最好的遍历方法，使用了ostream_iterator
	cout << endl;

	system("pause");
    return 0;
}

