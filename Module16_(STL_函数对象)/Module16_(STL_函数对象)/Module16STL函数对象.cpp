// Module16STL函数对象.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>
#include <list>
using namespace std;

template<class Type>
class TooBig
{
public:
	TooBig(const Type &t) :cutoff(t) {};
	~TooBig() {}
	bool operator()(const Type &v) { return v > cutoff; }  //元素的数据大于cutoff的返回true

private:
	Type cutoff;
};


int main(int argc, char* argv[])
{
	//创建对象、数组、list链表，复制数组到链表
	TooBig<int> f100(100);
	int vals[100] = { 50,100,90,180,60,210,415,88,188,201 };
	list<int> list0(vals, vals + 10);
	list<int> list1(vals, vals + 10);
	
	//遍历输出
	copy(list0.begin(), list0.end(), ostream_iterator<int>(cout, "---"));
	cout << '\n';
	copy(list1.begin(), list1.end(), ostream_iterator<int>(cout, "---"));
	cout << '\n';

	//删除操作，使用了TooBig类的操作符operator()
	list0.remove_if(f100);  //删除大于100的数据
	list1.remove_if(TooBig<int>(200));  //大于200

	//遍历输出
	copy(list0.begin(), list0.end(), ostream_iterator<int>(cout, "---"));
	cout << '\n';
	copy(list1.begin(), list1.end(), ostream_iterator<int>(cout, "---"));
	cout << '\n';

	system("pause");
    return 0;
}

