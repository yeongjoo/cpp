#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<int> age{ 10, 20, 30 }; //���� �ƴ� ��� �־���
	for (int i = 0; i < 3; i++)
	{
	cout << age[i] << endl;
	}
	return 0;
}