// Module10类与对象练习.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include "NBAleague.h";
using namespace std;

NBAleague::NBAleague(string nam, int in_m,int in_at, int out_m,  int out_at)
{
	name = nam;
	in_made = in_m;
	in_attempt = in_at;
	out_made = out_m;
	out_attempt = out_at;
	getInPer(in_made,in_attempt);
	getOutPer(out_made, out_attempt);
}

NBAleague::~NBAleague()
{
	cout << "Player Info end; " << endl;
}

void NBAleague::show()
{
	cout <<"Name: "<< name << endl;
	cout << "In_Made: "<<in_made << endl;
	cout << "In_Attempt: "<<in_attempt << endl;
	cout << "Out_Made: "<<out_made << endl;
	cout << "Out.Attempt: "<<out_attempt << endl;
	cout << "In_Percent: "<<in_percent << endl;
	cout << "Out_Percent: "<<out_percent << endl <<endl;
}


