//������ʾ��Ԫ�࣬��Ԫ����Է��ʡ��޸���ĳ�Ա,�����Ե�����ĺ���������

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class TV
{
public:
	/***�ؼ���***/ 
	friend class Remote;  //ң��������TV�����Ԫ�࣬�����Ըı�TV��״̬�������Է��ʡ��޸�TV��ĳ�Ա

	enum { on, off };  //state��������
	enum { MinVol, MaxVol = 20 }; //��С���������
	enum { Antenna, Cable };  //mode�����ߡ�����
	enum { tv, DVD };  //input��TV��г��DVD����

	TV(int st=on, int mc=125) :state(st), max_channel(mc), channel(1), volume(10), mode(Cable), input(DVD) {}  //���ǽ�������ʱ��Ϊ���ã�����Ĭ��stΪon��mcΪ125.
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

	void getState(TV &t) { t.getState(); }  //������ɼ����������ɵ�ȥ����ԭ��ĺ�������
	bool vol_Up(TV &t) { return t.vol_Up(); }
	bool vol_Down(TV &t) { return t.vol_Down(); }
	void cha_Up(TV &t) { t.cha_Up(); }
	void cha_Down(TV &t) { t.cha_Down(); }
	void set_Mode(TV &t) { t.set_Mode(); }
	void set_Input(TV &t) { t.set_Input(); }
	void set_Cha(TV &t, int ch) { t.channel = ch; }  //������ɼ����������ɵط��ʡ��޸�ԭ��ĳ�Ա

private:
	int mode;
};

