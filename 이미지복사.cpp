#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string infile, outfile;
	cout << "���� ���� �̸�: ";
	cin >> infile;
	cout << "���� ���� �̸�: ";
	cin >> outfile;

	ifstream is{ infile, ios::binary };
	ofstream os{ outfile, ios::binary };

	os << is.rdbuf(); //���� ������ buffer�� �������ڴٴ� ��
	while (!is.eof()) //eof ������ �ƴ��� Ȯ��
	{
		os.put(is.get());
	}
	return 0;
}