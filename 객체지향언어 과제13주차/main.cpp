#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n=1,i;

	int sum = 0;
	double average;
	vector<int> v;
	
	
	while (true) {
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����) >> ";
		cin >> n;
		sum = 0;

		if (n != 0) {
			v.push_back(n);

			for (i = 0; i < v.size(); i++) {
				cout << v[i] << ' ';
			}

			cout << endl;

			for (i = 0; i < v.size(); i++) {
				sum += v[i];	
			}

			cout << "��� = " << ((double)sum/v.size());

			cout << endl;


		}

		else
			break;
		
		


		
	}
}