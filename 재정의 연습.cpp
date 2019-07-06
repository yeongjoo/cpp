#include "pch.h"
#include <iostream>
using namespace std;

class Bank {
public:
	double getInterestRate() {
			return 0; //은행에 대출을 내다.
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
	cout << "보통 은행의 이자율은 " << normal.getInterestRate() << "입니다." << endl;
	cout << "나쁜 은행의 이자율은 " << bad.getInterestRate() << "입니다." << endl;
	cout << "좋은 은행의 이자율은 " << good.getInterestRate() << "입니다." << endl;

	return 0;
}