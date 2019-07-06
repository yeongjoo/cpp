#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Car { //superclass
public:
	string color;
	Car() {
		cout << "Car�� �⺻ ������ ȣ��." << endl;	//1��
	} //��ȯ�� X. �⺻������
	Car(string c) : color{ c } {
		cout << "Car�� parameter�ִ� ������ ȣ��." << endl; }
	~Car() {
		cout << "Car�� parameter�ִ� �Ҹ��� ȣ��." << endl;	//4��
	}
};

class Truck : public Car { //subclass
public:
	int weight;
	Truck() {
		//"�θ��� �⺻������"�� ���� ȣ������. ������ ȣ�� �ڡ�
		cout << "Truck�� �⺻ ������ ȣ��." << endl;	//2��
	}
	Truck(int w, string c) : Car(c) { //parameter�ִ� ������ ȣ��
		//�θ��� �⺻�����ڰ� ȣ��ǰ� �Ǿ��ִ�.(������ ȣ��)
		//�ڽ��� �Ķ���Ͱ� �ִ� �����ڸ� ȣ���ϴ� ���� �θ�Ŭ�������� ���� �ѱ������
		//�θ��� �Ķ���� �ִ� �����ڸ� ��������� ȣ�����־���Ѵ�.
		weight = w;
	}
		~Truck() {
		cout << "Truck�� �Ҹ��� ȣ��." << endl;	//3��
	}
};

int main()
{
	Truck truck;
	Truck truck1{ 1000, "blue"};

	return 0;
}