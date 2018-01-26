#include "stdafx.h"
#include<iostream>
#include <string>
using namespace std;

class TV
{
public:
	enum {off,on};
	enum{min_volume = 0,max_volume = 20};
	enum {Antenna,Cable};
	enum {tv,DVD};
	friend class Remote;
	TV(int s, int m_c);
	~TV() {}
	void getState() { (state == on) ? on : off; }
	bool isOn() { return (state == on); }
	bool Volume_Up();
	bool Volume_Down();
	void Channel_Up();
	void Channel_Down();
	void setMode();
	void setInput();
	void ShowSettings();
	void setRemoteStyle(Remote &Rt);

private:
	int state;
	int maxchannel;
	int channel;
	int volume;
	int mode;
	int input;
};

/***********************/
class Remote
{
public:
	enum {Regular_Style,Contact_Style};
	friend class TV;
	Remote(int m = TV::tv) :mode(m), style(Regular_Style) {}
	~Remote() {}
	bool Volume_Up(TV &t);
	bool Volume_Down(TV &t);
	void Channel_Up(TV &t);
	void Channel_Down(TV &t);
	void setMode(TV &t);
	void getStyle();
	void setStyle();
private:
	int mode;
	int style;
};
