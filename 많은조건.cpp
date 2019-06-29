#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int number = 2;
	switch (number) {
	case 0:
		cout << "0입니다."; break;
	case 1:
		cout << "1입니다."; break;
	case 2:
		cout << "2입니다."; break;
	default:
		cout << "3입니다."; break;//마지막은 break 안써도 OK

	}
}
