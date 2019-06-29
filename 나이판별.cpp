#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int age;
    cout << "나이를 입력하세요: "; 
	cin >> age;

	if (age >= 18){
		cout << "성인\n";
	}
	else if (age >= 14){ //else if는 순서대로 진행됨.. if를 여러개 사용하면 안될 경우가 있음 -> else if를 사용!!
		cout << "청소년\n";
	}
	else if (age >= 8) {
		cout << "어린이\n";
	}
	else{
		cout << "아동\n";
	}
}
