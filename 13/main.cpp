#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int n;
	map<string, int> scoreProgram;
	string name;
	int score;

	cout << "***** �������� ���α׷� HIGH SCORE�� �����մϴ� *****" << endl;
	
	while (true) {
		cout << "�Է�:1, ��ȸ:2, ����:3 >>";
		cin >> n;
		
		if (n == 1) {
			cout << "�̸��� ���� >>";
			cin >> name;
			cin >> score;
			scoreProgram.insert(make_pair(name, score));
		}

		else if (n == 2) {
			cout << "�̸� >>";
			cin >> name;
			cout << name << "�� ������ " << scoreProgram.at(name) << endl;
		}

		else if (n == 3)
		{
			cout << "���α׷��� �����մϴ�..." << endl;
			break;
		}
	}
}