#include "pch.h"
#include <iostream>
#include <string>
#include "House.h"
using namespace std;

class MyHouse : public House { //House�� ��� �޾Ҵ�!!
public:
	int size; //���� ������

	void fish() {
		cout << "����⸦ Ű���." << endl;
	}
};