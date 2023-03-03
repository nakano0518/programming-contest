#include <iostream>
using namespace std;

int get_digit(int n) {
	int digit = 0;
	while(n > 0) {
		n /= 10;
		digit++;
	}
	return digit;
}

int main() {
	int N;
	cin >> N;
	int cnt = 0;
	for(int i = 1; i <= N; i++) {
		if(get_digit(i) % 2 == 1) {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}