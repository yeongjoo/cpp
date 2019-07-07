#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Daughter {
public:
	string name;
	int age;

	static int money;
	static int count;

	Daughter(){}
	Daughter(string n, int a) : name{ n }, age{ a } {
		money = money - count;
	}
	void play() {
		cout << "��ƿ�" << endl;
	}
	void tv() {
		cout << "TV����" << endl;
	}
	void print() {
		cout << name << ", " << age << "��" << endl;
	}
	static void getCount() {
		cout << "������ ���� �ݾ�: " << money << "��" << endl;
	}
};
int Daughter::money = 10000;
int Daughter::count = 1000;

int main()
{
	Daughter d1{ "�ϳ�", 17 };
	Daughter d2{ "�θ�", 9 };

	d1.print();
	d1.play();
	d1.tv();
	d2.print();
	d2.play();
	d2.tv();

	Daughter::getCount();


	return 0;
}