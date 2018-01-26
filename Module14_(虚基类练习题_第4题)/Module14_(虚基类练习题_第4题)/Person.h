#include "stdafx.h"
#include <iostream>
#include <string>
#include<time.h>
using namespace std;

class Person
{
public:
	Person();
	Person(string F_N,string L_N);
	virtual~Person();
	virtual void Show();
private:
	string First_Name;
	string Last_Name;
};

class Gunslinger: virtual public Person
{
public:
	Gunslinger() {}
	Gunslinger(int S_N,string F_N, string L_N);
	Gunslinger(int S_N, const Person &P);
	double Draw();
	void Show();
protected:
	double Shoot_Time;
	int Scar_Num;
};

class PokerPlayer:virtual public Person
{
public:
	PokerPlayer() {}
	PokerPlayer(string F_N, string L_N);
	PokerPlayer(const Person &P);
	int Draw2();
	void Show2();
protected:
	int Poker_Value;
};

class BadDude:public Gunslinger,public PokerPlayer
{
public:
	BadDude(int S_N, string F_N, string L_N);
	double Gdraw();
    int Cdraw();
	void Show3();
};
