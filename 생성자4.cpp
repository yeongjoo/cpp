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

	Singer() {} //�θ��� �⺻ ������ ȣ��
	Singer(double h, string t, string c) : Talent(h), title{ t }, company{ c } {}
	//��������� parameter�ִ� �� ȣ����
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