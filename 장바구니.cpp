#include "pch.h"
#include <string>
#include <iostream>
#include "product.h"

using namespace std;

void pay(product list[]) { //지불하는 함수 구현
	int sum =0;
	for (int i = 0; i < 3; i++)
	{
		cout << "가격: " << list[i].price;
		sum = sum + list[i].price;
	}
	cout << endl;
	cout << "당신이 결제할 금액은 : " << sum << "원입니다.";
}

int main()
{
	//1. 살 물건을 장바구니에 입력해서 넣음.
	//2. 장바구니 배열을 만듦.
	//3. 물건객체를 장바구니 배열에 넣어야 함.
	cout << "구매할 물건명과 가격 입력: ";
	string name;
	int price;
	cin >> name >> price;

	cout << "구매할 물건명과 가격 입력: ";
	string name2;
	int price2;
	cin >> name2 >> price2;

	cout << "구매할 물건명과 가격 입력: ";
	string name3;
	int price3;
	cin >> name3 >> price3;

	product p1{ name, price }; // 물건 하나에 대해 부품화
	product p2{ name2, price2 }; // 물건 하나에 대해 부품화
	product p3{ name3, price3 }; // 물건 하나에 대해 부품화
	product list[3] = { p1, p2, p3 }; // 장바구니에 넣어줌.

	cout << "장바구니 출력" << endl;
	for (product p : list)
	{
		  p.print();
	}
	
	pay(list);
	
	return 0;
}