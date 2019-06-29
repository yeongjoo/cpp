#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sn = "940707-2019623";
	for (auto s : sn) { //하나씩 가지고 오는 방법... : //auto하면 알아서 type을 결정해준다. - (char s: sn)
		if (s == '-') {
			continue; //-이면 skip
		}
		cout << s;
	}
	cout << endl;

	string name[5] = { "유리", "맹구", "훈이", "짱구", "철수" };
	
	for (int i = 0; i < 5; i++)
	{
		cout << name[i] << "야 안녕" << endl;
		name[i] = name[i] + "야 안녕";
	}

	for (string& x : name ) //&를 붙이면 name의 주소값에 x+"야 안녕"을 넣어 버림... 파괴형
	{
		cout << x << "야 안녕" << endl;
		x = x + "야 안녕";
	}

	for (string& x : name) //&가 없으면 name의 주소값을 x에 가져와서 실행!! 
	{
		cout << x << endl;
	}

	return 0;
}

//친구이름 5명 넣어서 친구이름 안녕! 이라고 5번 출력
//1. add 오버로딩 100+100	100+11.22	11.22+33.44		"안녕"+"반가워"
//2. 입력값 333+444 (세자리+세자리) 중간에 연산자를 추출하여 해당 연산 수행.