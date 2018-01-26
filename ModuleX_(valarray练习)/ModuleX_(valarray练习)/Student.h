#include "stdafx.h"
#include <iostream>
#include <valarray>
#include <string>
using namespace std;

class Student
{
public:
	Student(const string na,int n);
	Student(const string na, valarray<double> sc);
	~Student();
	double getAverage();
	double getSum();
	double getScore(int i);
	void SetScore(int n);
private:
	string name;
	valarray<double> scores;
};

