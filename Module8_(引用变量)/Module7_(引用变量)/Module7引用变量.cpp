// Module7引用变量.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 10;
	int & b = a;  //这样可以将b作为a变量的别名，如果b的数值出现变化，那么a也随之变化。并且b必须永远指向a，不可以再改为别的变量的别名
	b++;
	cout << b << endl;
	cout << a << endl;

	/****
	对比下面的传统的指针方式，可以发现还是上述方法更方便,而且为了看出区别，下列代码中，指针p可以先声明，再初始化（指向c的地址）,并且指针指向的地址也是可以修改的。
	但是上述的引用变量法，就不能这样做，它一声明引用，就必须初始化，指定a的地址。  并且是const一样，永远指向a的地址，不可能发生改变.
	
	通俗地说：引用变量法，两个量绑死，不能松绑；
	                而指针法，两个变量绑定，不过可以修改，进行松绑。
	****/
	int c = 15;
	int d = 37;
	int *p;
	p = &c;
	cout << *p << endl;
	c++;
	cout << *p << endl;
	p = &d;
	cout << *p << endl;
	system("pause");
    return 0;
}

