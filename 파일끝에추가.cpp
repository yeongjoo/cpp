#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream os("sample.txt", ios::app); //app: 끝에 추가 appendix?
	if (!os)
	{
		cerr << "파일 오픈 실패" << endl;
		exit(1);
	}
	/*os << "third!!" << endl;*/
	for (int i = 0; i < 5; i++)
	{
		cout << "내용을 입력하세요: ";
		string input;
		cin >> input;
		os << input << endl;
	}
	return 0;
}