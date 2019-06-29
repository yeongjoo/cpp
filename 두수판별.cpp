#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int x,y;
	cout << "x값을 입력하시오: ";
	cin >> x;
	cout << "y값을 입력하시오: ";
	cin >> y; //이동 alt+방향키

	if(x > y){
		cout << "더 큰 수는 " << x;
	}
	else{
		cout << "더 큰 수는 " << y;
	}
}
