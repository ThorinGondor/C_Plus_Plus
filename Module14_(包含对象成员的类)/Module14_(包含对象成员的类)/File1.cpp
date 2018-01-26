#include "stdafx.h"
#include <iostream>
#include <string>
#include<valarray>
#include "Student.h"
using namespace std;

void Student::setArray(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Please Enter a Score: ";
		cin >> scores[i];
	}
}

double Student::getAverage() const
{
	return scores.sum()/ scores.size();
}

string Student::getName() const
{
	return name;
}

double &Student::operator[](int i) //��ȡscores����ĵ�i��Ԫ�ص�����
{
	return scores[i];
}

double Student::getScore(int i) const
{
	return scores[i];
}

void Student::showScores()const
{
	for (int i = 0; i < scores.size(); i++)
	{
		cout << scores[i] << endl;
	}
	cout << endl;
}