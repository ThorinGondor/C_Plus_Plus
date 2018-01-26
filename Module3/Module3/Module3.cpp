// Module3.cpp: 
//
#include "stdafx.h"
#include <iostream>;
using namespace std;

int main(int argc,char* argv[])
{
	/*(1)位与字节*/
	int n_int = INT_MAX;
	int n_long = LONG_MAX;
	int n_short = SHRT_MAX;
	int n_llong = LLONG_MAX;

	cout << sizeof n_int << endl;
	cout << sizeof n_long << endl;
	cout << sizeof n_short<<endl;
	cout << sizeof n_llong << endl;

	cout << n_int << endl;
	cout << n_long << endl;
	cout << n_short << endl;
	cout << n_llong << endl;

	/*(2)另一种一种初始化方法*/
	int a{15};
	cout << a << endl;

	/*(3)无符号类型unsigned*/
	unsigned short b = 65535; 
	//unsigned表明没有符号，此时数据不会为负，例如short类型的数据范围是-32768~+32767，那么无符号下的short类型的数据范围就是0~65535
	cout << b << endl;

	/**(4)整形字面值**/
	int c = 0x42; //16进制数
	cout << c << endl;

	/**(5)char**/
	char ch = 'M';
	for(int d =0;d<3;d++)
	{
		ch = ch + 1;
		cout << ch << "\n";
	}
	/**(6)cout.put()**/
	cout << '$' << endl;
	cout.put('$');

	/**(7)换行符 "\n" **/
	cout << "\n\nNext Line\n" ;

	/**(8)bool类型**/
	//c++里，bool类型将true转化为1，将false转换为0
	bool flag = true;
	if (flag == true)
	{
		cout << flag << '\n';
	} 
	flag = false;
	if (flag == false)
	{
		cout << flag << '\n';
	}
	
	/**(9)强制转换**/


	
	system("pause");
    return 0;
}

