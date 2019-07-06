#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class House {
	//정적 특징 - 멤버변수
public: //파일 외부에서도 본 특징에 접근할 수 있음
	string color;
	int door;
	//동적 특징 - 멤버함수(입력값, 반환값)
	void tv() { //반환값이 없는 함수. ()에는 입력값
		cout << "tv를 보다." << endl;
	}
	void sleep() {
		cout << "잠을 자다." << endl;
	}
	void print() {
		cout << "지붕색: " << color << ", 문의 갯수: " << door << endl;
	}

};

//부품 하나 당 헤더 파일 1개