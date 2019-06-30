#include "pch.h"
#include <iostream>
#include "Car2.h"
using namespace std;


int main()
{
	Car2 car1{ 100 };
	Car2 car2{ 200 };

	car1.pring();
	car2.pring();

	return 0;
}