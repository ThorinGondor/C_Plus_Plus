// Module6分支语句.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc , char* argv[])
{
	/****##第五章补充：cin.get()的用法****/
	char ch[20];
	cin.get(ch,20).get();
	for (int i = 0; i < sizeof(ch)-1; i++)
	{
		cout << ch[i];
	}
	cout << '\n';

	/****（1）字符函数库CCTYPE****/
	char cr1;
	cin.get(cr1);

	bool flag1 = isalpha(cr1);
	char lower = tolower(cr1);
	char upper = toupper(cr1);
	bool digit = isdigit(cr1);

	cout << "isalpha? 5"<<flag1<<'\n';
	cout << "return lower:"<<lower << '\n';
	cout << "return upper:" << upper << '\n';
	cout << "isdigit? " << digit << '\n';
	
	/****（2）Switch****/
	int num;
	cin>>num;

	switch (num)
	{
	case 1:cout << "First" << endl;
		break;
	case 2:cout << "Second" << endl;
		break;
	}

	system("pause");
    return 0;
}

