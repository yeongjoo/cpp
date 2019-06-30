//output file stream => ofstream 출력
//input file stream => ifstream 입력
//file stream => fstream 출력, 입력 on/off 형식으로 할 수 있음 (동시에는 기능 불가)

#include "pch.h"
#include <iostream>
#include <fstream> //file과 관련된 stream 부품 사용 가능
using namespace std;

int main()
{   
	ofstream os{ "numbers.txt" }; //생성자 - 파일객체 만들어 줌 //파일 제목 중복되면 그냥 덮어쓴다...
	if (!os) { //os가 없으면
		cerr << "파일 오픈에 실패!!" << endl;
		exit(1);
	}
	for (int i = 0; i < 100; i++)
	{
		os << i << " ";
		cout << i << ": 파일에 쓰는 중..!" << endl;
	}
	cout << "파일에 쓰기 완료되었습니다." << endl;
	return 0;
}

