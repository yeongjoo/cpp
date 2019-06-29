#include "pch.h"
#include <iostream> //c++ = 부품조립식/객체지향형 언어
#include <string>

using namespace std; //자동완성 : ctrl + spacebar

int main()
{
	int temp;
    cout << "오늘은 몇도: "; 
	cin >> temp;
	cout << "오늘의 온도는 " << temp << "이군요" << endl;
	
	if (temp > 20) { //if 항상 bool type (yes/no) (관계연산자=비교연산자)
		cout << "아주 더운 날씨군요!" <<endl;
	}
	else {
		cout << "아주 더운 날씨는 아니군요!\n"; //alt+l 줄이동

	}
	string today = "";
	cout << "오늘의 날씨는: ";
	cin >> today;
	cout << "오늘의 날씨는 " << today << "이군요" << endl;

}


//day03 배열