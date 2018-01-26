#include "stdafx.h"
#include<iostream>
#include <string>
#include "TV.h"
using namespace std;

TV::TV(int s, int m_c) :state(s), maxchannel(m_c), channel(1), volume(5), mode(Cable), input(tv)
{
}

bool TV::Volume_Up()
{
	if (volume < max_volume)
	{
		volume++;
		return true;
	}
	else
		return false;
}

bool TV::Volume_Down()
{
	if (volume > min_volume)
	{
		volume--;
		return true;
	}
	else
		return false;
}

void TV::Channel_Up()
{
	if (channel < maxchannel)
	{
		channel++;
	}
	else
	{
		channel = 0;
	}
}

void TV::Channel_Down()
{
	if (channel > 0)
		channel--;
	else
		channel = maxchannel;
}

void TV::setMode()
{
	mode = (mode == Antenna) ? Cable : Antenna;
}

void TV::setInput()
{
	input = (input == tv) ? DVD : tv;
}

void TV::ShowSettings()
{
	cout << "The State is: " << (state==on?"on":"off") << endl;
	cout << "The Volume is: " << volume << endl;
	cout << "The Channel is: " << channel << endl;
	cout << "The Mode is: " << ((mode == Antenna) ? "Antenna" : "Cable") << endl;
	cout << "The Input is: " << ((input == tv) ? "tv" : "DVD") << endl << endl;
}

void TV::setRemoteStyle(Remote &Rt)
{
	if(isOn())
		Rt.setStyle();
}

/********************************************************************************************************************/

bool Remote::Volume_Up(TV &t)
{
	return t.Volume_Up();
}

bool Remote::Volume_Down(TV &t)
{
	return t.Volume_Down();
}

void Remote::Channel_Up(TV &t)
{
	t.Channel_Up();
}
void Remote::Channel_Down(TV &t)
{
	t.Channel_Down();
}

void Remote::setMode(TV &t)
{
	t.setMode();
}

void Remote::getStyle()
{
	cout << (style == Regular_Style ? "Regular_Style" : "Contact_Style") << endl;
}

void Remote::setStyle()
{
	style = (style == Regular_Style) ? Contact_Style : Regular_Style;
}

