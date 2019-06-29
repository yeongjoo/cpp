#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	int x, y;
	
	cout << "순차적으로 실행\n조건에 따라 분기\n=============================\n"; 
	cout << "숫자1: ";
	cin >> x;
	cout << "숫자2: ";
	cin >> y;
	
	int sum = x + y;
	cout << "연산자 : +\n" << "\n" << "\n" << "-----------------------------\n" << "계산 결과는 " << x << " + " << y << " = " << sum << endl;
	cout << "+가 아니면 계산할 수 없어요." << endl;

	int input;
	cout << "\n1. 좋아하는 과목은?\n";
	cout << "(선택: 1.파이썬 2.자바 3.c++)\n";
	cin >> input;
	if (input == 1) {
		cout << "	-파이썬은 쉽고 강해요.\n";
	}
	else if (input == 2)
	{
		cout << "	-자바는 실무에서 쓰여요.\n";
	}
	else{
		cout << "	-c++은 정교해요.\n";
	}
	
	string name;
	int number;
	char result;
	cout << "2. 학생의 이름 입력: ";
	cin >> name;
	cout << "   학생의 점수 입력: ";
	cin >> number;
	
	if (number >= 90) {
		result = 'A';
	}
	else if (number >= 80) {
		result = 'B';
	}
	else if (number >= 70) {
		result = 'C';
	}
	else if (number >= 60) {
		result = 'D';
	}
	else
	{
		result = 'F';
	}
		cout << "   =>" << name << "의 점수 " << number << "점은 " << result << "학점 입니다.\n";

	int temp;
	char grade;
	float shoes;
	cout << "\n1.\n----------------\n오늘의 기온은? ";
	cin >> temp;
	cout << "오늘 나의 평가는? ";
	cin >> grade;
	cout << "나의 신발 사이즈는? ";
	cin >> shoes;
	cout << "----------------\n오늘 기온은 " << temp << ", 나의 평가는 " << grade << ", 신발은 " << shoes;

	float input1, input2;
	cout << "\n2. 두 수를 입력하세요 : ";
	cin >> input1 >> input2 ;
	if (input1 == input2) {
		cout << "두 수가 같습니다.";
	}
	else {
		cout << "두 수가 다릅니다.";
	}

}
//switch는 string과 실수 사용 불가
//swith ()값에 x+1과 같이 수식 넣어도 됨