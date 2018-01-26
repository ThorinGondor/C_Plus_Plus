// Module14模板类和友元.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include "HasFriends.h"
using namespace std;

template <typename T>
int HasFriends<T>::count = 0;

void Report(HasFriends<int> &HF)
{
	cout << HF.item << endl;
}

void Report(HasFriends<double> &HF)
{
	cout << HF.item << endl;
}

void Counts()
{
	cout << "HasFriends<int>::count: "<<HasFriends<int>::count << endl;
	cout << "HasFriends<double>::count: "<<HasFriends<double>::count << endl;
}

