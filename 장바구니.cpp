#include "pch.h"
#include <string>
#include <iostream>
#include "product.h"

using namespace std;

void pay(product list[]) { //�����ϴ� �Լ� ����
	int sum =0;
	for (int i = 0; i < 3; i++)
	{
		cout << "����: " << list[i].price;
		sum = sum + list[i].price;
	}
	cout << endl;
	cout << "����� ������ �ݾ��� : " << sum << "���Դϴ�.";
}

int main()
{
	//1. �� ������ ��ٱ��Ͽ� �Է��ؼ� ����.
	//2. ��ٱ��� �迭�� ����.
	//3. ���ǰ�ü�� ��ٱ��� �迭�� �־�� ��.
	cout << "������ ���Ǹ�� ���� �Է�: ";
	string name;
	int price;
	cin >> name >> price;

	cout << "������ ���Ǹ�� ���� �Է�: ";
	string name2;
	int price2;
	cin >> name2 >> price2;

	cout << "������ ���Ǹ�� ���� �Է�: ";
	string name3;
	int price3;
	cin >> name3 >> price3;

	product p1{ name, price }; // ���� �ϳ��� ���� ��ǰȭ
	product p2{ name2, price2 }; // ���� �ϳ��� ���� ��ǰȭ
	product p3{ name3, price3 }; // ���� �ϳ��� ���� ��ǰȭ
	product list[3] = { p1, p2, p3 }; // ��ٱ��Ͽ� �־���.

	cout << "��ٱ��� ���" << endl;
	for (product p : list)
	{
		  p.print();
	}
	
	pay(list);
	
	return 0;
}