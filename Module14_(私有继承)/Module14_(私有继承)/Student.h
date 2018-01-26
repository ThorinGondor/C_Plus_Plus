#include "stdafx.h"
#include <iostream>
#include <string>
#include <valarray>
using namespace std;

class Student:private string,private valarray<double>
{
private:
	typedef valarray<double> ValArray;
	ValArray scores;

public:
	//һϵ�й��캯�������ƺ����Լ���������
	Student(string &na, int n):string(na),scores(n){}
	Student():string(),scores(){}
	Student(string &na):string(na),scores(){}
	Student(int n):string(),scores(n){}
	Student(string &na, const ValArray &VA):string(na),scores(VA){}
	~Student(){}
	//����һЩ����
	double getAverage();
	double &operator[](int i);  //ʹ��valarrray���е�operator[]�������������е��κ�����
	string getName()const;
};

/***********************************/
