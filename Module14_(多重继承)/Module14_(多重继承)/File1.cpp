#include "stdafx.h"
#include <iostream>
#include <string>
#include "Staff.h"
using namespace std;

void Worker::set()
{
	cin >> name;
	cout << "Please Enter The ID: ";
	cin >> ID;
}
void Worker::show()
{
	cout << "The Name is: " << name<<endl;
	cout << "The ID is: " << ID << endl;
}

void Waiter::set()
{
	cout << "Please Enter The Waiter's Name: ";
	Worker::set();
	cout << "Please Enter The Waiter's Panacake: ";
	cin >> panacake;
}

void Waiter::show()
{
	Worker::show();
	cout << "Number of Panacake is: " << panacake << endl;
}

void Singer::set()
{
	cout << "Please Enter The Singer's Name: ";
	Worker::set();
	cout << "Please Enter The Singer's VoiceType: ";
	cin >> voice;
}

void Singer::show()
{
	Worker::show();
	cout << pv[voice] << endl;
}

void SingerWaiter::set()
{
	Waiter::set();
	Singer::set();
}

void SingerWaiter::show()
{
	Waiter::show();
	Singer::show();
}