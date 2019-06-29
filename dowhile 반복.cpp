#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string str;
	do {
		cout << "문자열을 입력: ";
		getline(cin, str); //콘솔에서 한 줄 전체를 가져와서 str에 저장
		//cin >> str; 에서는 단어만 가능
		cout << "당신의 입력값은 " << str << endl;
	} while (str != "종료");//일단 do!하고 while인지 확인하여 true이면 반복~

}
