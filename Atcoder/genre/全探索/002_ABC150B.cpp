#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string S;
	cin >> N >> S;
	int cnt = 0;
	for(int i = 0; i <= N - 3; i++){
		if(S.substr(i, 3) == "ABC") {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}