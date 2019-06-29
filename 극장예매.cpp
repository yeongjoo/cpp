#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int seat[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; //극장자리 표시할 배열
	//예매된 좌석 초기화하지 않기위해 아래에서부터 무한루프
	while (true) {
		cout << "---------------------------------------\n";
		for (int i = 0; i < 10; i++){
			cout << i + 1 << "   ";
		}
		cout << "\n---------------------------------------\n";

		for (int i = 0; i < 10; i++){
			cout << seat[i] << "   ";
		}
		cout << "\n---------------------------------------\n";
		cout << "좌석번호 입력(종료-0): ";
		
		int choice;
		cin >> choice;
		if (choice == 0) {
			cout << "예매 종료..." << endl;
			exit(0); //프로그램을 정상적으로 종료하고 싶을 때 사용
		}

		if (seat[choice - 1] == 0) { //배열에서는 0부터기 때문에 -1해준다.
			//예매 가능
			cout << "예매 가능한 좌석입니다." << endl;
			seat[choice - 1] = 1;
			cout << "예매가 완료되었습니다." << endl;
		}
		else {
			//예매 불가능
			cout << "이미 예매된 좌석입니다." << endl;
			cout << "다른 좌석을 선택해주세요." << endl;
		}
	}
}