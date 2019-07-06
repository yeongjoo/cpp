#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Car {
string etc = "학생차량"; //default
private:
	string sn = "201405";//주민번호
protected: //★☆★☆
	string tel = "0114567";//연락처
public:
	string name = "홍길동"; //이름
};
class Truck : public Car {
public: //안 써주면 defaul 값은 private!!
	void print() { //sn는 private이라 불가, tel은 상속받았기 때문에 접근 가능
		cout << tel << ", " << name << endl; //public인 name 가능, etc 불가
	}
};
int main() 
{	
	Car car1;
	//class 밖에서는 public만 접근 가능 _ default 값은 private!!!
	cout << car1.name << endl;
	Truck truck1;
	truck1.print();

	return 0;
}
