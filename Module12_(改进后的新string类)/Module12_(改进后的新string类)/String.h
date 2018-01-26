#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std; 

class String
{
public:
	String(const char*s);
	String(const String &St);
	String();
	int getLength() { return len; }

	String &operator=(const String &St);
	String &operator=(const char*);
	char &operator[](int i);

	friend ostream &operator<<(ostream &os, const String &St);
	friend istream &operator>>(istream &is, String &St);

	static int HowMany();
   
	~String();

private:
	char * str;
	int len;
	static int num_string;
	static const int CinLimi = 80;
};

