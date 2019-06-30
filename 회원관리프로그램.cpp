#include "pch.h"
#include <string>
#include <iostream>
#include "member.h"

using namespace std;

void ageAvg(member list[]) //입력값으로 배열 통째로 가져옴
{
	int sum = 0;
	//나이의 평균 구하기
	for (int i = 0; i < 3; i++)
	{
		sum = sum + list[i].age; //list에서 꺼낸 age 값
	}
	cout << "나이의 평균은: " << sum / 3 << endl;
}

int main()
{ //입력을 받아서 객체로 만듦. -> 회원리스트 배열에 넣는다. -> 배열 전체 내용을 프린트.
	string name;
	int age;
	string tel;
	member list[3]; 

	for (int i = 0; i < 3; i++)
	{
	cout << "회원정보(이름, 나이, 연락처) 입력: ";

	cin >> name >> age >> tel;
	
	list[i] = member{ name, age, tel };
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "회원이름: " << name << ", 나이: " << age << ", 연락처: " << tel << endl;
	}
	
	ageAvg(list);
	return 0;
}