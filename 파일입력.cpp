#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream is{ "numbers.txt" };
	if (!is)
	{
		cerr << "���� ���¿� ����!!" << endl;
		exit(1);
	}
	int number;
	cout << "�б� ����" << endl;
	while (is) //stream�� -���� �ʰ�- ��� �ִ� ��쿡
	{
			is >> number;
			cout << number << " ";
	} //��ü������ �Ҹ��ڸ� �������... ���� ���� �ʿ䰡 ����.
	cout << endl;
	cout << "�б� �Ϸ�" << endl;
	return 0;
}

//��� ������� string
//���� ������� ��� �Է� ������ int�� �ϴ� ��� => string > int �� �ڵ� ��ȯ
//(Ÿ�Ժ�ȯ : ����ȯ) = casting