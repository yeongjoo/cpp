#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	char board[3][3] = {
		{' ', ' ', ' '},
		{' ', ' ', ' '},
		{' ', ' ', ' '}
	}; //게임판
	int x, y; //좌표
	for (int i = 0; i < 9; i++) {
		cout << "x, y좌표 입력: ";
		cin >> x >> y;

			if (i % 2 == 0) {
				board[x][y] = 'X';
			}
			else {
				board[x][y] = 'O';
			}
			for (int j = 0; j < 3; j++) //열 결정
			{
				cout << "|---|---|---|" << endl;
				cout << "| " << board[j][0] << " | " << board[j][1] << " | " << board[j][2] << " |" << endl;
				cout << "|---|---|---|" << endl;
			}
				
	}
	
}

