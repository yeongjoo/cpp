#include "pch.h"
#include <iostream>
using namespace std;

class Student {
public:
	void study() {
		cout << "�����ϴ�" << endl;
	}
};

class Element : public Student {
public:
	void study(){
		cout << "�ٳѱ� �����ϴ�" << endl;
	}
};

class Middle : public Student {
public:
	void study() {
		cout << "����ܾ �ܿ��" << endl;
	}
};

class High : public Student {
public:
	void study() {
		cout << " ���� �����ϴ�" << endl;
	}
};

int main()
{
	Element element;
	Middle middle;
	High high;
	
	element.study();
   
	return 0;
}