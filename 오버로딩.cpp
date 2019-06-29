#include "pch.h"
#include <iostream>
using namespace std;

void call() {
cout << "파라메터 없는 call함수 호출됨 \n"; 
}

void call(int count) {
	cout << count << ": 파라메터 있는 call함수 호출됨 \n";
}

int main()
{
	call();
	call(100);
	return 0;
}
//함수의 입력값이 다르면 다른 함수로 인식, 함수는 같아도 상관없음. 반드시 입력값의 순서, 갯수, 타입이 달라야한다.
//함수 이름을 중복해서 사용 가능. 함수 하나를 사용해서 여러가지 기능을 구현.
//=> ☆ 오버로딩 ☆ (다형성) - 객체지향 언어의 가장 큰 장점