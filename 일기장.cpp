#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string date;
	string title;
	string content;

	cout << "날짜: ";
	cin >> date;
	
	ofstream os{ "c:/temp/" + date + ".txt" };
	
	cout << "제목: ";
	cin >> title;
	cout << "내용: ";
	cin >> content;

	
	os << date << endl;
	os << title << endl;
	os << content << endl;

	return 0;
}
//다형성 => overloading