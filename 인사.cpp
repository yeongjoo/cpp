#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int hour;
	cout << "현재 시간 입력: ";
	cin >> hour;

	if (hour <= 11) {

		cout << "Good morning!\n";
	}
	else if (hour >= 16) {
		cout << "Good afternoon!\n";
	}
	else if (hour <= 20)
	{
		cout << "Good evening!\n";
	}
	else {
		cout << "Good night!\n";
	}
}

