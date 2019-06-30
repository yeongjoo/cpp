#include "pch.h"
#include <iostream>

using namespace std;

class Car2 {
public:
	int speed;
	Car2(int s) : speed{ s } {}; //speed 값 넣어서 초기화값 생성
	void start() {
		cout << "차가 출발합니다." << endl;
	}
	void pring() {
		cout << speed << endl;
	}
};