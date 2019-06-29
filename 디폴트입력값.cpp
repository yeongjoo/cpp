#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void total(int price = 3000, int count = 1) { //디폴트 값으로 설정되어 아래로 들어감!!
	cout <<"총 금액은 " << price * count << endl; 
}

void total2(int day, int price = 3000, int count = 1) { //정의 된 값과 안된 값이 공존.
				  //디폴트값 없는 것을 앞으로 빼야함!!!
	cout << day << "일 총 금액은 " << price * count << endl;
}
int main()
{
	total();
	total(2000);
	total(2000, 3);
	
	total2(23, 2000, 3);
	total2(23);
	return 0;
}

