//本例演示友元类，友元类可以访问、修改类的成员,还可以调用类的函数方法。

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class TV
{
public:
	/***关键：***/ 
	friend class Remote;  //遥控器类是TV类的友元类，它可以改变TV的状态，即可以访问、修改TV类的成员

	enum { on, off };  //state：开、关
	enum { MinVol, MaxVol = 20 }; //最小、最大音量
	enum { Antenna, Cable };  //mode：有线、无线
	enum { tv, DVD };  //input：TV调谐、DVD输入

	TV(int st=on, int mc=125) :state(st), max_channel(mc), channel(1), volume(10), mode(Cable), input(DVD) {}  //除非建立对象时人为设置，否则默认st为on，mc为125.
	~TV() {}

	void getState() { state = (state == on) ? off : on; }
	bool isOn() { return state == on; }
	bool vol_Up();
	bool vol_Down();
	void cha_Up();
	void cha_Down();
	void set_Mode() { mode = (mode == Cable) ? Antenna : Cable; }
	void set_Input() { input = (input == DVD) ? DVD : tv ; }
	void showSettings();

private:
	int state;
	int max_channel;
	int channel;
	int volume;
	int mode;
	int input;
};
/********************************************/
/********************************************/
class Remote
{
public:
	Remote(int m = TV::tv):mode(m) {}

	void getState(TV &t) { t.getState(); }  //括号里，可见它可以自由地去掉用原类的函数方法
	bool vol_Up(TV &t) { return t.vol_Up(); }
	bool vol_Down(TV &t) { return t.vol_Down(); }
	void cha_Up(TV &t) { t.cha_Up(); }
	void cha_Down(TV &t) { t.cha_Down(); }
	void set_Mode(TV &t) { t.set_Mode(); }
	void set_Input(TV &t) { t.set_Input(); }
	void set_Cha(TV &t, int ch) { t.channel = ch; }  //括号里，可见它可以自由地访问、修改原类的成员

private:
	int mode;
};

