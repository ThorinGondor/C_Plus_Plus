// Module13类的继承.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "TableTennisPlayer.h"
using namespace std;

int main(int argc, char* argv[])
{
	//建立一个基类对象
	TableTennisPlayer *TTP0 = new TableTennisPlayer("Ma Long", 28, true);
	cout << TTP0->showName()<<" has a table? 1 means Yeah and 0 means No! "<<TTP0->HasTable() << endl;

	//建立一个子类对象
	PlayerVIP *PV0 = new PlayerVIP("China", 9, "Zhang Yining", 35, false);
	cout << PV0->showName() << " has a table? 1 means Yeah and 0 means No! " << PV0->HasTable() << endl;  //该类为继承基类的子类，此处它能够调用基类的方法 showName(); 和 hasTable();
	PV0->ResetLevel(6);
	PV0->showInfo();  

	//还可以创建一个基类指针直接指向派生类的对象PV0
	TableTennisPlayer * TTP1 = PV0;
	cout << TTP1->showName() << endl;  //但是它只能调用基类的方法，而不能调用派生类对象的方法

	//也可以创建一个基类引用，引用一个派生类对象
	PlayerVIP PV1 = PlayerVIP("Germany", 6, "Bole", 32, false);
	TableTennisPlayer &TTP2 = PV1;
	cout<<TTP2.showName() << endl;

	system("pause");
    return 0;
}

