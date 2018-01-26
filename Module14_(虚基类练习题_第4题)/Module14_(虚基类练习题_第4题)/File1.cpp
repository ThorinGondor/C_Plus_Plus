
#include "stdafx.h"
#include <iostream>
#include <string>
#include<time.h>
#include "Person.h"
using namespace std;

Person::Person()
{
	First_Name = "No F_Name";
	Last_Name = "No L_Name";
}

Person::Person(string F_N, string L_N)
{
	First_Name = F_N;
	Last_Name = L_N;
}
Person::~Person()
{
}

void Person::Show()
{
	cout << "The First Name is: " << First_Name << endl;
	cout << "The Last Name is: " << Last_Name << endl;
}

/************************************************************************/

Gunslinger::Gunslinger(int S_N, string F_N, string L_N) :Scar_Num(S_N), Person(F_N, L_N)
{
	Shoot_Time = Draw();
}

Gunslinger::Gunslinger(int S_N, const Person &P) :Scar_Num(S_N), Person(P)
{
	Shoot_Time = Draw();
}

double Gunslinger::Draw()
{
	srand(time(0));
	return (rand() % 100) + 1;
}

void Gunslinger::Show()
{
	Person::Show();
	cout << "Shoot_Time: " << Shoot_Time << endl;
	cout << "Scar_Num: " << Scar_Num << endl << endl;;
}

/***********************************************************************/

PokerPlayer::PokerPlayer(string F_N, string L_N) :Person(F_N, L_N)
{
	Poker_Value = Draw2();
}

PokerPlayer::PokerPlayer(const Person &P) : Person(P)
{
	Poker_Value = Draw2();
}

int PokerPlayer::Draw2()
{
	srand(time(0));
	return (rand() % 52) + 1;
}

void PokerPlayer::Show2()
{
	Person::Show();
	cout << "The Poker_Value is: " << Poker_Value << endl << endl;;
}

/**********************************************************************/

BadDude::BadDude(int S_N, string F_N, string L_N) :Person(F_N, L_N), Gunslinger(S_N, F_N, L_N)
{
	Shoot_Time = Gdraw();
	Poker_Value = Cdraw();
}

void BadDude::Show3()
{
	Gunslinger::Show();
	PokerPlayer::Show2();
}

double BadDude::Gdraw()
{
	return Gunslinger::Draw();
}

int BadDude::Cdraw()
{
	return PokerPlayer::Draw2();
}