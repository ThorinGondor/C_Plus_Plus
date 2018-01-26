#include "stdafx.h"
#include <iostream>
#include <string>
#include "Media.h"
using namespace std;


void Media::set()
{
	cout << "Please Enter The Film Name: ";
	cin.get();
	getline(cin, film_name);
	cout << "Please Enter The Film Time: ";
	cin >> film_time;
	cout << "Please Enter The Film ID: ";
	cin >> film_ID;
}

void Media::show()
{
	cout << "Film Name: " << film_name << endl;
	cout << "Film Time: " << film_time << endl;
	cout << "Film ID: " << film_ID << endl;
}

void Youku::set()
{
	Media::set();
	cout << "Please Enter The Film Factory: ";
	cin >> film_factory;
}

void Youku::getData()
{
	cout << "Please Enter The Film Factory: ";
	cin >> film_factory;
}

void Youku::show()
{
	Media::show();
	cout << "Film Factory: " << film_factory << endl;
}

void Youku::showData()
{
	cout << "Film Factory: " << film_factory << endl;
}

void Tudou::set()
{
	Media::set();
	cout << "Please Enter The Film Year: ";
	cin >> film_year;

}
void Tudou::getData()
{
	cout << "Please Enter The Film Year: ";
	cin >> film_year;

}

void Tudou::show()
{
	Media::show();
	cout << "Film Year: " << film_year << endl;

}

void Tudou::showData()
{
	cout << "Film Year: " << film_year << endl;

}

void YoukuTudou::set()
{
	Media::set();
	Youku::getData();
	Tudou::getData();
}

void YoukuTudou::show()
{
	Media::show();
	Youku::showData();
	Tudou::showData();
}