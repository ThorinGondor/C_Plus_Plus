#include "stdafx.h"
#include <iostream>
#include "String.h"
using namespace std;

int main(int argc, char* argv[])
{
	String name;
	cout << "Hello,Please Enter Your Name: ";
	cin >> name;
	cout << "Your Name is: "<<name<<". Please enter 5 short sayings: \n";
	String saying[5];
	char temp[81];
	int i;
	for (i = 0; i < 5; i++)
	{
		cout << i + 1 << ": ";
		cin.get();  //°Ñ»Ø³µ·û³Ôµô
		cin.get(temp, 81);
		while(!cin && cin.get()!='\n')
		{
			continue; 
        }
		if(!cin||temp[0]=='\0')
		{
			break;
		}
		else
		{
			saying[i] = temp;
		}
	}
    int total = i;
	for (int i = 0; i < total; i++)
	{
		cout << saying[i] << endl;
	}

	String *shortest = &saying[0];
	String *first = &saying[0];

	for (int i = 0; i < total; i++)
	{
		if (saying[i].getLength() < shortest->getLength())
		{
			shortest = &saying[i];
		}
	}
	cout << "The Shortest saying is: " << *shortest << endl;
	
	system("pause");
	return 0;
}
