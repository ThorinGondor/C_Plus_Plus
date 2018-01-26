#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

class Grand
{
public:
	Grand(int h=0):hold(h) {}
	~Grand() {}
	virtual void Speak() { cout << "I am in Grand Prix!" << endl; }  //�÷���Ϊ�鷽������������ʹ�ø÷��������������������д�÷���
	virtual int getValue() { return hold; }
private:
	int hold;
};

/**************************************/
class Superb :public Grand
{
public:
	Superb(int h):Grand(h) {}
	~Superb() {}
	void Speak() { cout << "I am in Superb Prix!" << endl; }
	virtual void Say() { cout << "I hold the Superb Value of "<< getValue() << endl; }
};

/***************************************/
class Magnificient :public Superb
{
public:
	Magnificient(char c = 'A' ,int h=0):ch(c),Superb(h) {}
	~Magnificient() {}
	void Speak() { cout << "I am in Magnificent Prix!" << endl; }
	void Say() { cout << "My Grade is " << ch << "and the Integer " << getValue() << endl; }
private:
	char ch;
};


inline Grand *GetOne()  //�ú��������������������ĳһ������Ķ���
{
	Grand *p = NULL;
	switch (rand()%3)
	{
	case 0:p = new Grand(rand() % 100);
		break;
	case 1:p = new Superb(rand() % 100);
		break;
	case 2:p = new Magnificient('A',rand() % 100);
		break;
	}
	return p;
}

int main(int argc,char* argv[])
{
	Grand *pg;
	Superb *ps;
	srand(time(0));
	for (int i = 0; i < 40; i++)
	{
		pg = GetOne();
		pg->Speak();
		if (ps = dynamic_cast<Superb*>(pg))  //����ܰ�ȫת�����򷵻�true���������ת�����򷵻�false
		{
			ps->Say();
			cout << "Transfer Succeed!\n";
		}
		else
			cout << "Transefer Failed!\n";
	}
	system("pause");
	return 0;
}