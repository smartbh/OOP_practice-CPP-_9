#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int n;
	map<string, int> scoreProgram;
	string name;
	int score;

	cout << "***** 점수관리 프로그램 HIGH SCORE을 시작합니다 *****" << endl;
	
	while (true) {
		cout << "입력:1, 조회:2, 종료:3 >>";
		cin >> n;
		
		if (n == 1) {
			cout << "이름과 점수 >>";
			cin >> name;
			cin >> score;
			scoreProgram.insert(make_pair(name, score));
		}

		else if (n == 2) {
			cout << "이름 >>";
			cin >> name;
			cout << name << "의 점수는 " << scoreProgram.at(name) << endl;
		}

		else if (n == 3)
		{
			cout << "프로그램을 종료합니다..." << endl;
			break;
		}
	}
}