#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int data[3][5] = {	//[행][열]
				{1,2,3,4,5},
				{6,7,8,9,10},
				{11,12,13,14,15}
	};
    cout << data[0][0] << endl; 
    cout << data[2][4] << endl; 

	cout << "----------------------------------\n";
	for (int i = 0; i < 3; i++) //행을 결정
	{
		for (int j = 0; j < 5; j++) //열
		{
		cout << data[i][j] << " "; 
		}
		cout << endl;
	}
}
//행과 열을 선택하는 코드 집어넣어서 극장예매 시스템 만들어 보기
//별출력 참고!!!