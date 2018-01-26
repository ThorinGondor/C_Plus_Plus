#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Media
{
public:
	Media() :film_name("No Name"), film_time(0.0), film_ID(000000) {}
	Media(const string &fn, double ft,long fi) :film_name(fn), film_time(ft), film_ID(fi) {}
	virtual~Media() {}
	virtual void set();
	virtual void show();
private:
	string film_name;
	double film_time;
	long film_ID;
};

class Youku:virtual public Media
{
public:
	Youku():film_factory("No Factory"),Media(){}
	Youku(const string &ff,const string &fn, double ft, long fi):film_factory(ff),Media(fn,ft,fi) {}
	Youku(const string ff,const Media &M):film_factory(ff),Media(M){}
	void set();
	void show();
	virtual void getData();
	virtual void showData();
private:
	string film_factory;
};

class Tudou:virtual public Media
{
public:
	Tudou():film_year(1970),Media() {}
	Tudou(int fy, const string &fn, double ft, long fi):film_year(fy),Media(fn,ft,fi){}
	Tudou(int fy,const Media &M):film_year(fy),Media(M){}
	void set();
	void show();
	virtual void getData();
	virtual void showData();
private:
	int film_year;
};

class YoukuTudou:public Youku,public Tudou
{
public:
	YoukuTudou():Media(),Youku(),Tudou(){}
	YoukuTudou(int fy,string ff, const string &fn, double ft, long fi) :Media(fn,ft,fi), Youku(ff,fn,ft,fi), Tudou(fy,fn,ft,fi) {}
	YoukuTudou(const Media &M, string ff, int fy) :Media(M), Youku(ff,M), Tudou(fy,M) {}
	YoukuTudou(const Tudou &T, string ff) :Media(T), Youku(ff,T), Tudou(T) {}
	YoukuTudou(const Youku &Y, int fy) :Media(Y), Youku(Y), Tudou(fy,Y) {}
	~YoukuTudou(){}
	void set();
	void show();
};
