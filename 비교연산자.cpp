#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	const double PI = 3.14;
	int r, width, height;
	double round; //원면적
	int rectangle; //사각형면적

	cout << "반지름 입력: ";
	cin >> r;
	round = PI * r*r;
	cout << "원의 면적은 " << round << endl;
	cout << "가로가 :";
	cin >> width;
	cout << ", 세로가 :";
	cin >> height;
	rectangle = width * height;
	cout << "인 사각형의 면적은 " << rectangle << endl;
	cout << boolalpha;
	cout << "가로 세로가 같은가요? " << (width == height) << endl;
	cout << "반지름이 10보다 큰가요? " << (r > 10) << endl;


	cout << "자장면 한그릇 4500원\n짬뽕 한그릇 3000원\n--------------------------\n";
	int number1, number2;
	cout << "자장면 주문 수: ";
	cin >> number1;
	cout << "짬뽕 주문 수: ";
	cin >> number2;
	cout << "--------------------------\n";
	cout << "자장면 금액: " << number1 * 4500 << endl;
	cout << "짬뽕 금액: " << number2 * 3000 << endl;
	cout << "전체 주문 금액: " << number1 * 45000 + number2 * 3000 << endl;
	cout << "--------------------------\n";
}
