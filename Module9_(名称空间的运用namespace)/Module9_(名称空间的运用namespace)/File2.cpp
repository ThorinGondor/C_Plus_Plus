//File2�ļ�ʹ����֮ǰ�����Ͷ���������ռ䡢����Ľṹ������ĺ���

#include "stdafx.h"
#include <iostream>
#include "namesp.h"

int main(int argc, char* argv[])
{
	//ʹ��ǰ�������Ͷ���õ������ռ䣬�����ǡ�using������������
	using namespace Debt;
	using namespace Pers;

	debts dt1 = { {"Stephen","Curry"},3400 };
	showDebt(dt1);
	
	Person Ps1 = {"Klay","Thompson"};
	showPerson(Ps1);

	debts *dt = new debts[3];
	for (int i = 0; i < 3; i++)
	{
		getDebt(dt[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		showDebt(dt[i]);
	}

	using namespace std;
	cout << sumDebt(dt, 3) << endl;;

	system("pause");
	return 0;
}