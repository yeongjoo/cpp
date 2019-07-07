//set으로 팀 구성.. 한 명씩 필요, 디자이너, 프로그래머, DB관리자 목록 프린트
//어제, 오늘 산 우유 냉장고에.. 상한우유+싱싱우유. 어제 우유 먹음 남은 우유 이름 프린트
//1등 박스키, 2등 송스키, 3등 김스키, 4등 정스키인데 반칙 탈락
//스키대회 시상자 목록 프린트
//휴대폰 단축키 전체 리스트 프린트
#include "pch.h"
#include <iostream>
#include <string>
#include <set>
#include <list>
#include <map>
using namespace std;

int main()
{
	set<string> team;
	team.insert("디자이너");
	team.insert("프로그래머");
	team.insert("DB관리자");

	for (string t : team)
	{
			cout << t << ' ';
	}
		cout << endl;

		list<string> ref = { "상한우유", "싱싱우유" };
		ref.pop_front();

		for (string m : ref)
		{
			cout << m << ' ';
		}
		cout << endl;

		list<string> rank = { "박스키", "송스키", "김스키", "정스키" };
		rank.pop_back();
		for (string r : rank)
		{
			cout << r << ' ';
		}
		cout << endl;

		map<int, string> phone;
		phone.insert(make_pair(1, "엄마"));
		phone.insert(make_pair(2, "아빠"));
		phone.insert(make_pair(3, "친구"));
		phone.insert(make_pair(4, "오빠"));

		for (auto p : phone) {
			cout << p.first << "번 " << p.second << endl;
		}

	return 0;
}
//OOP 핵심 : class ( -> 상속)
				  //object 생성
//template = generic program
//가상함수 = 추상함수

//c++ 기능 중심으로 구현 c++심화 (network에서..)
//c++ 그래픽 중심으로 구현 (MFC)
//c++ 웹 중심으로 구현 (c#)