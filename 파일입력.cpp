#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream is{ "numbers.txt" };
	if (!is)
	{
		cerr << "파일 오픈에 실패!!" << endl;
		exit(1);
	}
	int number;
	cout << "읽기 시작" << endl;
	while (is) //stream이 -닫지 않고- 계속 있는 경우에
	{
			is >> number;
			cout << number << " ";
	} //자체적으로 소멸자를 만들어줌... 따로 써줄 필요가 없다.
	cout << endl;
	cout << "읽기 완료" << endl;
	return 0;
}

//모든 입출력은 string
//파일 입출력인 경우 입력 변수를 int로 하는 경우 => string > int 로 자동 변환
//(타입변환 : 형변환) = casting