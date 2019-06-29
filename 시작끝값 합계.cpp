#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	for (int i = 1; i <= 1000; i++)
	{
		sum = sum + i;
	}
	cout << "총 합은 " << sum;

	//두 값을 입력받아 합계 구하는 프로그램
	int x, y;
	cout << "시작값과 끝값을 입력하세요: ";
	cin >> x >> y;
	int sum = 0;
	for (int i = x; i <= y; i++)
	{
		sum = sum + i;
	}
	cout << "총 합은 " << sum;
}
