#include "pch.h"
#include <iostream>
#include <string>
#include "House.h"
using namespace std;

class MyHouse : public House { //House를 상속 받았다!!
public:
	int size; //연못 사이즈

	void fish() {
		cout << "물고기를 키우다." << endl;
	}
};