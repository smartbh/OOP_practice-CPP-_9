#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	cout << "***** 암호 관리 프로그램 WHO를 시작합니다 *****" << endl;

	map<string, string> WHO;

	string name,password;
	int n;

	while (true) {
		cout << "삽입:1, 검사:2, 종료:3>> ";
		cin >> n;

		if (n == 1){
			cout << "이름 암호>>";
			cin >> name;
			cin >> password;
			WHO.insert(make_pair(name, password));
		}

		else if (n == 2) {
			cout << "이름? ";
			cin >> name;
			cout << "암호? ";
			cin >> password;
			
			while (true) {
				if (WHO.at(name) != password) {
					cout << "실패~" << endl;
					cout << "암호? ";
					cin >> password;
				}
				else {
					cout << "통과!!" << endl;
					break;
				}
					
			}
		}

		else if (n == 3) {
			cout << "프로그램을 종료합니다..." << endl;
			break;
		}

		else {	//예외처리
			cout << "1~3번을 눌러주세요" << endl;
		}
	}
}