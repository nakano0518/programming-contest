#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N; cin >> N;
	vector<vector<int>>map(12, vector<int>(10, 0));
	int b, f, r, v;
	for (int i = 0; i < N; i++) {
		cin >> b >> f >> r >> v;
		b = (b - 1) * 3;
		map[b + f-1][r - 1] += v;
	}

	for (int h = 0; h < 12; h++) {
		for (int w = 0; w < 10; w++) {
			cout << " " << map[h][w];
		}
		cout << endl;
		if (h == 2 || h == 5 || h == 8)
			cout << "####################\n";
	}
}