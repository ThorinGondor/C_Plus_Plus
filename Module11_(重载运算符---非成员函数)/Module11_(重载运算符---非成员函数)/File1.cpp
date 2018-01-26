#include "stdafx.h"
#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

Formular::Formular(string na, double t, double o_c)
{
	name = na;
	time = t;
	oil_consume = o_c;
}

Formular::~Formular()
{
	cout << "System End;" << endl;
}

Formular operator+(const Formular &F0, const Formular &F1)  //ÖØÔØÔËËã·û
{
	Formular Fsum = Formular("No Name",0,0);
	Fsum.name = F0.name + " & "+F1.name;
	Fsum.time = F0.time + F1.time;
	Fsum.oil_consume = F0.oil_consume + F1.oil_consume;
	return Fsum;
}

School::School(const int flo)
{
	floor = flo;
}

School::School(const int flo,const int ro)
{
	floor = flo;
	room = ro;
}

School::~School()
{
	cout << "System End; " << endl;
}
