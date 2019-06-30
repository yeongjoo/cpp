//콘솔에서 5일치 입력받아 저장 - > 5일 간 쓴 총금액, 평균금액

#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream os{ "book.txt" };
	if (!os)
	{
		cerr << "파일 저장 실패" << endl;
		exit(1);
	}
	for (int i = 0; i < 5; i++)
	{
		int date, outcome;
		cout << "날짜와 총금액을 입력하세요: ";
		cin >> date >> outcome;
		os << date << " " << outcome << endl;
	}
	ifstream is{ "book.txt" };
	if (!is)
	{
		cerr << "파일 오픈에 실패!!" << endl;
		exit(1);
	}
	int date1, outcome1;
	int sum = 0;
	int count = 0;
	
	cout << "파일 읽어오기 시작" << endl;
	while (is >> date1 >> outcome1)
	{
		cout << "date: " << date1 << ", outcome: " << outcome1 << endl;
		sum = sum + outcome1;
		count++; 
	}
	cout << "파일 읽어오기 끝" << endl;
	cout << "5일 간 쓴 총 금액: " << sum << "원" << endl;
	cout << "5일 간 쓴 평균금액: " << sum / count << "원" << endl;
	
	return 0;
}