#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	try {
		int num = 0;
		//cout << 5 / 0 << endl; //���� �߻� �� ���α׷� �ߴ�!
		//����(Error)�� �߻��ϸ� �� �κи� ���࿡�� ���ܽ�Ŵ. ����(Exception) ó��
		if (num == 0) throw num;
	}
	catch (int e) {
		cout << "num���� " << e << "�̹Ƿ� �����߻�!!" << endl;
		cout << "�����߻�!!" << endl;
	}
	cout << "���� ����Ʈ �ɱ��.." << endl;

	return 0;
}