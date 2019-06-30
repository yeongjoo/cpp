#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream is{ "temperture.txt" };
	if (!is)
	{
		cerr << "파일 오픈에 실패!!" << endl;
		exit(1);
	}
	
	int hour;
	double temp;
	double sum = 0; //누적 변수
	int count = 0; //count 변수
	cout << "파일 읽어오기 시작" << endl;
	while (is >> hour >> temp)
	{
	cout << "hour: " << hour << ", temperature: " << temp << endl;
	sum = sum + temp;
	count++; //while문 돌아갈 때마다 count + 1
	}
	cout << "파일 읽어오기 끝" << endl;
	cout << "온도 평균: " << sum/count << endl;
	

	return 0;
}