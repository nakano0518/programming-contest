#include <iostream>
using namespace std;

int main() {
	int m, f, r;
	while(cin >> m >> f >> r) {
		if(m == -1 && f == -1 && r == -1) {
			break;
		}
		int sum;
		if(m == -1 && f != -1) {
			sum = m;
		}
		else if(m != -1 && f == -1) {
			sum = f;
		}
		else {
			sum = m + f;
		}
		if(sum >= 80) {
			cout << "A" << endl;
		}
		else if(sum >= 65 && sum < 80) {
			cout << "B" << endl;
		}
		else if(sum >= 50 && sum< 65) {
			cout << "C" << endl;
		}
		else if(sum >= 30 && sum < 50) {
			if(r >= 50) {
				cout << "C" << endl;
			}
			else {
				cout << "D" << endl;
			}
		}
		else if(sum < 30) {
			cout << "F" << endl;
		}
		else if(m == -1 && f == -1) {
			cout << "F" << endl;
		}
	}
}