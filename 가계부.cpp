//�ֿܼ��� 5��ġ �Է¹޾� ���� - > 5�� �� �� �ѱݾ�, ��ձݾ�

#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream os{ "book.txt" };
	if (!os)
	{
		cerr << "���� ���� ����" << endl;
		exit(1);
	}
	for (int i = 0; i < 5; i++)
	{
		int date, outcome;
		cout << "��¥�� �ѱݾ��� �Է��ϼ���: ";
		cin >> date >> outcome;
		os << date << " " << outcome << endl;
	}
	ifstream is{ "book.txt" };
	if (!is)
	{
		cerr << "���� ���¿� ����!!" << endl;
		exit(1);
	}
	int date1, outcome1;
	int sum = 0;
	int count = 0;
	
	cout << "���� �о���� ����" << endl;
	while (is >> date1 >> outcome1)
	{
		cout << "date: " << date1 << ", outcome: " << outcome1 << endl;
		sum = sum + outcome1;
		count++; 
	}
	cout << "���� �о���� ��" << endl;
	cout << "5�� �� �� �� �ݾ�: " << sum << "��" << endl;
	cout << "5�� �� �� ��ձݾ�: " << sum / count << "��" << endl;
	
	return 0;
}