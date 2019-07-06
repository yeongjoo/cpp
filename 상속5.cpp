#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Man {
public:
	void run() {
		cout << "뛰다." << endl;
	}
};
class Bird {
public:
void fly() {
	cout << "날다." << endl;
}
};

class SuperMan : public Man, public Bird {
public:
	string name;
	string space; //우주밖

	void print() {
		cout << "슈퍼맨의 이름은 " << name << ", 날 수 있는 곳은 " << space << endl;
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