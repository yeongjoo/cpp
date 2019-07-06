#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Talent {
public:
	double height;
	Talent(){}
	Talent(double h) : height{ h } {}

};
class Singer : public Talent {
public:
	string title;
	string company;

	Singer() {} //부모의 기본 생성자 호출
	Singer(double h, string t, string c) : Talent(h), title{ t }, company{ c } {}
	//명시적으로 parameter있는 값 호출함
	void print() {
		cout << height << ", " << title << ", " << company << endl;
	}
}; 
int main() {
	Singer singer1{ 165, "solo", "YG" };
	Singer singer2{ 174, "half", "Ban" };
	Singer singer3{ 185, "La", "Jelly" };
	singer1.print();
	singer2.print();
	singer3.print();

	return 0;
}