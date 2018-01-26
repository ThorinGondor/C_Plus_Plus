// Module16对vector矢量的操作，使用迭代器iterator.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>  //需要添加vector头文件
using namespace std;
struct Review
{
	string title;
	int rating;
};

inline bool FullReview(Review &r)
{
	cout << "Please Enter The Book Title: ";
	getline(cin,r.title);
	if (r.title == "quit")
		return false;
	cout << "Please Enter The Book Rating: ";
	cin >> r.rating;
	return true;
}

inline bool ShowReview(Review &r)
{
	cout << r.title << endl;
	cout << r.rating << endl;
	return true;
}

int main(int argc,char* argv[])
{
	vector<Review> books;
	Review buffer;
	while (FullReview(buffer))  //获取对象buffer的成员数据
	{
		books.push_back(buffer);  //将获取到的对象buffer加入vector的元素当中
		
		while (cin.get() != '\n') //将可能剩余的回车符给消化掉，使得下一个循环当中，getline可以正常工作
		{continue;}	
	}
	int num = books.size();
	if (num > 0)
	{
		vector<Review>::iterator it;  //iterator迭代器的指针pd，可以指向vector的任一一个元素。

        /*****使用迭代器遍历输出****/
		for (it= books.begin(); it != books.end(); it++)  //books.begin();这是vector的一个方法，可以获取第一个元素的地址，
		{
			ShowReview(*it);  //遍历所有元素并输出
		}

		cout << "Now Lets Erase three items;\n";
		cout << "After Erase: \n";
		if (num > 3)
		{
			vector<Review> oldlist(books);  //复制（备份）vector的books对象到vector的oldlist对象
			books.erase(books.begin(), books.begin()+ 3);  //vector的一个方法：可以删去其中任意的元素
			/*****使用迭代器遍历输出****/
			for (it = books.begin(); it != books.end(); it++)
			{
				ShowReview(*it);
			}
			books.swap(oldlist);//两个vector的对象互相交换元素
			cout << "After the swap,the Vector::Book is: \n";
			for(it=books.begin();it!=books.end();it++)
			{
				ShowReview(*it);
			}
			cout << "After the swap,the Vector::Old_List is: \n";
			for (it = oldlist.begin(); it != oldlist.end(); it++)
			{
				ShowReview(*it);
			}
		}
	}
	system("pause");
    return 0;
}

