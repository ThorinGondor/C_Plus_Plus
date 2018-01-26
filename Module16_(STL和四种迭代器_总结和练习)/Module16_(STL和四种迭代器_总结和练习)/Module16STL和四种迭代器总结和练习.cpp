// Module16STL和四种迭代器总结和练习.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>//used for STL
#include <vector>
#include <iterator> //used for iterator
#include <list>
using namespace std;

class Books
{
public:
	Books() {}
	Books(const string &na, int p) :name(na), pages(p) {}
	~Books() {}
	friend void Show(Books &b);
private:
	string name;
	int pages;
};

void Show(Books &b) 
{
	cout << "Name: " << b.name << "---"<< "Pages: " << b.pages << endl;
}
int main(int argc,char* argv[])
{
	//创建数组、向量，并复制。
	Books book[4] = 
	{
		Books("Visual Studio",571),
		Books("Java EE",1035),
		Books("C++ Primer Plus",927),
		Books("Learn OpenCV",433)
	};
	Books add[3] =
	{
		Books("Visual C++",785),
		Books("HTML 5",420),
		Books("LabView",379)
	};
	vector<Books> books(book,book+4); //定义一个向量，它的空间根据上述的数组的大小而定
	copy(book,book+4,books.begin());  //把第一个数组的元素复制到向量当中
	copy(add,add+3,back_insert_iterator<vector<Books>>(books));  //把第二个数组的元素插入到向量的元素的后面
	
	//遍历输出。
	        //法一：
	for (auto pr = books.begin();pr!=books.end();pr++)
	{
		Show(*pr);
	}
	cout << '\n';
	        //法二：
	vector<Books>::reverse_iterator it;
	for (it = books.rbegin();it!=books.rend();it++)
	{
		Show(*it);
	}

	system("pause");
    return 0;
}

