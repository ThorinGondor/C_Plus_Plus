// Module16三种智能指针auto_ptr、shared_ptr、unique_ptr
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <memory>  //该memory头文件用于创建智能指针
using namespace std;

ofstream fout;

class Report
{
public:
	
	Report(const string s);
	~Report();
	void Comment() { cout << str << endl; }
private:
	string str;
};

Report::Report(const string s):str(s)
{
	cout << "Object has been created! " << endl;
}

Report::~Report()
{
	fout << "Objetc has been deleted!" << endl;
	cout << "Objetc has been deleted! " << endl;
}

int main(int argc,char* argv[])
{
	fout.open("F:\\ptr.txt");
	//智能指针的创建方法：
	auto_ptr<Report>pap(new Report("use auto pointer"));
	pap->Comment();
	shared_ptr<Report>psp(new Report("use shared pointer"));
	psp->Comment();
	unique_ptr<Report>pup(new Report("use unique pointer"));
	pup->Comment();
	
	//由于系统结束以后，智能指针才会自动释放，此时析构函数才会被调用，这个过程太快，控制台看不见。
	//因此干脆这里写了个记录系统，将析构函数调用时的执行的语句写到文本里，运行该项目将可以看见文本里出现了智能指针被释放的记录
    return 0;
}

