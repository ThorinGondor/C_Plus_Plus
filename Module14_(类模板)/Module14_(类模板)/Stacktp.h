#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template <class Type>  //����һ������Type���÷��Ϳ��Խ��ղ�ͬ���͵����ݣ�����int��double��string�͵�

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
	top = 0;  //ջ��ʼ����ʱ��û�д洢�κ�item�����top=0;
}

template <class Type>
bool Stack<Type>::isEmpty()
{
	return top == 0;
}

template <class Type>
bool Stack<Type>::isFull()
{
	return top == Max-1;  //�Ѿ������Max=10��������װ��10��item����top��0���۵�9��������1~10
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