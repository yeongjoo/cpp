#include "pch.h"
#include <iostream>
#include <string>
#include <fstream> //file 관련

using namespace std;

int main()
{
	//ofstream os{ "c:/temp/me.txt" }; //파일명만 써주면 cpp파일과 같은 위치에 생성됨
	//os << "hi.." << " ";
	//os << "hi2.." << " ";
	ofstream os{ "c:/temp/number.txt" };
	for (int i = 0; i <= 100; i++)
	{
		os << i << endl;
	}
	
	return 0;
}

