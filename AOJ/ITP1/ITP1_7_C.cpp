#include <iostream>
#include <vector>
using namespace std;

int main() {
	int r, c;
	cin >> r >> c;
	vector<vector<int>> table(r, vector<int>(c));
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cin >> table[i][j];
		}
	}

	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cin >> table[i][j];
		}
	}

	for(int i = 0; i < r; i++) {
		int row_sum = 0;
		for(int j = 0; j < c; j++) {
			cout << table[i][j] << " ";
			row_sum += table[i][j];
		}
		cout << row_sum << endl;
	}

	int total_sum = 0;
	for(int i = 0; i < c; i++) {
		int col_sum = 0;
		for(int j = 0; j < r; j++) {
			col_sum += table[j][i];
		}
		cout << col_sum << " ";
		total_sum += col_sum;
	}
	cout << total_sum << endl;

}