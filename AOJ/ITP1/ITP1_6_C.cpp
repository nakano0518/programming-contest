#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
    cin >> n >> m;

	vector<vector<int>>A(n,vector<int>(m,0));
	for (int h = 0; h < n; h++) {
		for (int w = 0; w < m; w++) {
			cin >> A[h][w];
		}
	}
	vector<int>B(m, 0);
	for (int i = 0; i < m; i++)
		cin >> B[i];

	for (int h = 0; h < n; h++) {
		int ans = 0;
		for (int w = 0; w < m; w++) {
			ans += A[h][w]*B[w];
		}
		cout << ans << endl;
	}
}