#include "pch.h"
#include <iostream>
using namespace std;

class Car {
public:
	int speed;
	Car(int s) : speed{ s } {}; //speed 값 넣어서 초기화값 생성
	void start() {
		cout << "차가 출발합니다." << endl;
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