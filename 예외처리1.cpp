#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
		int pizza_slices = 0;
		int persons = -1;
		int slices_per_person = 0;
		try {
			cout << "���� �������� �Է�: ";
			cin >> pizza_slices;
			cout << "��� �� �Է�: ";
			cin >> persons;
			if (persons == 0) throw persons;
			slices_per_person = pizza_slices / persons;
			cout << "�� ��� �� ���� �� �ִ� ���� ���� ��: " << slices_per_person << endl;
		}
		catch (int e) { //���� Ÿ�� ��ġ���� �� �� (persons)
			cout << "���� �߻�!! ��� ���� " << e << "�� �Դϴ�." << endl;
		}
			cout << "�ο� ������ ���� ���α׷��� �ߴܵ˴ϴ�." << endl;

		return 0;
	}