#include "stdafx.h"
#include <iostream>
using namespace std;

/***********Guest��***********/
class Guest
{
public:
	Guest();
	~Guest();
	void setInfo(const long at);
	long get_at()
	{
		return arrive_time;
	}
	int get_pt()
	{
		return process_time;
	}
private:
	long arrive_time;
	int process_time;
};

typedef Guest Item;

/************Quene��*************/
class Quene
{
public:
	Quene(int qs = Q_SIZE);
	bool isEmpty();
	bool isFull();
	int queneCount();
	bool enquene(const Item &item);
	bool dequene(Item &item);
	~Quene();

private:
	struct Node
	{
		Item item;
	    struct Node *next;  //next��ָ����һ���ڵ�
	};
	enum QueneMax {Q_SIZE = 10};
	Node *front;
	Node *rear;
	int items;
	const int quene_size;
};
