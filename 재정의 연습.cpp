#include "pch.h"
#include <iostream>
using namespace std;

class Bank {
public:
	double getInterestRate() {
			return 0; //���࿡ ������ ����.
	}
};
class badBank : public Bank {
public:
	double getInterestRate() {
		return 10.0;
	}
};
class NormalBank : public Bank {
public:
	double getInterestRate() {
		return 5.0;
	}
};
class GoodBank : public Bank {
public:
	double getInterestRate() {
		return 3.0;
	}
};
int main()
{
	badBank bad;
	NormalBank normal;
	GoodBank good;
	cout << "���� ������ �������� " << normal.getInterestRate() << "�Դϴ�." << endl;
	cout << "���� ������ �������� " << bad.getInterestRate() << "�Դϴ�." << endl;
	cout << "���� ������ �������� " << good.getInterestRate() << "�Դϴ�." << endl;

	return 0;
}