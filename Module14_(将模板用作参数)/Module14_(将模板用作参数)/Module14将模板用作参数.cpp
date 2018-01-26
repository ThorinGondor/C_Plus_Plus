// Module14将模板用作参数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

template <template<typename T> class Thing>  //这里template<typename T> 指代：Crab<Stack>
											 //这样，Crab类就包括了Stack类，该类能够直接调用Stack类的方法：Push(x),Pop(x)；
class Crab
{
public:
	Crab() {}
	bool Push(int a, double x,string str)
	{
		return S1.Push(a) && S2.Push(x)&&S3.Push(str);
	}
	bool Pop(int &a, double &x,string &str)  //注意：一定别忘了“&”符号！，主函数里的调用传参，必须和此处的参数绑定，此处的参数会接收Pop来的值，会变化，那么主函数的参数也必须随之变化，必须绑定！
	{
		return S1.Pop(a) && S2.Pop(x)&&S3.Pop(str);
	}
private:
	Thing<int> S1; //即Stack<int> S1;
	Thing<double> S2;  //即 Stack<double> S2
	Thing<string> S3;
};


int main()
{
	Crab<Stack> nebula;  
	int ni;
	double nb;
	string ns[5];
	int j = 0;
	while (cin>>ni>>nb>>ns[j]&&ni>0&&nb>0)
	{
		if (!nebula.Push(ni, nb,ns[j]))
			break;
		j++;
	}
	string line;
	while (nebula.Pop(ni,nb,line))
	{
		cout << ni << "," << nb <<","<<line<< endl;
	}
	cout << "Done! \n";
	system("pause");
    return 0;
}

