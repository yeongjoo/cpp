//함수 원형 정의
#include "pch.h"
#include <iostream> //기본 data type: 정수, 실수, 문자, bool 값 _ 변수에 값이 저장. 이외의 것들은 기본형이 아니다. => 변수에 주소값이 저장. <참조형 변수>
#include <string> //참조형 변수: 문자열 _ 단어의 조합

using namespace std;
//함수를 만들 때 고려할 점
//1. 입력값 - 입력값 타입, 순서, 갯수 ★★★
//2. 반환값
int start(int count) //괄호 안이 비어있다 => 입력 값 없음!
{				//count 매개변수(parameter)
	cout << count << "에서 함수 시작" << endl; //type이 다르면 결합이 되지 않는다! count + "~" 사용 불가
	return 0; //반환 값 0
} //함수의 원형
int end(double number)
{
	cout << number << "로 함수 종료" << endl;
	return 0;
}
int main() //시작 위치 _ main 함수. ()입력값 유무, int: 반환!! 넘길 값이 필요.. return 0;  
{
	start(5); //함수를 사용 => call
	start(10); //start+end 함수 {}중간 괄호 안의 내용을 수행!!
	end(100.22);
	end(200.33);
	return 0;
}
