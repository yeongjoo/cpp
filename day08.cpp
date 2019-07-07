//정적변수: static <-> dynamic (상속 다음으로 중요!!)
//- 생성된 객체간 데이터를 공유할 목적으로 사용되는 변수
//- 객체 생성과는 무관한 변수
//- 객체 생성 시 멤버변수가 동적으로 메모리 할당됨
//- 반면에 정적변수는 클래스마다 하나만 존재하게 됨
//- class 이름으로 접근하여 사용
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Tv {
public:
	int chNo;
	string color;
	int price;
	static int count; //Tv class의 memory를 외부(count)에 따로 가짐
	static int sum;
	//객체생성시 동적으로 복사되지 않는다.
	//클래스당 1개만 가지면서 생성된 객체에서 서로 공유해서 사용 가능
	Tv(){}
	Tv(int cn, string c, int p) : chNo(cn), color{ c }, price{ p } {
		count++; //호출 시 마다 count+1 ㄴ소괄호 == 중괄호
		sum = sum + p; }
	void print() {
		cout << "채널 번호 : " << chNo << ", Tv color : " << color << ", 가격 : " << price << endl;
	}
};

int Tv::count = 0;
int Tv::sum = 0;

int main()
{
	Tv tv1{ 100, "black", 100 };
	cout << "생성된 tv수는 " << Tv::count << endl;
	cout << "tv구매 총 액은 " << Tv::sum << endl;
	Tv tv2{ 200, "red", 150};	//class 이름으로 접근하여 사용 == tv.count, tv.sum
	cout << "생성된 tv수는 " << Tv::count << endl;
	cout << "tv구매 총 액은 " << Tv::sum << endl;

	//인스턴스 변수 (dynamic)
	tv1.print();
	tv2.print();
	cout << "tv금액의 평균은 " << Tv::sum/Tv::count << endl;

	return 0;
}
