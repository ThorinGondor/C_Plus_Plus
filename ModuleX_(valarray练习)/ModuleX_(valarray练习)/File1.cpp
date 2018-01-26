#include "stdafx.h"
#include <iostream>
#include <valarray>
#include <string>
#include "Student.h"
using namespace std;

Student::Student(const string na, int n) :name(na), scores(n)
{
}

Student::Student(const string na, valarray<double> sc) : name(na), scores(sc)
{
}

Student::~Student()
{
	cout << "System End!" << endl;
}

double Student::getAverage()
{
	return scores.sum() / scores.size();
}

double Student::getSum()
{
	return scores.sum();
}

double Student::getScore(int i)
{
	return scores[i];
}


void Student::SetScore(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Please Enter A Score: ";
		cin >> scores[i];
	}
}