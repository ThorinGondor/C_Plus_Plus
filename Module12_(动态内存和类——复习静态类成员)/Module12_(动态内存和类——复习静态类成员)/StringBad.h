#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std; 

class StringBad
{
public:
	StringBad(StringBad &SB,char* line);
	~StringBad();
	void show()
	{
		cout << "The str is : "<<str << endl;
	}
private:
	char* str;
	int len;
	int num_string;
};

