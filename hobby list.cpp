//입력값 받아 hooby list 5개 출력
#include "pch.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> hobby_list;		

	hobby_list.push_back();
	hobby_list.push_back();
	hobby_list.push_back();
	hobby_list.push_back();
	hobby_list.push_back();

	cout << "hobby_list: ";

	for (string hobby : hobby_list) {
		cout << hobby << " ";
	}

	return 0;
}
//2014년도 이후 버전의 c++ 교재를 이용할 것..