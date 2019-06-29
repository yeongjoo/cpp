#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int money = 1000; //int i { 100 }; 와 같다.. 새로운 문법	
				  //string s {"hello" }; string s="hello";
	char cloth = 'M'; //문자는 '' 사용 //string은 "" (문자를 실처럼 나열_문자열)
	double shoes = 195.5;
	int speed = 500;  //숫자는 기호를 사용하지 않는다
	bool typing = true; //true(참)_false(거짓)

	cout << "나의 일주일 용돈은 " << money << "원입니다.\n";
	cout << "나의 옷 사이즈는?" << cloth << "\n";
	cout << "나의 신발사이즈는 " << shoes << "\n";
	cout << "나의 타자속도는 " << speed << endl;
	cout << "영문을 아주 잘 치는 편인가요? " << typing << endl;

	string food = "자장면";
	string drink = "주스";
	string total = food + " " + drink;

	cout << "음식: " << food << endl;
	cout << "음료: " + drink << endl; //+ -> 연결연산자
	cout << total << endl;

	const int price = 5000; //const 넣으면 변수가 아닌 상수가 됨! (값변경 불가 -> 일반적으로 PRICE_대문자로 사용)
	cout << food + " 가격은: " + to_string(price) << endl; //다른 type 결합 불가 -> to_string : int를 string으로 변환
	//PRICE = 4000; -> 상수기 때문에 에러

	int number1, number2;
	cin >> number1 >> number1;
	cout << number1 << " " << number2;
	cout << number1 << " " << number2;
}
