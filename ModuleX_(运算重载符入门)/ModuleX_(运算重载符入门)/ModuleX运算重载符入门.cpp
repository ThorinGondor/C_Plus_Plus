// ModuleX运算重载符入门.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Complex
{
public:
	//构造函数、方法
	Complex() {}
	Complex(int r,int i) :Real(r),Image(i){}
	void Show()
	{
		cout << Real << endl;
		cout << Image << endl;
	}
	//重点：重载运算符！
	Complex &operator+(const Complex &C)
	{
		Complex C_buff;
		C_buff.Real = Real + C.Real;
		C_buff.Image = Image + C.Image;
		return C_buff;
	}
	Complex &operator-(const Complex &C)
	{
		Complex C_temp;
		C_temp.Real = Real-C.Real;
		C_temp.Image = Image-C.Image;
		return C_temp;

	}
private:
	int Real;
	int Image;
};

int main(int argc,char* argv)
{
	Complex C0 = Complex(4, 9);
	Complex C1 = Complex(-7, 3);
	Complex C2;
	C2 = C0 + C1;   //有了重载运算符的存在，使得main函数得以以优雅的方式对复数进行相加。
	C2.Show();

	Complex C3;
	C3 = C0-C1;
	C3.Show();
	system("pause");
    return 0;
}

