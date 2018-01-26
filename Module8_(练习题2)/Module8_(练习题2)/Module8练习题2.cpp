// Module8练习题2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct CandyBar
{
	char* brand;
	double weight;
	int  calorie;
};

inline void showInfo(const CandyBar & CB)
{
	cout << CB.brand << endl;
	cout << CB.weight << endl;
	cout << CB.calorie << endl;
}

int main(int argc,char * argv[])
{
	const CandyBar CB0 =
	{
		"Millennium Munch",
		2.85,
		350
	};
	showInfo(CB0);
	system("pause");
    return 0;
}

