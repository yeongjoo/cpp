#include "pch.h"
#include <iostream>
#include <string>
#include "House.h"
using namespace std;

class UrHouse : public House {
public: //�ܺο����� ���� ����
	bool garden; //���� ����

	void tent() {
		cout << "������ ��Ʈ�� ġ��." << endl;
	}
};
