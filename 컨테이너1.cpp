#include "pch.h"
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> rank;
	rank.push_back(100);//�ϳ��� ������� �� ���
	rank.push_back(200);
	rank.push_back(300);

	for (int r: rank)
	{
	cout << r << ' ';
	}
	cout << endl;

	rank.pop_front(); //�տ������� �ϳ��� ���� �� ��� (����� ����?)

	for (int r : rank)
	{
		cout << r << ' ';
	}
	return 0;
}