#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Man {
public:
	void run() {
		cout << "�ٴ�." << endl;
	}
};
class Bird {
public:
void fly() {
	cout << "����." << endl;
}
};

class SuperMan : public Man, public Bird {
public:
	string name;
	string space; //���ֹ�

	void print() {
		cout << "���۸��� �̸��� " << name << ", �� �� �ִ� ���� " << space << endl;
	}
};
int main()
{
	SuperMan sMan;
	sMan.run(); //Man
	sMan.fly(); //Bird
	sMan.name = "Clark"; //SuperMan
	sMan.space = "Universe"; //SuperMan
	sMan.print(); //SuperMan

	return 0;
}