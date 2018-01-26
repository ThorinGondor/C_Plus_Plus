#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template <class Item>  //������һ��Item�࣬ʹ�������queue���ڲ�����ʹ��Item��
class Queue
{
private:
	enum { Queue_Size = 10 };

	/*****************************************/
	//Ƕ���ࣺǶ����һ��Nodeָ����
	//�������е�item���壨Item���item���壩������ָ����һ����ָ��:*next������Node�Ĺ��캯��
	class Node
	{
	public:
		Item item;
		Node *next;
		Node() {}
		Node(const Item &it) :item(it), next(NULL) {}
	};
	/******************************************/

	Node *front;
	Node *rear;
	int items;
	const int qsize;
	Queue(const Queue &q) :qsize(0) {}
	Queue &operator=(const  Queue &q) { return *this; }
public:
	Queue(int qs = Queue_Size) :qsize(qs)
	{
		front = NULL;
		rear = NULL;
		items = 0;
	}
	~Queue() {}
	bool isEmpty();
	bool isFull();
	bool enQueue(const Item &item);
	bool deQueue(Item &item);
	int getItems();
};

template <class Item>
bool Queue<Item>::isEmpty()
{
	return items == 0;
}

template <class Item>
bool Queue<Item>::isFull()
{
	return items == qsize;
}

template <class Item>
bool Queue<Item>::enQueue(const Item &item)
{
	if (isFull())
		return false;
	else
	{
		Node *add = new Node;
		add->item = item;
		if (front == NULL)
			front = add;
		else
			rear->next = add;
		rear = add;
		items++;
		return true;
	}
}

template <class Item>
bool Queue<Item>::deQueue(Item &item)
{
	if (isEmpty())
	{
		return false;
	}
	else
	{
		Node *temp = new Node;
		temp = front;
		item = front->item;
		front = front->next;
		delete temp;
		items--;
		if (items == 0)
			rear = NULL;
		return true;
	}
}

template <class Item>
int Queue<Item>::getItems()
{
	return items;
}