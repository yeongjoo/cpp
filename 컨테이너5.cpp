#include "pch.h"
#include <iostream>
#include <map> //<key&value> �Բ� �־��־���Ѵ�.
#include <string>
using namespace std;

int main()
{
	map<string, string> dic;

	dic.insert(make_pair("���", "apple")); //¦���� ����ִ´�.
	dic.insert(make_pair("�ٳ���", "banana"));
	dic.insert(make_pair("�޷�", "melon"));
	
	for (auto d : dic) {
		cout << d.first << " : " << d.second << endl;
	}

	return 0;
}