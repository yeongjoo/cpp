#include "pch.h"
#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
	list<int> rank = { 10, 20, 30 };
	rank.push_back(40);
	cout << rank.size() << "��" << endl;
	auto point = rank.begin(); //rank�� ù �κ� = ����Ʈ
	point++;
	point++;
	rank.insert(point, 50); //����Ʈ�� �߰��� ������ ����! (�迭�� ����)
	for (int x : rank)
	{
		cout << x << " ";
	}
	return 0;
}

