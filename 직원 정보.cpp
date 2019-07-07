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
		count++;//����������(== count = count + 1;)
		sum = sum + a;
	}

	void work() {
		cout << "���ϴ�" << endl;
	}
	void play() {
		cout << "ģȭ���� �ִ�" << endl;
	}

	static void getCount() {	
		cout << "��ü ������ �� : " << count << "��" << endl; }
	static void avgPrint() { 
		cout << "�������� ��� ���̴� : " << sum / count << "��" << endl; }

	void print() {
		cout << name << ", " << gender << ", " << age << endl;
	}
};

int Employee::count = 0;
int Employee::sum = 0;

int main()
{
	Employee per1{ "�˶��", "M", 23 };
	Employee per2{ "����", "M", 18 };
	Employee per3{ "���ٺ�", "M", 28 };

	per1.print();
	per2.print();
	per3.print();

	Employee::getCount();
	Employee::avgPrint();

	return 0;
}