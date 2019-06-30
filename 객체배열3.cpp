#include "pch.h"
#include <iostream>
#include "Car2.h"
using namespace std;


int main()
{
	//배열 순서 : 타입 배열이름[갯수] = { 값, 값 };
	Car2 list[2] = { Car2{100}, Car2{200}
	};
	for (Car2 c : list) {
		c.pring();
	}

	return 0;
}