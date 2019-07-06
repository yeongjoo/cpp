#include "pch.h"
#include <iostream>
using namespace std;

class Student {
public:
	void study() {
		cout << "공부하다" << endl;
	}
};

class Element : public Student {
public:
	void study(){
		cout << "줄넘기 연습하다" << endl;
	}
};

class Middle : public Student {
public:
	void study() {
		cout << "영어단어를 외우다" << endl;
	}
};

class High : public Student {
public:
	void study() {
		cout << " 대입 공부하다" << endl;
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