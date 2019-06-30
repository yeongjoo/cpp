#include <string>
#include <iostream>
using namespace std;

class member
{
public:
	string name;
	int age;
	string tel;
	member() {};
	member(string n, int a, string t) : name{ n }, age{ a }, tel{ t } {};
	void print() {
		cout << "name: " << name << ", age: " << age << ", tel: " << tel << endl;
	}
};


