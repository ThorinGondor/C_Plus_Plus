#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class CD
{
public:
	CD(char* pf,char* lb,int st,double pt);
	CD(const CD &d);
	CD();
	void report() const;
	//CD &operator=(const CD &d);
	virtual~CD();

private:
	char performers[50];  //表演者
	char label[20];  //品牌
	int selections;
	double playtime; //播放时间
};
/********************************************/
class Classic:public CD
{
public:
	Classic(char* mu, char* pf, char* lb, int st, double pt);
	Classic(char* mu, const CD &d);
	void report()const;
	virtual~Classic();

private:
	char* music; //歌曲作品名称
};
