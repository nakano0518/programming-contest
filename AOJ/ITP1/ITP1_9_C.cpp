#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	string T_card, H_card;
	int T_score = 0, H_score = 0;
	for (int i = 0; i < n; i++) {
		cin >> T_card >> H_card;
		T_score += 3 * (T_card > H_card) + (T_card == H_card);
		H_score += 3 * (H_card > T_card) + (T_card == H_card);
	}
	cout << T_score << " " << H_score << endl;
}