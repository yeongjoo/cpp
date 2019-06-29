// 반복문 while 조금 더 단순..

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int number = 0; //반복문에는 시작값이 필요함
	while (number < 10) {//뒤에 반드시 조건!! 조건의 결과 = bool type.. if랑 똑같음
		cout << number << ": ★" << endl;
		number++; //증감값 number = number + 1;
	}
}
//index(배열)사용하기 위해 number 0부터 시작됨