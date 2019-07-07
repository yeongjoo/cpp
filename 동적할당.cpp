#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	try
	{
		int* p = new int[100000];
		delete p; //동적 할당 -> 힘 영역 memory에 저장되었다가 불필요 시 제거됨
	
	}
	catch (exception& e)
	{
		cout << "표준 예외 발생: " << e.what();
	}

	return 0;
}