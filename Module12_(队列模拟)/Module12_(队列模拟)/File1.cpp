#include "stdafx.h"
#include <iostream>
#include "Quene.h"
using namespace std;

Guest::Guest()
{
	arrive_time = 0;
	process_time = 0;
}

Guest::~Guest()
{
	cout << "system end! " << endl;
}

Quene::Quene(int qs) :quene_size(qs)
{
	front = NULL;
	rear = NULL;
	items = 0;
}

Quene::~Quene()
{
}

bool Quene::isEmpty()
{
	bool flag;
	if (front == NULL && rear == NULL)
		flag = true;
	else
		flag = false;
	return flag;
}

bool Quene::isFull()
{
	bool flag;
	if (quene_size == items)
		flag = true;
	else
		flag = false;
	return flag;
}

int Quene::queneCount()
{
	return items;
}

bool Quene::enquene(const Item &item)
{
	if(isFull())
	{
		return false;
	}
	else
	{
		Node *add = new Node;
		add->item = item;
		add->next = NULL;
		if (front == NULL)
			front = add;
		else
			rear->next = add;
		rear = add;
		items++;
		return true;
	}
}

bool Quene::dequene(Item &item)
{
	if (front == NULL)
		return false;
	item = front->item;
	items--;
	Node *temp = new Node;
	temp = front;
	front = front->next;
	delete temp;
	if (items = 0)
		rear = NULL;
	return true;
}

void Guest::setInfo(const long at)
{
	arrive_time = at;
	process_time = rand() % 3 + 1;
}
