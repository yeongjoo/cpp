#include "pch.h"
#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
	list<string> name = { "�迬��", "�ڿ���", "������" };
	
	name.pop_back(); //������ ��Ģ, Ż����Ű�� ����ȣ 3��
	name.push_back("����ȣ");

	auto point = name.begin();
	point++;
	for (string n : name)
	{
		cout << n << ' ';
	}
	cout << endl;

	name.insert(point, "�ۿ���"); //1,2���� �������� �ۿ��ư� 2��
	for (string n : name)
	{
		cout << n << ' ';
	}
	cout << endl;

	return 0;
}