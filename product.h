#include <string>
#include <iostream>
using namespace std;

class product
{
public:
		string name;
		int price;
		product() {};
		product(string n, int p) : name{ n }, price{ p }{};

		void print() {
			cout << "name: " << name << ", price: " << price << endl;
		}
};
