#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	cout << "***** ��ȣ ���� ���α׷� WHO�� �����մϴ� *****" << endl;

	map<string, string> WHO;

	string name,password;
	int n;

	while (true) {
		cout << "����:1, �˻�:2, ����:3>> ";
		cin >> n;

		if (n == 1){
			cout << "�̸� ��ȣ>>";
			cin >> name;
			cin >> password;
			WHO.insert(make_pair(name, password));
		}

		else if (n == 2) {
			cout << "�̸�? ";
			cin >> name;
			cout << "��ȣ? ";
			cin >> password;
			
			while (true) {
				if (WHO.at(name) != password) {
					cout << "����~" << endl;
					cout << "��ȣ? ";
					cin >> password;
				}
				else {
					cout << "���!!" << endl;
					break;
				}
					
			}
		}

		else if (n == 3) {
			cout << "���α׷��� �����մϴ�..." << endl;
			break;
		}

		else {	//����ó��
			cout << "1~3���� �����ּ���" << endl;
		}
	}
}