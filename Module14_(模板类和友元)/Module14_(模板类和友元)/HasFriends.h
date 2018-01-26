#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template <typename Type>
class HasFriends
{
private:
	Type item;
	static int count;
public:
	HasFriends(const Type &it) :item(it)
	{
		count++;
	}
	~HasFriends()
	{
		count--;
	}
	friend void Report(HasFriends<Type> &hf);
	friend void Counts();
};
