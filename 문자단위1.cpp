#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream is{ "score.txt" };
	if (!is)
	{
		cerr << "���� ���� ����" << endl;
		exit(1);
	}
	char c; //���ڴ����� �о ó���� ����
	is.get(c); //�Է�stream���� �����ͼ� c�� ����
	cout << "�о�� ����: " << c << endl;

	ofstream os{ "score2.txt" };
	while (is.get(c))
	{
		cout << "�о�� ����: " << c << endl;
		os.put(c); //����...
	}
	return 0;
}