#include "pch.h"
#include <iostream>
#include <time.h>

using namespace std;
int main()
{
	
	int start;
	srand(time(NULL));

	cout << "1)문제 출제 2)종료\n"; 
	cin >> start;
	if(start == 1)
	{
		int x = rand() % 100;
		int y = rand() % 100;
		int sum = x + y;
		cout << "산수 문제를 자동으로 출제합니다.\n" << "" << x << "+" << y << "=" << sum ;
	} 
	else {
		cout << "프로그램 종료" ;
	}
	return 0;
}
