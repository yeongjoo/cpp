// class 와 객체☆★ C++ Java C# >> 객체(부품)지향형 프로그램.. OOP:object-oriented programming (C는 절차지향형)
//부품을 어떻게 조립해야하는지에 대해 3주차에 중점적으로 배울 예정 (4주차는 응용)

//부품(클래스): 리모컨 버튼_모양에 맞는 틀을 만들어서 복사해서 버튼으로 씀
//헤더 파일 pch.h 를 이용하면 참조해서 다른 프로그램에서도 이용할 수 있다.

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

//특징 먼저 추출해야한다. 정적 + 동적인 특성
//부품 만들기 (틀만!! _ class)
//정적 특징: 색, 속도, 기어 = 멤버변수
//동적 특징: 출발하기, 정지하기, 가속하기, 감속하기 (글로써 추상화..)
		  	// = 멤버함수 (함수를 만들 때는 반환값, 입력값에 유의!!!)

class Car {	//이름은 보통 대문자로 만든다. 뒤의 특성을 포함하기 때문에 {}
public: //다른 곳에서도 사용 가능 _ 공적으로..
	string color;
	int speed; //전역변수: Car 안에서 사용가능 => 선언의 위치가 변수의 생존범위
																	  //unsolved error가 발생 할 수 있다.
	int gear;

	int speedUp(int s) { //반환값 없을 때는 void _ 호출하고 끝내는 함수!
						//매개변수 (parameter) s = 지역변수: speedUp에서만 사용가능
		return s + 10;
	}//반환값
	int speedDown(int s) {
		return s - 10;
	}
	int speedDown(int s, int t) {
		return s * t - 10; //하나의 이름으로 다양한 형태(입력값이 다름): 다형성★
	}

	void print() {
		   cout << color << ", " << speed << ", " << gear << endl;
	}

	void start() {
		cout << "출발하기" << endl;
	}
	void stop() {
		cout << "정지하기" << endl;
	}
};
int main()
{  
	Car car1, car2; //버튼을 만들기 위해 틀인 Car를 만듦.
	//원래 프로그래밍 목적이 클래스를 복사한 객체임. car1, 2를 객체라고 부름.(대상)
	//객체는 Car class의 실제값 (instance)
	//☆★객체생성☆★
	car1.color = "red"; //접근연산자 . color라는 메모리에 접근
	car1.speed = 100;
	car1.gear = 2;

	car2.color = "blue"; 
	car2.speed = 200;
	car2.gear = 1;

	car1.print();
	car2.print();

	int up = car1.speedUp(100);
	int down = car2.speedDown(200);
	int down = car2.speedDown(100, 3);  //입력값 2개 인 것으로 다형성인 함수 구분..

	cout << "속도 Up: " << up << endl;
	cout << "속도 Down: " << down << endl;

	return 0;
}

//값들을 나올 때 마다 입력하기 힘듦. 생성자 통해 편하게 소환하는 방법
												  //객체생성 시 메머변수의 초기값을 넣어주는 생성자!!
//인터페이스 int speedUp(int s) 사용자는 {} 안의 내용은 몰라도 상관없음.