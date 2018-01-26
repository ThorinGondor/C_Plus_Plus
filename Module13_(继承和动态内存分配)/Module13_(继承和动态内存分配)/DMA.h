#include "stdafx.h"
#include <iostream>
using namespace std;

class baseDMA
{
public:
	//声明构造函数、复制构造函数，以及一个析构函数：
	baseDMA(char* l,int r);
	baseDMA(const baseDMA &bD);
	virtual~baseDMA();
	//声明两个重载运算符：
	baseDMA &operator=(const baseDMA &bD);
	friend ostream &operator<<(ostream &os, const baseDMA &bD);

	void baseDMA::show();
private:
	char* label;  //使用了new，需要复制构造函数
	int rating;
};

class hasDMA:public baseDMA
{
public:
	//声明构造函数、复制构造函数、析构函数
	hasDMA(char* s,char* l,int r);
	hasDMA(char* s, const baseDMA &bD);
	hasDMA(const hasDMA &hD);
	~hasDMA();
	//声明重载运算符
	hasDMA &operator=(const hasDMA &hD);//用于返回派生类的对象,便于传递对象
	friend ostream &operator<<(ostream &os, const hasDMA &hD);//用于代替传统的void show();方法

private:
	char* style; //使用了new，需要复制构造函数
};

