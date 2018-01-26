 // Module12改进后的新string类.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "String.h"
using namespace std;

int String::num_string = 0;

int String::HowMany()
{
	return num_string;
}


String::String(const char* s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
	num_string++;
}

String::String(const String &St)
{
	len = strlen(St.str);
	str = new char[len + 1];
	strcpy_s(str, len + 1, St.str);
	num_string++;
}

String::String()
{
	str = new char[1];
	str[0] = '\0';
	num_string++;
}

String::~String()
{
	cout << "system end ! \n";
}

String &String::operator=(const String &St)
{
	delete[] str;
	len = strlen(St.str);
	str = new char[len + 1];
	strcpy_s(str, len + 1, St.str);
	return *this;
}

String &String::operator=(const char* s)
{
	delete[] str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
	return *this;
}

char &String::operator[](int i)
{
	return str[i];
}

ostream &operator<<(ostream &os, const String &St)
{
	os << St.str;
	return os;
}

istream &operator>>(istream &is, String &St)
{
	char temp[String::CinLimi];
	is.get(temp, String::CinLimi);
	if(is)
	{
		St = temp;
	}
	while(is && is.get()!='\n')
	{
		continue;
	}
	return is;
}

