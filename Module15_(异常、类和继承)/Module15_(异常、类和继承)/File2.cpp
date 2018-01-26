// Module15异常类和继承.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Sales.h"
using namespace std;

int main(int argc,char* argv[])
{
	double vals1[12] = 
	{
		1220,1100,1122,2212,1232,2334,
		2884,2393,3302,2922,3002,3544
	};
	double vals2[12] = 
	{
		12,11,22,21,32,34,
		28,29,33,29,32,35
	};

	Sales sale1 = Sales(2008, vals1, 12);
	LabelSales sale2 = LabelSales("NIKE", 2009, vals2, 12);

	try
	{
		cout << "sale1.year: "<<sale1.getYear() << endl;
		for (int i = 0; i < 12; i++)
		{
			cout << sale1[i] << endl;
		}

		cout << "sale2.year: " << sale2.getYear() << endl;
		cout << "sale2.label: "<<sale2.getLabel() << endl;
		for (int i = 0; i <= 12; i++)  //我们假设在这里写成了<=12，则i=12时，就会引发异常，由下面的相应的catch块进行处理
		{
			cout << sale2[i] << endl;
		}
	}
	catch (Sales::Bad_Index &BI)
	{
		cout<<BI.what()<<endl;
		cout << BI.getB_I() << endl;
	}
	catch (LabelSales::NBad_Index &NBI)
	{
		cout<<NBI.what()<<endl;
		cout << NBI.getLabel_Val() << endl;
	}

	system("pause");
    return 0;
}

