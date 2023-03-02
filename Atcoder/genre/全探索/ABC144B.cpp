#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	bool flg = false;
	for(int a = 1; a <= 9; a++) {
		for(int b = 1; b <= 9; b++) {
			if(a * b == N) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}