#include "stdafx.h"
#include <iostream>
#include "NBAleague.h";
using namespace std;

int main(int argc,char* argv[])
{
	NBAleague Np[3] = { NBAleague("Derrick Rose",230,441,23,71),NBAleague("Stephen Curry",324,542,406,821),NBAleague("Lebron James",523,944,102,327) };
	
	for (int i = 0; i < 3; i++)
	{
		Np[i].show();
	}

	system("pause");
	return 0;
}