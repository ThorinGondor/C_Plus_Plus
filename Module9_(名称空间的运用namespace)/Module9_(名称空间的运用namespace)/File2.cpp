//File2文件使用了之前声明和定义的命名空间、定义的结构、定义的函数

#include "stdafx.h"
#include <iostream>
#include "namesp.h"

int main(int argc, char* argv[])
{
	//使用前面声明和定义好的命名空间，方法是“using”，字如其意
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