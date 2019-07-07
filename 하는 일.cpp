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
		count++;//����������(== count = count + 1;)
		sum = sum + t;
	}
	static void sumPrint() { //��ü ���� ������ class�̸����� ȣ��/������ �����ϴ�...
		cout << "�� �ð��� : " << sum << "�ð�" << endl;
	}
	static void avgPrint() { //static�Լ��� �Ϲݺ��� ���Ұ�.
		cout << "��� �ϴ� ���� �ð��� : " << sum/count << "�ð�" << endl;
	}

	void print() {
		cout << "�ϴ� �� : " << doing << ", �ð� : " << time << ", ��� : " << location << endl;
	}
};
int Day::count = 0; //�ʱ�ȭ
int Day::sum = 0;

int main()
{
	Day day1{ "�ڹٰ���", 10, "����" };
	Day day2{ "����", 15, "������" };
	Day day3{ "�", 11, "��Ʈ�Ͻ�" };

	//�Ϲ� �Լ��� ��������� ������ ��ü�̸����� ���� ���.
	//��ü ���� �� �� �̸����� ����
	day1.print();
	day2.print();
	day3.print();

	cout << "��ĥ�� �ߴ��� : " << Day::count << "��" << endl;
	Day::sumPrint(); //== day1.sumPrint();
	Day::avgPrint();

	return 0;
}