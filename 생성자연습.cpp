//Computer
//price, company,  ram
//컴퓨터 2대 초기화, 전체 내용 출력 (가격, 회사이름, 가격+회사이름, 가격+회사이름+ram용량)
//컴퓨터 부품을 쓰지 않으면 apple컴퓨터를 껐습니다. / banana컴퓨터를 껐습니다.

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Computer {
public:
	int price;
	string company;
	double ram;

	Computer() {} //기본생성자를 만들어줘야한다!
	Computer(int p) : price{ p } {}
	Computer(string c) : company{ c } {}
	Computer(int p, string c) : price{ p }, company{ c }{}
	Computer(int p, string c, double r) : price{ p }, company{ c }, ram{ r }{}

	~Computer() { //소멸자
		cout << company << "컴퓨터를 껐습니다." << endl;
	}
	void print (){
    cout << company << "의 " << ram << "가격은 " << price << "원\n";
	};
};

int main()
{
	Computer c1;
	c1.print(); 
	Computer c2;
	c2.print(); 
	Computer c3{ "apple" };
	c3.print(); 
	Computer c4{ 100,  "apple" };
	c4.print(); 
	Computer c5{ 100, "apple", 128 };
	c5.print(); 
	
	return 0;
}

//5일차 수업 코드 _ 답 참고
//접근 제어자 정리 후에 생성자 예제문제 풀어볼 것 (+ file 처리?)
//file 공유방법 : git과 svn