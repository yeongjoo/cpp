#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Car { //superclass
public:
	string color;
	Car() {
		cout << "Car의 기본 생성자 호출." << endl;	//1번
	} //반환값 X. 기본생성자
	Car(string c) : color{ c } {
		cout << "Car의 parameter있는 생성자 호출." << endl; }
	~Car() {
		cout << "Car의 parameter있는 소멸자 호출." << endl;	//4번
	}
};

class Truck : public Car { //subclass
public:
	int weight;
	Truck() {
		//"부모의 기본생성자"를 먼저 호출해줌. 묵시적 호출 ★☆
		cout << "Truck의 기본 생성자 호출." << endl;	//2번
	}
	Truck(int w, string c) : Car(c) { //parameter있는 생성자 호출
		//부모의 기본생성자가 호출되게 되어있다.(묵시적 호출)
		//자식의 파라미터가 있는 생성자를 호출하는 경우는 부모클래스에게 값을 넘기기위해
		//부모의 파라메터 있는 생성자를 명시적으로 호출해주어야한다.
		weight = w;
	}
		~Truck() {
		cout << "Truck의 소멸자 호출." << endl;	//3번
	}
};

int main()
{
	Truck truck;
	Truck truck1{ 1000, "blue"};

	return 0;
}