#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream os("sample.txt", ios::app); //app: ���� �߰� appendix?
	if (!os)
	{
		cerr << "���� ���� ����" << endl;
		exit(1);
	}
	/*os << "third!!" << endl;*/
	for (int i = 0; i < 5; i++)
	{
		cout << "������ �Է��ϼ���: ";
		string input;
		cin >> input;
		os << input << endl;
	}
	return 0;
}