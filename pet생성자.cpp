//pet 이름, 나이 멍멍이(3), 야옹이(5) 
//값 넣고 이름,나이 print 할 수 있는 함수
//짖다("dog", 3)=>멍멍 
//짖다("cat")=>야옹 
//먹다
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Pet {
public:
	string name;
	int age;

	//멤버변수 초기값을 넣어주는 함수가 따로있다. 
	//클래스를 복사 (객체생성) 	//객체생성시 자동으로 호출되는 함수: 생성자
	//생성자는 반환값이 없음.(항상 void) 생성자(함수)는 클래스 이름과 동일 _ 대문자로 시작하는 유일한 함수)

	Pet(string n, int a) { //변수 두개를 자동으로 초기화 //명시적으로 호출하지 않는다.
		name = n;
		age = a;				//생성자의 형태.. 입력값 넣어줌!!
	}
	//== Pet(string n, int a) : name{ n }, age(a){} 한줄로 간단하게 쓸 수 있다!! name(n), age{ a } 둘다 가능
	Pet(string n) {
		name = n;
	} //다형성
	Pet(int a) {
		age = a;
	}
	Pet() {
		//입력값이 없이 자동으로 생성되는 _ 기본 생성자
	}

	~Pet() { //소멸자
		cout << name << ": 객체 소멸됨 " << endl;
	}

	void eat() {
		cout << "먹다." << endl;
	}
	void speak(string n, int age) {
		cout << "멍멍!" << endl;
	}
	void speak(string n) {
		cout << "야옹~" << endl;
	}
	void print() {
		cout << "이름은 " << name << ", 나이는 " << age << endl;
	}
};

int main()
{
	//Pet dog(,); - 예전 방법 //Pet dog {}; - 최신 방법 //Pet dog = {,};
	Pet dog{"멍멍이", 3};
	Pet cat{"야옹이", 5};

	dog.print();

	cout << "------------------------\n";

	cat.print();

	cout << "------------------------\n";
	return 0;
}

//stream 만들어서 외부와의 통로 형성 => 데이터 끌어옴
//stream 끊어서 connection 차단해야함 = 소멸자