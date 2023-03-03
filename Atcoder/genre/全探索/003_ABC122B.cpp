#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	cin >> S;
	int cnt = 0;
	int tmp_cnt = 0;
	for(int i = 0; i < S.size(); i++) {
		if(S[i] == 'A' || S[i] == 'T' || S[i] == 'G' || S[i] == 'C' ) {
			tmp_cnt++;
			if(tmp_cnt > cnt) {
				cnt = tmp_cnt;
			}
		}
		else {
			tmp_cnt = 0;
		}
	}
	cout << cnt << endl;
	return 0;
}