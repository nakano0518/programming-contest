#include <iostream>
using namespace std;
using ll = long long;

int get_digit(ll n) {
	int digit = 0;
	while(n > 0) {
		n /= 10;
		digit++;
	}
	return digit;
}

int main() {
	ll N;
    cin >> N;
    int F = 0;
    for(ll A = 1LL; A * A <= N; A++) {
        if(N % A != 0) continue;
        ll B = N / A;
        int A_digit = get_digit(A);
        int B_digit = get_digit(B);
        F = max(A_digit, B_digit);
    }
    cout << F << endl;
}