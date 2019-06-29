#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int age = 0; //선언 -> 메모리확보
				 //정수형 변수 (변수의 메모리를 정의해줌 int=4byte) =기준 오른쪽의 것을 왼쪽에 넣는 개념이므로 오른쪽에 주목!!
    cout << "나이를 입력하세요: "; 
    cin >> age; //console에서 c++로 입력 (age 변수에 저장)
	cout << "당신의 나이는 " << age;

	string name = ""; //실처럼 이어지는 data -> string
	cout << endl;
	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "당신의 이름은 " << name;
}

//data를 하나씩 저장 -> 변수(int,string,char...) -> 배열 -> file -> Database
