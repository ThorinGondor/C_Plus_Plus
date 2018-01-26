// Module12队列模拟.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <ctime>
#include<cstdlib>
#include "Quene.h"
using namespace std;
bool newcustomer(double x);

int main()
{
	srand(time(0));

	int qs;
	cout << "Enter the Max Size of Quene! \n";
	cin >> qs;
	Quene line(qs);

	int hours;
	cout << "Enter the number of simulation hours: \n";
	cin >> hours;
	long cyclelimit = 60 * hours;

	double perhour;
	cout << "Enter the Average Number of Customers per hour: \n";
	cin >> perhour;
	double min_per_cust = 60;

	Item temp;
	long turnaways = 0;
	long customers = 0;

	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))
		{
			if (line.isFull())
				turnaways++;
			else
			{
				customers++;
				temp.setInfo(cycle);
				line.enquene(temp);
			}
		}
		
	}

	system("pause");
    return 0;
}

