//set���� �� ����.. �� �� �ʿ�, �����̳�, ���α׷���, DB������ ��� ����Ʈ
//����, ���� �� ���� �����.. ���ѿ���+�̽̿���. ���� ���� ���� ���� ���� �̸� ����Ʈ
//1�� �ڽ�Ű, 2�� �۽�Ű, 3�� �轺Ű, 4�� ����Ű�ε� ��Ģ Ż��
//��Ű��ȸ �û��� ��� ����Ʈ
//�޴��� ����Ű ��ü ����Ʈ ����Ʈ
#include "pch.h"
#include <iostream>
#include <string>
#include <set>
#include <list>
#include <map>
using namespace std;

int main()
{
	set<string> team;
	team.insert("�����̳�");
	team.insert("���α׷���");
	team.insert("DB������");

	for (string t : team)
	{
			cout << t << ' ';
	}
		cout << endl;

		list<string> ref = { "���ѿ���", "�̽̿���" };
		ref.pop_front();

		for (string m : ref)
		{
			cout << m << ' ';
		}
		cout << endl;

		list<string> rank = { "�ڽ�Ű", "�۽�Ű", "�轺Ű", "����Ű" };
		rank.pop_back();
		for (string r : rank)
		{
			cout << r << ' ';
		}
		cout << endl;

		map<int, string> phone;
		phone.insert(make_pair(1, "����"));
		phone.insert(make_pair(2, "�ƺ�"));
		phone.insert(make_pair(3, "ģ��"));
		phone.insert(make_pair(4, "����"));

		for (auto p : phone) {
			cout << p.first << "�� " << p.second << endl;
		}

	return 0;
}
//OOP �ٽ� : class ( -> ���)
				  //object ����
//template = generic program
//�����Լ� = �߻��Լ�

//c++ ��� �߽����� ���� c++��ȭ (network����..)
//c++ �׷��� �߽����� ���� (MFC)
//c++ �� �߽����� ���� (c#)