#include "pch.h"
#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
	list<int> age; //list 말고 vector도 가능
	age.push_back(17);
	age.push_back(26);
	age.push_back(33);

	for (int a : age)
	{
		cout << a << ' ';
	}
	cout << endl;

	age.pop_front();

	for (int a : age)
	{
		cout << a << ' ';
	}
	cout << endl;

	age.pop_back();

	for (int a : age)
	{
		cout << a << ' ';
	}
	cout << endl; //비파괴적 함수 : 원본에 영향 X

	list<string> name;
	name.push_back("철수");
	name.push_back("영희");
	name.push_back("민수");
	
	name.sort();//정렬 : 원본을 바꿈.. -> 파괴적 함수
	
	for (string n : name)
	{
		cout << n << " ";
	}
	cout << endl;

	return 0;
}
