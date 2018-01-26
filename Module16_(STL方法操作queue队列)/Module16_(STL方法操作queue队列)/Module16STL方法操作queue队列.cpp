// Module16STL方法操作queue队列.cpp: 定义控制台应用程序的入口点。
//
/****queue 的基本操作有：
  入队：q.push(x); 将x 接到队列的末端。
  出队：q.pop(); 弹出队列的第一个元素，注意，并不会返回被弹出元素的值。
  访问队首元素：q.front()，即最早被压入队列的元素。
  访问队尾元素：q.back()，即最后被压入队列的元素。
  判断队列空：q.empty()，当队列空时，返回true。
  访问队列中的元素个数，如例：q.size()
****/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	queue<string> qe;
	qe.push("Kimi");
	qe.push("Harrison");
	qe.push("Alonso");
	qe.pop();
	qe.push("Kvyat");
	qe.push("Schumacher");
	qe.push("Dirk");
	qe.pop();
	qe.push("Sena");
	qe.pop();
	
	cout << qe.front()<<endl;
	cout << qe.back() << endl;
	cout << qe.size() << endl;
	system("pause");
    return 0;
}

