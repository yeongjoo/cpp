#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int star(string name, int age) { //함수 정의
	name = name + "님";
	age = age + 1;
	cout << age << endl;
	cout << name << endl;
	return 0;
}

int main()
{
	string n = "홍길동";
	int a = 20;
	star(n, a);

	cout << "------" << endl;
	cout << n << endl;
	cout << a << endl;
}
