// Module13抽象基类.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "BaseEllipse.h"


int main(int argc,char* argv[])
{
	//（1）创建共性基类的对象
	AccountABC *Client[2];

	//（2）输入成员内容，注意根据类型的不同，会输入Brass对象或者BrassPlus的对象的成员
	string temp_name;
	long temp_ID;
	double temp_balance;
	int kind;
	for (int i = 0; i < 2; i++)
	{
		cout << "This is Client [" << i << "]:" << endl;
		cout << "Please Enter Name:" << endl;
		cin.get();
		getline(cin,temp_name);
		cout << "Please Enter ID:" << endl;
		cin >> temp_ID;
		cout << "Please Enter Balance:" << endl;
		cin >> temp_balance;
		cout << "Please Enter Kind:" << endl;
		cin >> kind;
		while (kind != 1 && kind != 2)
		{
			cout << "Please Enter Valid Kind 1 or 2:" << endl;
			cin >> kind;
		}
		if (kind == 1)
		{
			Client[i] = new Brass(temp_name,temp_ID,temp_balance);
		}
		else if(kind ==2)
		{
			cout << "Welcome!Brass Plus! \n";
			double ml;
			double r;
			cout << "Please Enter MaxLoan:" << endl;
			cin >> ml;
			cout << "Please Enter rate:" << endl;
			cin >> r;
			Client[i] = new BrassPlus(temp_name, temp_ID, temp_balance,ml,r);
		}
	}
	//（3）遍历展示
	for (int i = 0; i < 2; i++)
	{
		Client[i]->ViewAccount();
	}
	system("pause");
    return 0;
}

