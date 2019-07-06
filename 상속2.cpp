#include "pch.h"
#include <iostream>
#include <string>
#include "House.h"
#include "MyHouse.h"
#include "UrHouse.h"
using namespace std;


int main()
{
	MyHouse m1;
	m1.color = "red";
	m1.door = 2;
	m1.size = 10;
	m1.tv();
	m1.sleep();
	m1.fish();

	UrHouse u2;
	u2.color = "blue";
	u2.door = 1;
	u2.garden = true;
	u2.tent();
	u2.sleep();
	u2.tv();

	return 0;
}
