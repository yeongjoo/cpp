#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Man {
public:
	string name;
	Man() {}
	Man(string n) : name{ n } {}
};
class SuperMan : public Man{
public:
	bool fly;
	SuperMan(){}
	SuperMan(bool f, string name): Man(name){
		fly = f;
	}
	void print() {
		cout << name << ", " << fly << endl;
	}
};

int main()
{
	SuperMan sMan1{true, "Klark"};
	SuperMan sMan2{false, "Jerie"};

	sMan1.print();
	sMan2.print();
	return 0;
}