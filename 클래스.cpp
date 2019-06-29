#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Phone {//부품 형성 - 대문자로!! => 클래스
	//정적특성_색, 모양, 크기... => 멤버변수 (특징이 되는...)
public: 1; //아무데서나 다 사용가능
	string color;
	int size;
	//동적특징_전화걸기, 인터넷 서핑, 문자수신, 게임... => 멤버함수
	void tell() {
		cout << "전화걸기" << endl;
	}
	void game() {
		cout << "게임하기" << endl;
	}
};

int main()
{
	Phone p1; //부품 복사
	p1.color = "white";
	p1.size = 6;

	p1.game();
	p1.tell() << p1.color << endl;
	p1.tell() << p1.size << endl;
	return 0;
}

