#include "stdafx.h"
#include <iostream>
#include <string>
#include <valarray>
#include "Student.h"
using namespace std;

double Student::getAverage()
{
	return scores.sum() / scores.size();
}

double &Student::operator[](int i)
{
	return scores[i];
}

string Student::getName()const
{
	return (string &)*this;  //对象强制转换为string类
}
