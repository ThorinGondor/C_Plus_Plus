// Module13练习1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "CD.h"
using namespace std;

inline void Bravol(const CD &disk)
{
	disk.report();
}

int main(int argc,char* argv[])
{
	CD c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flat","Alfred Brendel","Phillips",2,57.17);
	c1.report();
	c2.report();
	cout << endl;

    CD *pcd = &c1;
	pcd->report();
	pcd = &c2;
	pcd->report();
	cout << endl;

	Bravol(c1);
	Bravol(c2);

	system("pause");
    return 0;
}


