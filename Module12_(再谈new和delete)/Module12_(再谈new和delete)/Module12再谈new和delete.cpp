// Module12再谈new和delete.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class TestOnly
{
public:
	TestOnly(const string &s, int n);
	~TestOnly();
	void show();
private:
	string str;
	int number;
};

TestOnly::TestOnly(const string &s, int n)
{
	str = s;
	number = n;
}

TestOnly::~TestOnly()
{
	cout << str << " destroyed! \n" << endl;
}

void TestOnly::show()
{
	cout << str << endl;
	cout << number << endl;
}

/****本例演示：几种使用new的建立方法***/

int main(int argc, char* argv[])
{
	//（1）使用默认存储建立对象，利用指针和new
	TestOnly *p0 = new TestOnly("Kimi", 33);

	//（2）在自建的缓冲区建立对象，利用指针和new
	char* buffer = new char[1024];
	TestOnly *p1 = new (buffer)TestOnly("Alonso", 31);
	
	//（3）在上面已经自建的缓冲区进一步划出一片存储区域，建立新对象，还是用指针和new
	TestOnly *p2 = new(buffer + sizeof(TestOnly))TestOnly("Schumacher",41);

	p0->show();
	p1->show();
	p2->show();

	//注意，在删除指针的时候，有些可以用delete，有些则不行。例如p2，就只能手动地去调用析构函数结束该对象
	p2->~TestOnly();
	delete p0;
	delete p1;
	
	system("pause");
    return 0;
}

