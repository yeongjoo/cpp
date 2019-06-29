#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int x;
	cout << "x값을 입력하시오: ";
	cin >> x;

	if (x > 0) {
		cout << "x는 양수" << endl;
	}
	else if (x < 0)
	{
		cout << "x는 음수" << endl;
	} 
	else {
	cout << "x는 0" << endl;
	}
}