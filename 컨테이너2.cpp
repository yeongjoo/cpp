#include "pch.h"
#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
	list<int> rank = { 10, 20, 30 };
	rank.push_back(40);
	cout << rank.size() << "개" << endl;
	auto point = rank.begin(); //rank의 첫 부분 = 포인트
	point++;
	point++;
	rank.insert(point, 50); //리스트는 중간에 삽입이 가능! (배열과 구분)
	for (int x : rank)
	{
		cout << x << " ";
	}
	return 0;
}

