#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string address;
	cout << "주소를 입력하세요: ";
	getline(cin, address); //한 줄을 읽어올 때
	cout << "당신의 주소는 : " << address << endl;
	return 0;
}
