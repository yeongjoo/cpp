#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
class Car {
public:
	int speed;
	int gear;
	string color;

	void speedUp(){
		speed = speed + 10; //(==) speed += 10;
		cout << speed << endl;
	}
	void speedDown() {
		speed = speed - 10; //(==) speed -= 10;
		cout << speed << endl;
	}
};
int main()
{
	Car car1;
	//c++은 멤버변수 복사 시 변수 초기화는 안해줌
	cout << car1.color << endl;
	cout << car1.speed << endl;

	car1.speedUp(); //멤버 변수 초기화 이전

	car1.color = "red";
	car1.speed = 100;
	car1.gear = 3;

	car1.speedUp(); //멤버 변수 초기화 이후

	return 0; 
}

