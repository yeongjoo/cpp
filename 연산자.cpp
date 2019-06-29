#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int num1;
	int num2;

	cout << "숫자1 입력: ";
	cin >> num1;
	cout << "숫자2 입력: ";
	cin >> num2;

	cout << num1 + num2 << endl;
	cout << num1 - num2 << endl;
	cout << num1 * num2 << endl;
	cout << num1 / (double)num2 << endl; //c++에서는 정수와 정수를 넣으면 정수만 나옴
				 //실수 결과값을 얻기 위해 double을 이용, 하나 이상의 type을 실수로 변환
	cout << num1 % num2 << endl;
}
