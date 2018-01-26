#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

/****���ࣺ���е�ƹ������****/
class TableTennisPlayer
{
public:
	TableTennisPlayer(const string &na, int ag, bool hT);
	~TableTennisPlayer();
	string showName();
	bool HasTable();
	void ResetTable(bool v);
private:
	string name;
	int age;
	bool hasTable;
};

/****�����ࣺVIPƹ������****/
class PlayerVIP:public TableTennisPlayer  //���м̳�: �� is-a ��ϵ: VIPplayer is a TableTennisPlayer.
{
public:
	PlayerVIP(const string &nation, int lev, const string &na, int ag, bool hT);
	PlayerVIP(const string &nation, int lev, const TableTennisPlayer &TTP);
	~PlayerVIP();
	void ResetLevel(int lev);
	void showInfo();
private:
	string nationality;
	int level;
};

