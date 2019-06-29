#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num;
	cout << "사원번호 입력: ";
	cin >> num;
	char c = num[0];
	if (c == 'A') {
    cout << "기획부입니다.\n"; 
	}
	if (c == 'B') {
    cout << "총무부입니다.\n"; 
	}
	if (c == 'C') {
    cout << "인사부입니다.\n"; 
	}


	string s;
	cout << "주민등록번호 입력: ";
	cin >> s;

	char no = s[7];
	if (no == '1' || no == '3') {
		cout << "남자" << endl;
	}
	else {
		cout << "여자" << endl;
	}
	s.append("번호입니다."); //끝에 추가 (원본에 영향을 미치는 파괴적 함수)
	cout << s << endl;

	cout << s.at(7) << endl; //비파괴적 함수 (영향을 미치지 않고 사용만 함)
			//s[7] 과 동일
	return 0;
}

//사원번호 입력, A100 기획부 B200 총무부 C300 인사부
//주민번호 입력 뒷 앞자리로 남녀 판별, -를 제거하여 출력
													//	(remove(pos, len)

//내가 정의한 변수뒤에 . 찍으면 사용 가능한 기능들이 나옴,, 반환되는 값 &입력가능한 값