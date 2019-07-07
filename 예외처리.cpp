#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	try {
		int num = 0;
		//cout << 5 / 0 << endl; //에러 발생 시 프로그램 중단!
		//에러(Error)가 발생하면 그 부분만 실행에서 제외시킴. 예외(Exception) 처리
		if (num == 0) throw num;
	}
	catch (int e) {
		cout << "num값이 " << e << "이므로 에러발생!!" << endl;
		cout << "에러발생!!" << endl;
	}
	cout << "내가 프린트 될까요.." << endl;

	return 0;
}