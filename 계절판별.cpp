#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int month;
    cout << "월을 입력하세요: "; 
	cin >> month;
	switch (month)
	{
	case 3: case 4: case 5:
		cout << "봄입니다.\n"; break;
	case 6: case 7: case 8:
		cout << "여름입니다.\n"; break;
	case 9: case 10: case 11:
		cout << "가을입니다.\n"; break;
	default:
		cout << "겨울입니다.\n"; break;
	}
}
