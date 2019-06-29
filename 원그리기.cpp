#include "pch.h" //내가 만든 것 포함시킬 때 필요
#include <iostream> //아래 세개는 10000개를 포함시킬 때 사용
#include <string>
#include <windows.h>

using namespace std;

class Circle {
public:
	void draw(int x, int y, int w, int h) { //가로 세로 좌표 길이 높이 
		HDC hdc = GetWindowDC(GetForegroundWindow()); //다음 주에 배울 내용... static
		Ellipse(hdc, x, y, w, h); //그림을 그려주는 함수
	}
};

int main()
{
	Circle c1;
	c1.draw(100, 100, 200, 200);
	Circle c2;
	c2.draw(100, 600, 300, 300);
	system("pause"); //console이 멈춤! 그림 유지시키기 위해
	return 0;
}
