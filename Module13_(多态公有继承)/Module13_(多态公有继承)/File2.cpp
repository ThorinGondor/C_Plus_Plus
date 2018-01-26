// Module13多态公有继承.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

int main(int argc, char* argv[])
{
	BankAccount *BA0 = new BankAccount("Allen Iverson",6448388,35000);
	BA0->showInfo();
	BA0->Withdraw(40000);
	AccountPlus *AP0 = new AccountPlus(100000,0.05,20000,"Bill Gates",879004711,98000);
	AP0->showInfo();
	AP0->Withdraw(80000);
	AP0->showInfo();
	system("pause");
    return 0;
}

