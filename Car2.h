#include "pch.h"
#include <iostream>

using namespace std;

class Car2 {
public:
	int speed;
	Car2(int s) : speed{ s } {}; //speed �� �־ �ʱ�ȭ�� ����
	void start() {
		cout << "���� ����մϴ�." << endl;
	}
	void pring() {
		cout << speed << endl;
	}
};