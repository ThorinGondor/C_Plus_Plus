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
	//一系列构造函数、复制函数以及析构函数
	Student(string &na, int n):string(na),scores(n){}
	Student():string(),scores(){}
	Student(string &na):string(na),scores(){}
	Student(int n):string(),scores(n){}
	Student(string &na, const ValArray &VA):string(na),scores(VA){}
	~Student(){}
	//声明一些方法
	double getAverage();
	double &operator[](int i);  //使用valarrray特有的operator[]方法访问数组中的任何数据
	string getName()const;
};

/***********************************/
