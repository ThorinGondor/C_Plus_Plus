// Module9单独编译.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "coordin.h"
using namespace std;

int main()
{
	rect rplace;
	polar pplace;
	while (cin>>rplace.x>>rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers: ";
	}
	cout << "bye\n";
	system("pause");
    return 0;
}

