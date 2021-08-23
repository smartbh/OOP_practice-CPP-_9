#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n=1,i;

	int sum = 0;
	double average;
	vector<int> v;
	
	
	while (true) {
		cout << "정수를 입력하세요(0을 입력하면 종료) >> ";
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

			cout << "평균 = " << ((double)sum/v.size());

			cout << endl;


		}

		else
			break;
		
		


		
	}
}