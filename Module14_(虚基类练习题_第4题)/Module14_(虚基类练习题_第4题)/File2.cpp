// Module14虚基类练习题第4题.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main(int argc, char* argv[])
{
	Gunslinger *G0 = new Gunslinger(24, "Stephen", "Curry");
	G0->Show();

	PokerPlayer *PP0 = new PokerPlayer("Klay", "Thompson");
	PP0->Show2();

	BadDude *BD0 = new BadDude(56,"Draymond", "Green");
	BD0->Show3();
	system("pause");
    return 0;
}

