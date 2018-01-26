#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template<class Item>
class Queue
{
private:
	class Node  //Queue类中嵌套了一个Node类
	{
	public:
		Item item;
		Node *next;
		Node() {}
		Node(const Item &it) :Item(it), next(NULL) {}
	};
	Node *front;
	Node *rear;
	int items;
	const int Queue_Size;
public:
	Queue(int qs = 10);
	
	bool isEmpty();
	bool isFull();
	bool enqueue(const Item &item);
	bool dequeue(Item &item);
	void show();
};

template<class Item>
Queue<Item>::Queue(int q_s):Queue_Size(q_s)
{
	front = NULL;
	rear = NULL;
	items = 0;
}
template <class Item>
bool Queue<Item>::isEmpty()
{
	return items == 0;
}

template <class Item>
bool Queue<Item>::isFull()
{
	return items == Queue_Size;
}

template <class Item>
bool Queue<Item>::enqueue(const Item &item)
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
bool Queue<Item>::dequeue(Item &item)
{
	if (isEmpty())
		return false;
	else
	{
		Node *buff = new Node;
		buff = front;
		item = front->item;
		front = front->next;
		delete buff;
		items--;
		return true;
	}
}

template <class Item>
void Queue<Item>::show()
{
	cout << "The Queue Size is: " << Queue_Size << endl;
}