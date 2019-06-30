#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream is{ "temperture.txt" };
	if (!is)
	{
		cerr << "���� ���¿� ����!!" << endl;
		exit(1);
	}
	
	int hour;
	double temp;
	double sum = 0; //���� ����
	int count = 0; //count ����
	cout << "���� �о���� ����" << endl;
	while (is >> hour >> temp)
	{
	cout << "hour: " << hour << ", temperature: " << temp << endl;
	sum = sum + temp;
	count++; //while�� ���ư� ������ count + 1
	}
	cout << "���� �о���� ��" << endl;
	cout << "�µ� ���: " << sum/count << endl;
	

	return 0;
}