// Module16使用vector存储class对象并操作该vector.cpp: 定义控制台应用程序的入口点。
/*使用了iterator，还使用了vector模板的一系列方法,下示最重要的四种：
                                               xxx.begin();
										       xxx.end();
										       xxx.push_back(sth);
										       xxx.swap(yyy);
*/
#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class NBA_Player_Info
{
public:
	NBA_Player_Info(const string &f_n, const string &l_n, int att, int md);
	~NBA_Player_Info();
	friend void ShowInfo(NBA_Player_Info &NPI);  //友元使得该函数可以访问该类的成员
private:
	const string first_name;
	const string last_name;
	string team;
	int attempt;
	int made;
	double rate;
};

NBA_Player_Info::NBA_Player_Info(const string &f_n,const string &l_n,int att,int md):first_name(f_n),last_name(l_n),attempt(att),made(md)
{
	rate = (double)md / (double)att;
}

NBA_Player_Info::~NBA_Player_Info()
{
	cout << "This Player Info is End! \n";
}

inline void ShowInfo(NBA_Player_Info &NPI)
{
	cout << NPI.first_name << NPI.last_name << endl;
	cout << "The Attempt is: " << NPI.attempt << endl;
	cout << "The Made is: " << NPI.made << endl;
	cout << "The Rate is: " << NPI.rate << endl;
	cout << endl;
}

int main(int agrc, char* agrv[])
{
	NBA_Player_Info *player[3] = 
	{
		new NBA_Player_Info("Stephen","Curry",784,406), 
		new NBA_Player_Info("Derrick","Rose",571,247),
		new NBA_Player_Info("Klay","Thompson",680,344),
	};
	vector<NBA_Player_Info> players;
	for (int i = 0; i < 3; i++)
	{
		players.push_back(*player[i]);
	}
	vector<NBA_Player_Info>::iterator it;
	for (it = players.begin(); it != players.end(); it++)
	{
		ShowInfo(*it);
	}
	//对于上述for循环遍历，还有很多别的写法，以下使用auto和for_each
	for_each(players.begin(), players.end(), ShowInfo);
	
	for (auto pr = players.begin();pr!=players.end();pr++)
	{
		ShowInfo(*pr);
	}
	system("pause");
    return 0;
}

