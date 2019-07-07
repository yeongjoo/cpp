#include "pch.h"
#include <iostream>
#include <map> //<key&value> 함께 넣어주어야한다.
#include <string>
using namespace std;

int main()
{
	map<string, string> dic;

	dic.insert(make_pair("사과", "apple")); //짝으로 집어넣는다.
	dic.insert(make_pair("바나나", "banana"));
	dic.insert(make_pair("메론", "melon"));
	
	for (auto d : dic) {
		cout << d.first << " : " << d.second << endl;
	}

	return 0;
}