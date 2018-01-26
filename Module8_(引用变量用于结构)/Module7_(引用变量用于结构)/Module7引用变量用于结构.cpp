// Module7引用变量用于结构.cpp: 定义控制台应用程序的入口点。
//&引用变量：不但可以作为变量用于绑定一个变量，还可以作为一个对象用于绑定结构的某个唯一的对象 （绑死）
//同时本节还演示了一下inline的用法
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct NBAplayer
{
	string name;
	int num;
	string team;
	double height;
	int made;
	int attempt;
	double percent;
};

//设置inline开头的函数，就能省去在头文件进行声明
inline void showData(const NBAplayer & player)  //以前我们传递对象时，这样写： void showData(NBAplayer player) {}，那么我们本节多加了一个“&”，这就意味着player这个对象只能绑定一个对象Np1了
{
	cout <<"The player's name is :"<< player.name << endl;
	cout << "Info:" << endl;
	cout << player.num << endl;
	cout << player.team << endl;
	cout << player.height << endl;
	cout << player.made << endl;
	cout << player.attempt << endl;
	cout << "percentage: "<<player.percent << endl;
}
inline void setPercentage(NBAplayer & player)
{
	player.percent = (double)player.made /(double)player.attempt;
}

int main(int argc, char * argv[])
{
	//创建对象Np
	NBAplayer Np1 =
	{
		"Stephen Curry",
		30,
		"warriors",
		1.91,
		234,
		406
	};
	NBAplayer Np2 =
	{
		"Danny Green",
		14,
		"Spurs",
		1.94,
		128,
		245
	};

	//使用内联函数，传递对象
	setPercentage(Np1);
	setPercentage(Np2);
	
	showData(Np1);
	showData(Np2);

	//程序结束
	system("pause");
    return 0;
}
