#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	int speed;

	void setSpeed(int s) { //반환값 노필요
		speed = s; //멤버변수에 값을 집어넣는 역할 
	} //setter 함수

	int getSpeed() { //이미 값이 대입되어 있으므로 입력값 X
		return speed;
	} //getter 함수
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
		cout << "속도는 " << t.getSpeed() << "입니다." << endl;

	Sportscar s;
	s.setTurbo(true);
		cout << "터보는 " << s.getTurbo() << "입니다." << endl;

	return 0;
}
//부모 자식 간에는 ㅁㅁ는 ㅇㅇ이다. 라는 것이 성립되어야 함