// Module16STL和string类.cpp: 定义控制台应用程序的入口点。
/****
   本例（1）演示：sor();方法，使用默认排序方法进行排序。next_permutation();方法，该方法将区间转换为下一种排序方式
   本例（2）演示：sort()方法对vector的元素进行排序，需注意这里vector本身不存在默认排序方法，需要自定义一个排序方法（bool CMP(){}）
****/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

bool cmp(string a,string b)
{
	return a.length() < b.length();
}
int main(int argc,char* agrv[])
{
	/****（1）STL和string类****/
	string letters;
	cin >> letters;
	sort(letters.begin(), letters.end());
	cout << letters << endl;
	while (next_permutation(letters.begin(),letters.end()))  //下一种排序方法对letters进行排序
	{
		cout << letters << endl;
	}
	
	/****（2）利用sort方法对vector存储的元素进行排序****/
	string lines[4] = { "Kimi","Vettel","Hamilton","Alonso" };
	vector<string> list0(lines,lines+4);
	sort(list0.begin(), list0.end(),cmp);  //不存在默认的排序方式，因此必须自定义一个排序方式，这里自定义了一个: bool cmp() {}
	copy(list0.begin(), list0.end(), ostream_iterator<string>(cout, "---"));
	
	system("pause");
    return 0;
}

