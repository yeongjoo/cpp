//부품 : class -> 복사사용 : object (대상, 객체), 객체생성
//Button -> Button b1;(객체생성)
//b1.color = "red"; b1.text = "off";
//생성자 함수: 객체 생성될 때 무조건 호출되는 함수. 멤버변수값을 초기화하는 코드를 넣어준다.
				   //클래스 이름과 동일하게 만들어줌. 자동호출!! 대문자로 시작. 반환값이 X(기본값이 void)
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Car {
public:
		string color;
		int price;

		//생성자
		Car(){}
		Car(string c, int p) : color{ c }, price{ p } {	}
		void print() {
			cout << color << ", " << price << endl;
		}
};

int main()
{
		Car car1{ "red", 1000 };
		car1.print();
		return 0;
}