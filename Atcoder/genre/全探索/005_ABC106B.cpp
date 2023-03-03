#include <iostream>
using namespace std;


//約数の個数を求める関数
int get_divisor_cnt(int n) {
	int cnt = 0;
	for(int i = 1; i <= n; i++) {
		if(n % i == 0) cnt++;
	}
	return cnt;
}

int main() {
	int N;
	cin >> N;
	int ans = 0;
	for(int i = 1; i <= N; i++) {
		if(i % 2 != 0 && get_divisor_cnt(i) == 8) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}