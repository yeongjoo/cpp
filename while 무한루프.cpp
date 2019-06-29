#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string str;
	while (true) {
		cout << "문자열 입력: ";
		cin >> str;
		if (str == "종료") {
			cout << "반복문을 종료합니다.";
			break;
		}
		cout << "당신의 입력값은 " << str << endl;
	}
}