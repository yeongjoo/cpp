#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<int> v1;		//크기 정의하지 않고 있음..
								//collection 계열의 부품 : vector, array, list
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	cout << "v1: ";

	for (int number : v1) {
		cout << number << " ";
	}

	return 0;
}
