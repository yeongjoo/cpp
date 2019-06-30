#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string infile, outfile;
	cout << "원본 파일 이름: ";
	cin >> infile;
	cout << "복사 파일 이름: ";
	cin >> outfile;

	ifstream is{ infile, ios::binary };
	ofstream os{ outfile, ios::binary };

	os << is.rdbuf(); //읽은 내용을 buffer에 내보내겠다는 뜻
	while (!is.eof()) //eof 끝인지 아닌지 확인
	{
		os.put(is.get());
	}
	return 0;
}