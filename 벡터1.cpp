#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<int> age{ 10, 20, 30 }; //값을 아는 경우 넣어줌
	for (int i = 0; i < 3; i++)
	{
	cout << age[i] << endl;
	}
	return 0;
}