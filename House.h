#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class House {
	//���� Ư¡ - �������
public: //���� �ܺο����� �� Ư¡�� ������ �� ����
	string color;
	int door;
	//���� Ư¡ - ����Լ�(�Է°�, ��ȯ��)
	void tv() { //��ȯ���� ���� �Լ�. ()���� �Է°�
		cout << "tv�� ����." << endl;
	}
	void sleep() {
		cout << "���� �ڴ�." << endl;
	}
	void print() {
		cout << "���ػ�: " << color << ", ���� ����: " << door << endl;
	}

};

//��ǰ �ϳ� �� ��� ���� 1��