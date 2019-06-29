#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int number[100]; //배열의 선언
	number[0] = 100; //배열의 할당 (대입 연산자 '=' 사용)
	number[99] = 900;
	cout << "인덱스 0번째 값 :" << number[0] << endl;
	cout << "인덱스 55번째 값 :" << number[55] << endl;
	cout << "인덱스 99번째 값 :" << number[99] << endl;
	cout << "number 변수값 :" << number << endl; //주소값

}

//ctrl + L 한줄 삭제