#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int number[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "점수 입력: ";
		cin >> number[i];
	}
	//int number[] = { 11, 55, 33, 22, 66 };
	int max = number[0]; //그 당시의 최대값을 저장하기위한 공간
	for (int i = 0; i < 5; i++)
	{
		if (max < number[i]) {
			max = number[i];
		}
	}
	cout << "최대값은 " << max <<endl;
}
