#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string name;
	int age;
	string sex;
	
	cout << "이름과 나이, 성별을 입력하세요: ";
	cin >> name >> age >> sex ;

	ofstream os{ "c:/temp/0629.txt" }; //생성자에 입력값 넣어주는 함수
	os << name << endl;
	os << age << endl;
	os << sex << endl;

	return 0;
}
