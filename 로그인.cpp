#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int id = 1000; //회원가입 시 id, pw
	int pw = 2000;
	int inputid, inputpw; //입력한 id, pw

	cout << "ID 입력: " <<endl;
	cin >> inputid;
	cout << "PW 입력: " <<endl;
	cin >> inputpw;

	if ((id == inputid) && (pw == inputpw)) {
		cout << "로그인 OK";
	} else{
		cout << "로그인 NOT";
			}
}
//day01 Summary
//변수 - 데이터 저장 공간
//연산자 - 데이터 간단한 처리 1) 산술연산자: +=*/% 2) 비교연산자: == =! >= < 3) 대입(할당)연산자: = 4)결합연산자: +(type 동일해야 함)
//5)논리연산자: 조건이 여러개 일때, 조건이 모두 true(and) && 조건중 하나만 true(or) ||
//day02 - 제어문 1) 순차적 처리 2) 조건문(분기문) 3) 반복문

