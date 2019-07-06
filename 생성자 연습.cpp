//Button class _ color, text
//b1{"blue", "PowerOn"} b2{"green", "VolumeUp"}
//print()
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
//������ �Լ�, �����ڸ� ������ ���� �� �ִ�.
//�Է°��� �ٸ��� �ؾ� ������ �̸��� ���� ������ �Լ��� �����Ѵ�.

//�Լ��� ������ �̸����� ����� �� �ִ� ��� : ������(overloading, �����ε�)
//�ϳ��� �̸����� �������� ����� ����
class Button {
public:
	string color;
	string text;
	
	Button() {}
	Button(string c, string t) : color{ c }, text{ t } {	}
	void print() {
		cout << color << ", " << text << endl;
	}
};

int main()
{
	Button b1{ "blue", "PowerOn" };
	b1.print(); 
	Button b2{ "green", "VolumeUp" };
	b2.print();
	return 0;
}
