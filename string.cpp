//string = 부품 (class) 참조형 변수.. 변수에 주소값이 들어감
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s; //메모리 형성 - 주소값만 넣을 수 있다.
	s = "Hello World1"; //chr 연결한 것이 들어감.
	string s2 = "Hello World2"; //한 줄에 대입할 수도 있음
	string s3{ "Hello World3" };//같은 표현 다른 방법..

	string s4 = s + s2; //결합연산자

	cout << s[0] << endl; //특정 문자열의 chr를 추출해낼 수 있다.

	if (s == s2) {
		cout << "두 문자열이 동일" << endl;
	}
	else {
		cout << "두 문자열이 상이" << endl;
	}
	
	string s5 = "abc";
	string s6 = "def";
	
	if (s5 < s6) { //비교연산자
		cout << "s5가 s6보다 앞에 있습니다." << endl;
	}
	else {
		cout << "s6이 s5보다 앞에 있습니다." << endl;
	}
    return 0; 
}
