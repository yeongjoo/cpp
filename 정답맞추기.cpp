#include "pch.h"
#include <iostream>
#include <time.h>

using namespace std;
int main()
{
	//int target = 55; //맞춰야하는 값
	srand(time(NULL));
	int target = rand() % 100; //100보다 항상 작은 값이 나오게 됨
	int input; //입력받아 넣을 변수

	int count = 0; //얼마만에 성공했는지 count 하기 위해 꼭 0을 넣어줘야함!! 원래 뭔지 모르기때문에...
	//변수에 처음값을 넣어주는 것 : 초기화 ★
	//main함수 내에서 초기화를 시켜주지 않으면 쓰레기값이 들어있어 연산 사용 불가
	//변수에 들어갈 수 있는 값 3가지: 쓰레기값, 초기값, 대입값
	do {
		count++;
		cout << "생각한 숫자 입력: ";
		cin >> input;
		if(input > target) {
			cout << "숫자가 너무 큽니다.\n";
		}
		if(input < target) {
			cout << "숫자가 너무 작습니다.\n";

		}

	} while (input != target); //input이 target이랑 같을 때까지 계속 입력받도록.
	cout << "축하합니다. 정답입니다." << endl;
	cout << "당신의 시도 횟수는" << count << "회" << endl;
}