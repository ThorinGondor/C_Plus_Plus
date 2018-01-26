#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

/****基类：所有的乒乓球手****/
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

/****派生类：VIP乒乓球手****/
class PlayerVIP:public TableTennisPlayer  //公有继承: 即 is-a 关系: VIPplayer is a TableTennisPlayer.
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

