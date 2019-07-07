#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Day {
public:
	int time;
	string doing;
	string location;
	static int sum;
	static int count;

	Day(){}
	Day(string d, int t, string l) : doing{ d }, time {t}, location {l} {
		count++;//증감연산자(== count = count + 1;)
		sum = sum + t;
	}
	static void sumPrint() { //객체 생성 이전에 class이름으로 호출/접근이 가능하다...
		cout << "총 시간은 : " << sum << "시간" << endl;
	}
	static void avgPrint() { //static함수에 일반변수 사용불가.
		cout << "평균 하는 일의 시간은 : " << sum/count << "시간" << endl;
	}

	void print() {
		cout << "하는 일 : " << doing << ", 시간 : " << time << ", 장소 : " << location << endl;
	}
};
int Day::count = 0; //초기화
int Day::sum = 0;

int main()
{
	Day day1{ "자바공부", 10, "강남" };
	Day day2{ "여행", 15, "강원도" };
	Day day3{ "운동", 11, "피트니스" };

	//일반 함수나 멤버변수는 생성된 객체이름으로 접근 사용.
	//객체 생성 후 그 이름으로 접근
	day1.print();
	day2.print();
	day3.print();

	cout << "며칠간 했는지 : " << Day::count << "일" << endl;
	Day::sumPrint(); //== day1.sumPrint();
	Day::avgPrint();

	return 0;
}