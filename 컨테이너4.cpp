#include "pch.h"
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
	set<string> bag; //순서가 상관 없을 때, 중복을 걸러내고 싶을 때 사용!!!
	bag.insert("휴대폰");
	bag.insert("티슈");
	bag.insert("볼펜");
	bag.insert("휴대폰"); //중복되어 집어넣지 않았기 때문에 size에 노포함

	cout << bag.size() << endl;

	auto point = bag.find("싸인펜");
	if (point != bag.end()) { //bag.end 가방의 밖..? 밖에 있지 않다면 -> 안에 있다면
		cout << "있음.";
	}
	else {
		cout << "없음.";
	}

	return 0;
}