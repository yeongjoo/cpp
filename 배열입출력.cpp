#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int jumsu[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "점수 입력: ";
		cin >> jumsu[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << jumsu[i] << endl;
	}
	cout << "-----------------------\n";
	
	int sum = 0; //누적시키는 변수
	for (int i = 0; i < 10; i++)
	{
		sum = sum + jumsu[i];
	}
	cout << sum / 10.0 << endl; //type 하나 이상 실수여야 double로 나옴
}
