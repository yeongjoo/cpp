#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int grade;
    cout << "등급을 입력하세요: "; 
	cin >> grade;

	if (grade=2) {
		cout << "그대로" << endl;
	}
	else {
		cout << "다른 반" << endl;
	}
}