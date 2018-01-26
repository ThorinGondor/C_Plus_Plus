// Module7递归.cpp: 
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void countdown(int n);

int main()
{
	int n;
	cin >> n;
	countdown(n);
	system("pause");
    return 0;
}

void countdown(int n)
{
	cout << n<<endl;
	if (n > 0) 
	{
		countdown(n-1);
	}
	cout << n << "kaboom!\n";
}
