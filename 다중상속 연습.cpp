//학생 - 공부하다 가게 - 장사하다 사장 - 쇼핑몰도 운영하다
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	void study() {
		cout << "대학원에서 공부를 하다" << endl;
	}
};
class Shop {
public:
	void sale() {
		cout << "장사를 하다" << endl;
	}
};
class Owner : public Student, public Shop
{
public:
	void internet() {
		cout << "인터넷 쇼핑몰을 운영하다" << endl;
	}
};

int main()
{
	Owner owner;
	owner.sale();
	owner.study();
	owner.internet();

	return 0;
}