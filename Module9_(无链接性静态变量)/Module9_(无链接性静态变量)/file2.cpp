#include "stdafx.h"
#include <iostream>
using namespace std;

// ����һϵ�з��������Բ�ͬ�ı���
extern int Tom; //������һ���ļ���ȫ�ֱ���
static double Jason = 70.94; //���ر���
float Kimi = 61.99;  //ȫ�ֱ���
void remoteAccess()
{
	cout << "The Tom from File 2 is " << Tom << endl;
	cout << "The &Tom from File 2 is " << &Tom << endl;
	cout << "The File 2 Jason is " << Jason << endl;
	cout << "The File 2 &Jason is " << &Jason << endl;
	cout << "The File 2 Kimi is " << Kimi << endl;
	cout << "The File 2 &Kimi is " << &Kimi << endl;
}