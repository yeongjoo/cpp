#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
		int pizza_slices = 0;
		int persons = -1;
		int slices_per_person = 0;
		try {
			cout << "피자 조각수를 입력: ";
			cin >> pizza_slices;
			cout << "사람 수 입력: ";
			cin >> persons;
			if (persons == 0) throw persons;
			slices_per_person = pizza_slices / persons;
			cout << "한 사람 당 먹을 수 있는 피자 조각 수: " << slices_per_person << endl;
		}
		catch (int e) { //변수 타입 일치시켜 줄 것 (persons)
			cout << "에러 발생!! 사람 수가 " << e << "명 입니다." << endl;
		}
			cout << "인원 오류로 인해 프로그램이 중단됩니다." << endl;

		return 0;
	}