//��ǰ : class -> ������ : object (���, ��ü), ��ü����
//Button -> Button b1;(��ü����)
//b1.color = "red"; b1.text = "off";
//������ �Լ�: ��ü ������ �� ������ ȣ��Ǵ� �Լ�. ����������� �ʱ�ȭ�ϴ� �ڵ带 �־��ش�.
				   //Ŭ���� �̸��� �����ϰ� �������. �ڵ�ȣ��!! �빮�ڷ� ����. ��ȯ���� X(�⺻���� void)
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Car {
public:
		string color;
		int price;

		//������
		Car(){}
		Car(string c, int p) : color{ c }, price{ p } {	}
		void print() {
			cout << color << ", " << price << endl;
		}
};

int main()
{
		Car car1{ "red", 1000 };
		car1.print();
		return 0;
}