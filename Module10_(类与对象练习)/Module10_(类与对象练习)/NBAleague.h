#include "stdafx.h"
#include<iostream>
#include <string>
using namespace std;

class NBAleague
{
public:
	NBAleague(string nam, int in_m, int in_at,int out_m,  int out_at);
	~NBAleague();
	void getInPer(const int in_m,const int in_at)
	{
		in_percent = (double)in_made / (double)in_attempt;
	}
	void getOutPer(const int out_m, const int out_at)
	{
		out_percent = (double)out_made / (double)out_attempt;
	}
	void show();
private:
	string name;
	int in_made;
	int in_attempt;
	int out_made;
	int out_attempt;

	double in_percent;
	double out_percent;
};
