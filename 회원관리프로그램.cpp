#include "pch.h"
#include <string>
#include <iostream>
#include "member.h"

using namespace std;

void ageAvg(member list[]) //�Է°����� �迭 ��°�� ������
{
	int sum = 0;
	//������ ��� ���ϱ�
	for (int i = 0; i < 3; i++)
	{
		sum = sum + list[i].age; //list���� ���� age ��
	}
	cout << "������ �����: " << sum / 3 << endl;
}

int main()
{ //�Է��� �޾Ƽ� ��ü�� ����. -> ȸ������Ʈ �迭�� �ִ´�. -> �迭 ��ü ������ ����Ʈ.
	string name;
	int age;
	string tel;
	member list[3]; 

	for (int i = 0; i < 3; i++)
	{
	cout << "ȸ������(�̸�, ����, ����ó) �Է�: ";

	cin >> name >> age >> tel;
	
	list[i] = member{ name, age, tel };
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "ȸ���̸�: " << name << ", ����: " << age << ", ����ó: " << tel << endl;
	}
	
	ageAvg(list);
	return 0;
}