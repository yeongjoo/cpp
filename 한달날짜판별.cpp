#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int month;
	cout << "월을 입력하세요: ";
	cin >> month;
	switch (month)
	{
	case 4: case 6: case 9: case 11:
		cout << "이 달의 마지막날은 30일입니다.\n"; break;
	case 2:
		cout << "이 달의 마지막날은 28일입니다.\n"; break;
	default:
		cout << "이 달의 마지막날은 31일입니다.\n"; break; //switch는 자체 브레이크가 없음!! 꼭 넣어줘야...
	}
}
//ctrl+k+c 주석설정 ctrl+u 주석해제