#include "pch.h"
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
	set<string> bag; //������ ��� ���� ��, �ߺ��� �ɷ����� ���� �� ���!!!
	bag.insert("�޴���");
	bag.insert("Ƽ��");
	bag.insert("����");
	bag.insert("�޴���"); //�ߺ��Ǿ� ������� �ʾұ� ������ size�� ������

	cout << bag.size() << endl;

	auto point = bag.find("������");
	if (point != bag.end()) { //bag.end ������ ��..? �ۿ� ���� �ʴٸ� -> �ȿ� �ִٸ�
		cout << "����.";
	}
	else {
		cout << "����.";
	}

	return 0;
}