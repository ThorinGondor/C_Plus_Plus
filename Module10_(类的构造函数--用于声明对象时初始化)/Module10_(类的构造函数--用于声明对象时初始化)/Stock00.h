//����Ŀ֪ʶ�㣺
//���캯�����ڴ�������ʱ�Զ����ã���ʼ������
//�����������������ʱ�Զ����ã�һ�㲻�ڴ�������ʽ�ص��á�

//ͷ�ļ��������࣬�������캯������������������һϵ�к���ԭ��
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class Stock
{
public:
	Stock(const string &comp,double num, double price);  //���ǹ��캯���������ʼ��ʱ�Զ�����
	~Stock();                                                                //���������������������ʱ�Զ�����
	void sell(const double num, double price);
	void buy(const double num, double price);
	void show();
	void getSum()
	{
		total = shares*share_value;
	}
	Stock topvalue(Stock &St);
private:
	string company;  //��Ӧcomp
	double shares;  //��Ӧnum
	double share_value;  //��Ӧprice
	double total;
	

};


