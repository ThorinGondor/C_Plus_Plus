#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template <class Type>  //定义一个泛型Type，该泛型可以接收不同类型的数据，例如int、double、string型等

class Stack
{
public:
	Stack();
	bool isEmpty();
	bool isFull();
	bool Push(const Type &item);
	bool Pop(Type &item);

private:
	enum{Max=10};
	Type items[Max];
	int top;
};

/*****************************************************/

template <class Type>
Stack<Type>::Stack()
{
	top = 0;  //栈初始化的时候，没有存储任何item，因此top=0;
}

template <class Type>
bool Stack<Type>::isEmpty()
{
	return top == 0;
}

template <class Type>
bool Stack<Type>::isFull()
{
	return top == Max-1;  //已经设最多Max=10，即可以装载10个item，则top从0积累到9！而不是1~10
}

template <class Type>
bool Stack<Type>::Push(const Type &item)
{
	if (top < Max)
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