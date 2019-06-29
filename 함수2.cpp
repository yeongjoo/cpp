#include "pch.h"
#include <iostream>

using namespace std;
	//커피 가격(3000) * 인원(5) => 총 금액
	//총 금액 10000원 이상이면 2000원 할인

int total(int count) {
	const int price = 3000; //고정된 값!!
	int total = price * count;
	return total; //계산 결과를 total로 반환 -> 총 금액으로 할인받기 위해
}

int main()
{
	int sum = total(5);
	int result = 0; //선언위치!!
	//if 안에 들어있으면 지역 변수,,, cout에 포함시키기 위해 상위 범위에서 선언 후에 if 안에서는 대입만 해준다.
	if (sum >= 10000) {
		result = sum - 2000;
	}
	else {
		result = sum;
	}
	cout << "최종 지불할 금액은 " << result << "원 입니다." << endl;
    return 0; 
}
