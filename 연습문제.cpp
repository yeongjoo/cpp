//pet 이름, 나이 멍멍이(3), 야옹이(5) 
//값 넣고 이름,나이 print 할 수 있는 함수
//짖다("dog", 3)=>멍멍 
//짖다("cat")=>야옹 
//먹다
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Pet {
public:
	string name;
	int age;

	
	void eat() {
		cout << "먹다." << endl;
	}
	void speak(string n, int age) {
		cout << "멍멍!" << endl;
	}
	void speak(string n) {
		cout << "야옹~" << endl;
	}
	void print() {
		cout << "이름은 " << name << ", 나이는 " << age << endl;
	}
};

int main()
{
	Pet dog, cat;

	dog.name = "멍멍이";
	dog.age = 3;
	dog.print();

	cout << "------------------------\n";

	cat.name = "야옹이";
	cat.age = 5;
	cat.print();

	return 0;
}
