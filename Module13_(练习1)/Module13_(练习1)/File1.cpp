#include "stdafx.h"
#include <iostream>
#include <string>
#include "CD.h"
using namespace std;
/**************************************************/
CD::CD(char* pf, char* lb, int st, double pt)
{
	int len1 = strlen(pf);
	strcpy_s(performers, len1 + 1, pf);

	int len2 = strlen(lb);
	strcpy_s(label, len2 + 1, lb);

	selections = st;
	playtime = pt;
}

CD::CD(const CD &d)
{
	int len1 = strlen(d.performers);
	strcpy_s(performers, len1 + 1, d.performers);

	int len2 = strlen(d.label);
	strcpy_s(label, len2 + 1, d.label);

	selections = d.selections;
	playtime = d.playtime;
}

CD::CD()
{
	for (int i = 0; i < 50; i++)
	{
		performers[i] = '\0';
	}
	for (int i = 0; i < 20; i++)
	{
		label[i] = '\0';
	}
	selections = 0;
	playtime = 0.0;
}

void CD::report()const
{
	cout << "The Performer: "<<performers << endl;
	cout << "The Label: "<<label << endl;
	cout << "Selection: "<<selections << endl;
	cout << "PlayTime: "<<playtime << endl;

}

CD::~CD()
{
	cout << "CD System End! \n";
}

/***************************************/

Classic::Classic(char* mu, char* pf, char* lb, int st, double pt) :CD(pf, lb, st, pt)
{
	int len = strlen(mu);
	music = new char[len + 1];
	strcpy_s(music, len + 1, mu);
}

Classic::Classic(char* mu, const CD &d) :CD(d)
{
	int len = strlen(mu);
	music = new char[len + 1];
	strcpy_s(music, len + 1, mu);
}

void Classic::report()const
{
	cout << "Musi Name: " << music << endl;
	CD::report();
}

Classic::~Classic()
{
	delete[] music;
	cout << "Classic System End!\n";
}

