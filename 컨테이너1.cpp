#include "pch.h"
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> rank;
	rank.push_back(100);//하나씩 집어넣을 때 사용
	rank.push_back(200);
	rank.push_back(300);

	for (int r: rank)
	{
	cout << r << ' ';
	}
	cout << endl;

	rank.pop_front(); //앞에서부터 하나씩 꺼낼 때 사용 (지우고 삽입?)

	for (int r : rank)
	{
		cout << r << ' ';
	}
	return 0;
}