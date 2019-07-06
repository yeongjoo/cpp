#include "pch.h"
#include <iostream>

using namespace std;

class Animal {
public:
	void bark() {
		cout << "¢��." << endl;
	}
};
class Lion : public Animal {
public:
	void bark() { //������(override: �������̵�)
		cout << "������" << endl;
	}
};
class Cat : public Animal {
public:
	void bark() {
		cout << "�׸���" << endl;
	}
};
int main()
{
	Lion lion;
	Cat cat;
	lion.bark();
	cat.bark();
	return 0;
}