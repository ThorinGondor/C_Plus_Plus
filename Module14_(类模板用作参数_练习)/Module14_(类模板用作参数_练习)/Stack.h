#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template <class Type>
class Stack
{
public:
	//构造函数、复制函数、析构函数
	Stack();
	Stack(int ss);
	Stack(const Stack &St);
	~Stack();

	//声明一系列函数方法
	bool isEmpty();
	bool isFull();
	bool Push(const Type &item);
	bool Pop(Type &item);
	Stack &operator=(const Stack &St);
private:
	int StackSize;//栈的最大容量
	Type *items; //建立栈的对象items
	int top;  //它可以表示栈的顶部
};

template<class Type>
Stack<Type>::Stack():StackSize(10),top(0)
{
	items = new Type[StackSize];
	cout << "System Worked! \n";
}
template<class Type>
Stack<Type>::Stack(int ss):StackSize(ss),top(0) //构造函数
{
	items = new Type[StackSize];
}

template <class Type>
Stack<Type>::Stack(const Stack &St)  //复制构造函数
{
	StackSize = St.StackSize;
	items = new Type[StackSize];
	top = St.top;
	for (int i = 0; i < StackS; i++)
	{
		items[i] = St.items[i];
	}
}

template<class Type>
Stack<Type>::~Stack()
{
	cout << "System End! \n";
}

template <class Type>
bool Stack<Type>::isEmpty()
{
	return top == 0;
}

template<class Type>
bool Stack<Type>::isFull()
{
	return top == StackSize - 1;
}

template <class Type>
bool Stack<Type>::Push(const Type &item)
{
	if (top < StackSize)
	{
		top++;
		items[top] = item;
		cout << "Try: " << items[top] << endl;
		return true;
	}
	else
		return false;
}

template <class Type>
bool Stack<Type>::Pop(Type &item)
{
	if (top > 0)
	{
		item = items[top];
		top--;
		return true;
	}
	else
		return false;
}
template <class Type>
Stack<Type> &Stack<Type>::operator=(const Stack &St)
{
	delete[] items;
	StackSize = St.StackSize;
	items = new Type[StackSize];
	for (int i = 0; i < StackS; i++)
	{
		items[i] = St.items[i];
	}
	return *this;
}