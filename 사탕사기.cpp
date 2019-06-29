#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int money;
	cout << "현재 가지고 있는 돈: ";
	cin >> money;
	int price;
	cout << "캔디의 가격: ";
	cin >> price;
	cout << "최대로 살 수 있는 캔디 개수=";
	cout << money / price << endl;
	cout << "남은 돈=";
	cout << money % price << endl;

	double 화씨온도;
	cout << "화씨온도 입력: ";
	cin >> 화씨온도;

	double 섭씨온도;
	섭씨온도 = (5.0 / 9.0)*(화씨온도 - 32);
	cout << 섭씨온도;
	cout << "화씨온도" << 화씨온도 << "도는 섭씨온도 " << 섭씨온도 << "입니다: ";

}

