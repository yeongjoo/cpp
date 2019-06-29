#include "pch.h"
#include <iostream>
using namespace std;
	int speedUp(int s) {		
		int base = 100;
		
		return base + s;
	}
	int speedDown(int s)	{
		int base = 100;
		
		return base - s;
	}
int main()
{
	int result1 = speedUp(20);
	cout << "speedUp (20)의 결과는 " << result1 << endl;
	int result2 = speedDown(20);
	cout << "speedDown (20)의 결과는 " << result2 << endl;
}


