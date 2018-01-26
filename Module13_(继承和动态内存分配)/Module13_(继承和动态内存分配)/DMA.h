#include "stdafx.h"
#include <iostream>
using namespace std;

class baseDMA
{
public:
	//�������캯�������ƹ��캯�����Լ�һ������������
	baseDMA(char* l,int r);
	baseDMA(const baseDMA &bD);
	virtual~baseDMA();
	//�������������������
	baseDMA &operator=(const baseDMA &bD);
	friend ostream &operator<<(ostream &os, const baseDMA &bD);

	void baseDMA::show();
private:
	char* label;  //ʹ����new����Ҫ���ƹ��캯��
	int rating;
};

class hasDMA:public baseDMA
{
public:
	//�������캯�������ƹ��캯������������
	hasDMA(char* s,char* l,int r);
	hasDMA(char* s, const baseDMA &bD);
	hasDMA(const hasDMA &hD);
	~hasDMA();
	//�������������
	hasDMA &operator=(const hasDMA &hD);//���ڷ���������Ķ���,���ڴ��ݶ���
	friend ostream &operator<<(ostream &os, const hasDMA &hD);//���ڴ��洫ͳ��void show();����

private:
	char* style; //ʹ����new����Ҫ���ƹ��캯��
};

