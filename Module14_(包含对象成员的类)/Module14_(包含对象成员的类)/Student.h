#include "stdafx.h"
#include <iostream>
#include <string>
#include <valarray>
using namespace std;

class Student
{
private:
	string name;
	typedef valarray<double> ValArray;  //��������һ��ValArray��������valarray<>�ı�������ʵƨ�ö�û�У�ֻ��Ϊ�ˣ��ܹ�������ĸ��ƹ��캯�������������캯���������һ�����Ķ���VA��ʹ��scores�ܹ����ոö���
	ValArray scores;                 //���û�и��ƹ��캯������ٵ��������ֱ������дһ�о����˰��� valarray<int> scores;
public:
	//���캯�������ƹ��캯��
	Student() :name("No Name"), scores() {};                                 //�˴�Ϊ��ʹFile1�Ķ����࣬�����ڴ˽����еĹ��캯���ĳ���������
	Student(int n) :name(), scores(n) {};
	Student(const string na, int n) :name(na), scores(n) {};                 //�˴�Ϊ��ʹFile1�Ķ����࣬�����ڴ˽����еĹ��캯���ĳ���������
	Student(const string na, const ValArray &VA) :name(na), scores(VA) {};   //�˴�Ϊ��ʹFile1�Ķ����࣬�����ڴ˽����еĹ��캯���ĳ���������
	
	//��������
	void setArray(int n);
	double getAverage()const;
	string getName()const;
	double &operator[](int i);
	double getScore(int i) const;
	void showScores()const;

	~Student() {};
};
