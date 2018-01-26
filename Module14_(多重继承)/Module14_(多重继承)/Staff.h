#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Worker
{
public:
	//构造函数、复制构造函数，使用内联
	Worker():name(),ID(){}
	Worker(const string &na, long id) :name(na),ID(id){};
	virtual~Worker(){}
	//声明一些方法
	virtual void set();
	virtual void show();
private:
	string name;
	long ID;
};

/************************/
class Waiter:virtual public Worker
{
public:
	Waiter(){}
	Waiter(int p, const string &na, long id) :panacake(p), Worker(na,id){}
	Waiter(int p, const Worker &w):panacake(p),Worker(w){}
	void set();
	void show();
private:
	int panacake;
};

/***********************/
class Singer:virtual public Worker
{
public:
	Singer():voice(other),Worker(){}
	Singer(int Vt,const string na,long id):voice(Vt),Worker(na,id){}
	Singer(int Vt,const Worker &w):voice(Vt),Worker(w){}
	
	void set();
	void show();
protected:
	enum{other,alto,contralto,soprano,bass,baritone,tenor};
	enum{Vtypes=7};
private:
	string *pv[Vtypes];
	int voice;
};

/*****************************/
class SingerWaiter:public Singer,public Waiter
{
public:
	SingerWaiter(){}
	SingerWaiter(int p,int Vt,const string &na,long id) :Worker(na,id),Waiter(p,na,id),Singer(Vt,na,id) {}
	SingerWaiter(int p,int Vt,const Worker &wk):Worker(wk),Waiter(p,wk),Singer(Vt,wk){}
	SingerWaiter(const Waiter &wt,int Vt):Worker(wt),Waiter(wt),Singer(Vt,wt){}
	SingerWaiter(const Singer &sg, int p) :Worker(sg), Waiter(p,sg), Singer(sg) {}
	void set();
	void show();
};