#include <iostream>
using namespace std;

int main() {
	int A, B, K;
	cin >> A >> B >> K;
    int N = min(A, B);
    int cnt = 0;
    int ans = 0;
	for(int i = N; i >= 1; i--) {
		if(A % i == 0 && B % i == 0) {
            cnt++;
        }
        if(K == cnt) {
            ans = i;
            break;
        }
	}
	cout << ans << endl;
	return 0;
}