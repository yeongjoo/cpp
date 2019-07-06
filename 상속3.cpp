#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	string color;
	
	void eat() {
		cout << "¸Ô´Ù" << endl;
	}
};

class Lion : public Animal {
public:
	void growl() {
		cout << "À¸¸£··" << endl;
	}
};
class Cat : public Animal {
public:
	void purr() {
		cout << "±×¸£··" << endl;
	}
};

int main()
{
	Lion lion;
	Cat cat;

	lion.color = "brown";
	lion.eat();
	lion.growl();

	cat.color = "black";
	cat.eat();
	cat.purr();

	return 0;
}