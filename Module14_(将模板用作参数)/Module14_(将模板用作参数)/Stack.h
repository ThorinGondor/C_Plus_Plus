#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//定义一个泛型，用于接收各种类型的数据
template <class Type>

class Stack
{
public:
	enum{SIZE = 10};
	Stack(int ss = SIZE);
	Stack(const Stack &St);
	~Stack();
	bool isEmpty();
	bool isFull();
	bool Push(const Type &item);
	bool Pop(Type &item);
	Stack &operator=(const Stack &St);
private:
	int StackSize;
	Type* items;
	int top;
};

template <class Type>
Stack<Type>::Stack(int ss) :StackSize(ss), top(0)
{
	items = new Type[ss];
}

template <class Type>
Stack<Type>::Stack(const Stack &St)
{
	StackSize = St.StackSize;
	top = St.top;
	item = new Type[StackSize];
	for (int i = 0; i < StackS; i++)
	{
		items[i] = St.items[i];
	}
}

template <class Type>
Stack<Type>::~Stack()
{
	delete[] items;
	cout << "System end! \n";
}

template <class Type>
bool Stack<Type>::isEmpty()
{
	return top == 0;
}

template <class Type>
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