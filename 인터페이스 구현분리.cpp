#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Phone { //public 안쓰면 이 프로그램 내에서만 사용 가능
	int size;
	string color;

public: //인터페이스 정의
	   void talk();
	   void game();
};

void Phone::talk() { //phone에 있는 talk 사용할 것임.
	cout << "전화기로 통화하다" << endl;
}
void Phone::game() {
	cout << "전화기로 게임하다" << endl;
}

int main()
{
	Phone p1; //객체생성
	//인터페이스 상태의 함수는 아직 사용 불가. 수행될 내용이 비어있다.

	p1.talk();
	p1.game();

	return 0;
}

//캡슐화 => 정보은닉 : 내가 원하지 않으면 안보이게 할 수 있음.
//상속 = 재사용