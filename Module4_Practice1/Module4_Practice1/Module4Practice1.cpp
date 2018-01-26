// Module4Practice1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>

using namespace std;
void CandyBarSystem();
void PizzaSystem();
void ArrayDemo();

struct CandyBar
{
	string brand;
	double weight;
	int Calorie;
};
struct Pizza
{
	string factory;
	int distance;
	double weight;
};

void CandyBarSystem()
{
	CandyBar CB0, CB1, CB2;
	CandyBar *p[3] = { &CB0,&CB1,&CB2 };
	p[0]->brand = "Mocha Munch";
	p[0]->weight = 2.3;
	p[0]->Calorie = 350;

	cout << p[0]->brand << ";" << p[0]->weight << ";" << p[0]->Calorie << endl;
}

void PizzaSystem()
{
	Pizza P0, P1, P2;
	Pizza *p[3] = { &P0,&P1,&P2 };
	
	cout << "Please Enter Pizza0 info:";
	cin >> (p[0]->factory);
	cin >> (p[0]->distance);
	cin >> (p[0]->weight);

	cout << "Pizza0 info:\n";
	cout << (p[0]->factory) << endl;
	cout << (p[0]->distance) << endl;
	cout << (p[0]->weight) << endl;
}

void ArrayDemo()
{
	array<double, 4> arr = {2.3,4.5,68.7,89.07};
	array<double, 4> buff;
	buff = arr;
	for (int j = 0; j < 4; j++)
	{
		cout << buff[j]<<endl;
	}
}

int main(int argc, char* argv[])
{
	CandyBarSystem();
	PizzaSystem();
	ArrayDemo();
	system("pause");
	return 0;
}

