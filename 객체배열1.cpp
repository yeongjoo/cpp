#include "pch.h"
#include <iostream>
using namespace std;

class Car {
public:
	int speed;
	Car(int s) : speed{ s } {}; //speed �� �־ �ʱ�ȭ�� ����
	void start() {
		cout << "���� ����մϴ�." << endl;
	}
	void pring() {
		cout << speed << endl;
	}
};
int main()
{
	Car car1{ 100 };
	Car car2{ 200 };

	car1.pring();
	car2.pring();

	return 0;
}