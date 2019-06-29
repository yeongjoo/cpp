#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int grade[3];
	int sum = 0;
	int average;
	
	for (int i = 0; i < 3; i++)
	{
		cout << "3명의 중간고사 점수 입력: ";
		cin >> grade[i];
	}

	for (int& p : grade)
	{
		p = p + 10; 
	}

	for (int p : grade)
	{
		sum = sum + p;
	}
	average = sum / 3.0;
	cout << "성적 평균: " << average  << endl;
}

//점수 3개 받아서 배열, 가산점 10점씩, 평균 구하기