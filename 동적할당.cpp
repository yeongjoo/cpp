#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	try
	{
		int* p = new int[100000];
		delete p; //���� �Ҵ� -> �� ���� memory�� ����Ǿ��ٰ� ���ʿ� �� ���ŵ�
	
	}
	catch (exception& e)
	{
		cout << "ǥ�� ���� �߻�: " << e.what();
	}

	return 0;
}