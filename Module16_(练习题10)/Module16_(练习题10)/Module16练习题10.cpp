// Module16练习题10.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

struct Review
{
	string title;
	int rating;
	int price;
};

bool FillInfo(Review &buff)
{
	cout << "Please Enter The Title: \n";
	string temp;
	getline(cin, temp);
	
	if (temp == "quit")
		return false;
	buff.title = temp;
	cout << "Please Enter The rating: \n";
	cin >> buff.rating;
	cout << "Please Enter The price: \n";
	cin >> buff.price;
	return true;
}

void ShowReview(Review &r)
{
	cout << "Title: " << r.title << endl;
	cout << "Rating: " << r.rating << endl;
	cout << "Price: " << r.price << endl;
}

bool CompareTool_0(Review r0, Review r1)
{
	if (r0.rating > r1.rating)
		return false;
	else
		return true;
}

bool CompareTool_1(Review r0, Review r1)
{
	if (r0.price > r1.price)
		return false;
	else
		return true;
}

int main(int argc, char* argv[])
{
	vector<Review> vs;
	Review buff;
	while (FillInfo(buff))
	{
		vs.push_back(buff);
		while (cin.get()!='\n')
		{
			continue;
		}
	}
	
	cout << "The origin vector:\n";
	for_each(vs.begin(), vs.end(), ShowReview);  //遍历输出
	cout << endl;
	
	//按照自定义的排序方式分类
	sort(vs.begin(), vs.end(),CompareTool_0);
	cout << "Sorted By Rating:\n";
	for_each(vs.begin(), vs.end(), ShowReview);  //遍历输出
	cout << endl;

	//按照自定义的排序方式分类
	sort(vs.begin(), vs.end(), CompareTool_1);
	cout << "Sorted By Price:\n";
	for_each(vs.begin(), vs.end(), ShowReview);
	cout << endl;


	system("pause");
    return 0;
}

