#include "stdafx.h"
#include <iostream>
#include <string>
#include "TableTennisPlayer.h"
using namespace std;

TableTennisPlayer::TableTennisPlayer(const string &na, int ag, bool hT)
{
	name = na;
	age = ag;
	hasTable = hT;
}

TableTennisPlayer::~TableTennisPlayer()
{
	cout << "System End! \n";
}

PlayerVIP::PlayerVIP(const string &nation, int lev, const string &na, int ag, bool hT) :TableTennisPlayer(na, ag, hT)
{
	nationality = nation;
	level = lev;
}

PlayerVIP::PlayerVIP(const string &nation, int lev, const TableTennisPlayer &TTP):TableTennisPlayer(TTP)
{
	nationality = nation;
	level = lev;
}

PlayerVIP::~PlayerVIP()
{
}

string TableTennisPlayer::showName()
{
	return name;
}

bool TableTennisPlayer::HasTable()//����ķ���
{
	return hasTable;
}

void TableTennisPlayer::ResetTable(bool v)//����ķ���
{
	hasTable = v;
}

void PlayerVIP::ResetLevel(int lev) //����ķ���
{
	level = lev;
}
void PlayerVIP::showInfo()  //����ķ���
{
	cout << "Nationality is "<<nationality << "; Level is " << level << "\n";
}