#include "stdafx.h"
#include <iostream>
#include <string>
#include "HasFriends.h"
using namespace std;

inline void MainAPP()
{
	HasFriends<int> HF0 = HasFriends<int>(10);
	Counts();
	Report(HF0);
	
	HasFriends<int> *HF1 = new HasFriends<int>(20);
	Counts();
	Report(*HF1);
	
	HasFriends<double> HF2[2] = { HasFriends<double>(30), HasFriends<double>(35) };
	Counts();
	Report(HF2[0]);
	Report(HF2[1]);
	
	HasFriends<int> HF3[2] = { HasFriends<int>(47), HasFriends<int>(40) };
	Counts();
	Report(HF3[0]);
	Report(HF3[1]);
}

int main(int argc, char* argv[])
{
	MainAPP();
	system("pause");
	return 0;
}
