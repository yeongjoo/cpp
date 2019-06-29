#include "pch.h"
#include <iostream>
#include <ctime> //time값 포함

using namespace std;
int main()
{
	srand(time(NULL)); //매번 같은 값을 구하기 위해서는 srand 안하면 된다!!
    int dice1 = (rand() % 6) + 1; //c++에서는 rand 사용해도 seed 값이 정해져있어서 같은 값이 나옴
    int dice2 = (rand() % 6) + 1; //주사위 이므로 0이 나오지 않기위해서 +1

	cout << "두 주사위의 합: " << dice1 + dice2 << endl;
}
