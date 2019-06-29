#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Rec {
public:
	int width;
	int height;

	Rec(int w, int h) { 
		width = w;
		height = h;			
	}
		
	void print() {
		cout << "면적은 " << width * height << endl;
	}
};

int main()
{
	Rec rec{ 100,	200 };

	rec.print();

	return 0;
}
