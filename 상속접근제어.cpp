#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Car {
string etc = "�л�����"; //default
private:
	string sn = "201405";//�ֹι�ȣ
protected: //�ڡ١ڡ�
	string tel = "0114567";//����ó
public:
	string name = "ȫ�浿"; //�̸�
};
class Truck : public Car {
public: //�� ���ָ� defaul ���� private!!
	void print() { //sn�� private�̶� �Ұ�, tel�� ��ӹ޾ұ� ������ ���� ����
		cout << tel << ", " << name << endl; //public�� name ����, etc �Ұ�
	}
};
int main() 
{	
	Car car1;
	//class �ۿ����� public�� ���� ���� _ default ���� private!!!
	cout << car1.name << endl;
	Truck truck1;
	truck1.print();

	return 0;
}
