#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
	string name;
	string gender;
	int age;
	static int sum;
	static int count;

	Employee() {}
	Employee(string n, string g, int a) : name{ n }, gender{ g }, age{ a } {
		count++;//증감연산자(== count = count + 1;)
		sum = sum + a;
	}

	void work() {
		cout << "일하다" << endl;
	}
	void play() {
		cout << "친화력이 있다" << endl;
	}

	static void getCount() {	
		cout << "전체 직원의 수 : " << count << "명" << endl; }
	static void avgPrint() { 
		cout << "직원들의 평균 나이는 : " << sum / count << "세" << endl; }

	void print() {
		cout << name << ", " << gender << ", " << age << endl;
	}
};

int Employee::count = 0;
int Employee::sum = 0;

int main()
{
	Employee per1{ "알라딘", "M", 23 };
	Employee per2{ "피터", "M", 18 };
	Employee per3{ "유바비", "M", 28 };

	per1.print();
	per2.print();
	per3.print();

	Employee::getCount();
	Employee::avgPrint();

	return 0;
}