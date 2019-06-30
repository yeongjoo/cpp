#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream is{ "score.txt" };
	if (!is)
	{
		cerr << "파일 오픈 에러" << endl;
		exit(1);
	}
	char c; //문자단위로 읽어서 처리할 변수
	is.get(c); //입력stream에서 가져와서 c에 저장
	cout << "읽어온 문자: " << c << endl;

	ofstream os{ "score2.txt" };
	while (is.get(c))
	{
		cout << "읽어온 문자: " << c << endl;
		os.put(c); //복사...
	}
	return 0;
}