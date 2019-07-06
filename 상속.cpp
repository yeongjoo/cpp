#include "pch.h"
#include <iostream>
#include <string>
#include "House.h" //헤더 파일 House.h를 연결
using namespace std;


int main()
{
	House h1;

	h1.color = "green";
	h1.door = 1;

	h1.tv();
	h1.sleep();
	h1.print();
	
	return 0;
}

//부품을 만들 때, 이미 만들어진 것이 있다면 그것을 재사용 : 상속
//원래 있던 클래스: 부모클래스(Superclass)
//재사용하여 만든 클래스: 자식클래스(Subclass)
//- 갯수는 자식으로 갈 수록 더 많아짐.
//- 부모클래스는 일반적인 특징
//- 자식클래스는 구체적인 특징
//- 상속의 상속이 가능 : 다중상속