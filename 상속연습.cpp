#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	int speed;

	void setSpeed(int s) { //��ȯ�� ���ʿ�
		speed = s; //��������� ���� ����ִ� ���� 
	} //setter �Լ�

	int getSpeed() { //�̹� ���� ���ԵǾ� �����Ƿ� �Է°� X
		return speed;
	} //getter �Լ�
};

class Sportscar : public Car {
public:
	bool turbo;

	void setTurbo(bool t) {
		turbo = t;
	}
	bool getTurbo() {
		return turbo;
	}
};

class Truck : public Car {
public:
	int weight;
	void setWeight(int w) {
		weight = w;
	}
	bool getWeight() {
		return weight;
	}
};

int main()
{
	Truck t;

	t.setSpeed(100);
		cout << "�ӵ��� " << t.getSpeed() << "�Դϴ�." << endl;

	Sportscar s;
	s.setTurbo(true);
		cout << "�ͺ��� " << s.getTurbo() << "�Դϴ�." << endl;

	return 0;
}
//�θ� �ڽ� ������ ������ �����̴�. ��� ���� �����Ǿ�� ��