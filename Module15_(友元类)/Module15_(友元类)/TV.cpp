#include "stdafx.h"
#include <iostream>
#include <string>
#include "TV.h"
using namespace std;


bool TV::vol_Up()
{
	if (volume < MaxVol)
	{
		volume++;
		return true;
	}
	else
		return false;
}

bool TV::vol_Down()
{
	if (volume > MinVol)
	{
		volume--;
		return true;
	}
	else
		return false;
}

void TV::cha_Up()
{
	if (channel < max_channel)
	{
		channel++;
	}
	else
		channel = 1;
}

void TV::cha_Down()
{
	if (channel > 1)
		channel--;
	else
		channel = max_channel;
}

void TV::showSettings()
{
	cout << "The TV State is: " << (state == off ? "off" : "on") << endl;
	if (isOn())
	{
		cout << "volume is: " << volume << endl;
		cout << "Channel is: " << channel << endl;
		cout << "Mode is: " << (mode == Antenna ? "Antenna" : "Cable") << endl;
		cout << "Input is: " << (input == DVD ? "DVD" : "tv") << endl;
	}
}

