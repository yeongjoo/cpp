#include "pch.h"
#include <iostream>
#include <string>
#include "House.h"
using namespace std;

class UrHouse : public House {
public: //외부에서도 접근 가능
	bool garden; //정원 여부

	void tent() {
		cout << "정원에 텐트를 치다." << endl;
	}
};
