#include "pch.h"
#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
	list<string> name = { "김연아", "박연아", "정연아" };
	
	name.pop_back(); //정연아 반칙, 탈락시키고 박찬호 3등
	name.push_back("박찬호");

	auto point = name.begin();
	point++;
	for (string n : name)
	{
		cout << n << ' ';
	}
	cout << endl;

	name.insert(point, "송연아"); //1,2라운드 총점으로 송연아가 2등
	for (string n : name)
	{
		cout << n << ' ';
	}
	cout << endl;

	return 0;
}