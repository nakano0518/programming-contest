#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string W, T;
	cin >> W;
	int cnt = 0;
	while(cin >> T) {
		if(T == "END_OF_TEXT") break;
		transform(T.begin(), T.end(), T.begin(), ::tolower);
		if(W == T) cnt++;
	}
	cout << cnt << endl;
}	