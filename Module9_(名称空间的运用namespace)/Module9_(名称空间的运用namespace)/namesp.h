//ͷ�ļ�namesp.h
//���ļ�������һЩ���ƿռ䣬�������ṹ����ͺ���ԭ��

#include <iostream>
#include <string>
//�������������ռ�
namespace Pers
{
	//����һ���ṹ
	struct Person
	{
		std::string fname;
		std::string lname;
	};
	//������������ԭ��
	void getPerson(Person &p);
	void showPerson(const Person &p);
}

namespace Debt
{
	//����Pers�ռ��Person�ṹ
	using Pers::Person;

	//����һ���ṹ
	struct debts
	{
		Person ps;
		double amount;
	};
	//������������ԭ��
	void getDebt(debts &dt);
	void showDebt(const debts &dt);
	double sumDebt(const debts arr[], int n);
}