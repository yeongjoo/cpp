#include "pch.h"
#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
	list<int> age; //list ���� vector�� ����
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
	cout << endl; //���ı��� �Լ� : ������ ���� X

	list<string> name;
	name.push_back("ö��");
	name.push_back("����");
	name.push_back("�μ�");
	
	name.sort();//���� : ������ �ٲ�.. -> �ı��� �Լ�
	
	for (string n : name)
	{
		cout << n << " ";
	}
	cout << endl;

	return 0;
}
