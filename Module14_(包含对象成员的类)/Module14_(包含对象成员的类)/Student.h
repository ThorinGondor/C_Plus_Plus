#include "stdafx.h"
#include <iostream>
#include <string>
#include <valarray>
using namespace std;

class Student
{
private:
	string name;
	typedef valarray<double> ValArray;  //这里设立一个ValArray，它就是valarray<>的别名，其实屁用都没有，只是为了：能够在下面的复制构造函数（第三个构造函数）里，创建一个它的对象VA，使得scores能够接收该对象
	ValArray scores;                 //如果没有复制构造函数这个操蛋玩意儿，直接这样写一行就行了啊！ valarray<int> scores;
public:
	//构造函数、复制构造函数
	Student() :name("No Name"), scores() {};                                 //此处为了使File1的定义简洁，我们在此将所有的构造函数改成内联函数
	Student(int n) :name(), scores(n) {};
	Student(const string na, int n) :name(na), scores(n) {};                 //此处为了使File1的定义简洁，我们在此将所有的构造函数改成内联函数
	Student(const string na, const ValArray &VA) :name(na), scores(VA) {};   //此处为了使File1的定义简洁，我们在此将所有的构造函数改成内联函数
	
	//声明方法
	void setArray(int n);
	double getAverage()const;
	string getName()const;
	double &operator[](int i);
	double getScore(int i) const;
	void showScores()const;

	~Student() {};
};
