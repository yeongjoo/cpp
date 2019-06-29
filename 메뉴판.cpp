#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int number;
    cout << "저기요!!!\n"; 
    cout << "------------------------\n"; 
    cout << "메뉴를 고르세요.\n"; 
    cout << "------------------------\n"; 
    cout << "1)짜장면 2)짬뽕 3)우동\n"; 
    cout << "------------------------\n"; 
    cout << "당신의 선택은? "; 
	cin >> number;
	switch (number) {
	case 1:
		cout << "당신은 짜장면을 주문하셨습니다.\n"; break;
	case 2:
		cout << "당신은 짬뽕을 주문하셨습니다.\n"; break;
	case 3:
		cout << "당신은 우동을 주문하셨습니다.\n"; break;
	}
}

//딱 떨어지는 경우는 switch, 범위를 필터링하는 경우는 if/else if