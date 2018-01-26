// Module16set类.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <ostream>
#include <iterator>
#include <algorithm>
using namespace std;

int main(int argc, char* agrv[])
{
	/****（1）创建并复制****/
	string s1[5] = {"Apple","EA Games","Google","AliBaba","Tencent"};
	string s2[6] = {"Huawei","Nvidia","Ubisoft","AMD","EA Games"};
	set<string> A(s1,s1+5); //该代码执行完以后，就已经成功地复制了s1数组的元素！
	set<string> B(s2,s2+6); //该代码执行完以后，就已经成功地复制了s2数组的元素！

	/****（2）写到cout进行输出****/
	copy(A.begin(), A.end(), ostream_iterator<string>(cout, "---"));
	cout << '\n';
	copy(B.begin(), B.end(), ostream_iterator<string>(cout, "---"));

	/****（3）合集set_union****/
	set<string> C; cout << '\n';
	set_union(A.begin(),A.end(),B.begin(),B.end(),insert_iterator<set<string>>(C,C.begin()));  //将A和B的元素写入到C的set中，形成合集
	copy(C.begin(), C.end(), ostream_iterator<string>(cout,"+++"));   //写入到cout输出
	
	/****（4）交集、两个合集的差****/
	set<string> D; cout << '\n';
	set_intersection(A.begin(),A.end(),B.begin(),B.end(),insert_iterator<set<string>>(D,D.begin()));  //将交集写入D的set中
	copy(D.begin(), D.end(), ostream_iterator<string>(cout, "***"));  //写入到cout输出

	system("pause");
    return 0;
}

