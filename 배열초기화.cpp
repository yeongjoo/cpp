#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	//배열의 값을 아직 모를 때
	int number[10];

	//배열의 값을 처음부터 알고 있을 때
	int height[5] = { 130, 150, 170, 160, 180 }; //[] 비어있어도 됨. 뒤에 수가 5개 뿐이기 때문..
	height[0] = 140; //값이 변경됨
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << height[i] << endl;
	//} 
	//ctrl+K+C 주석설정
	
	int number2 = 100; //간단히 표현하는 방법! int number2{ 100 }; 
	
	cout << "------------------------\n";
	
	for (int h : height) //for each 자동으로 다음 칸에서 진행... int height의 변수값들을 불러오기 위해 int h 사용
	{
		cout << h + 1 << endl; //height에 있는 값은 그대로
		}

	//for (int& h : height) //참조형: 주소를 가리키는 &
	//{
	//	h++; //h값을 불러와서 +1 시키도록 (i값은 그대로)
	//}

	cout << "------------------------\n";
	
	for (int h : height)
	{
		cout << h << endl;
	}

}
