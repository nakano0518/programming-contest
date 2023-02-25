#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	string str;
	int q;
	cin >> str >> q;
	string cmd;
	int a, b;
	string p;
	vector<string> print_buf;

	for(int i = 0; i < q; i++) {
		cin >> cmd >> a >> b;
		if(cmd == "replace") {
			cin >> p;
			str = str.substr(0, a) + p + str.substr(b + 1, str.size() - 1 - b); 
		}
		else if(cmd == "reverse") {
			reverse(str.begin() + a, str.end() - (str.size() - 1 - b));
		}
		else {
			print_buf.push_back(str.substr(a, b + 1 - a));
		}
	}

	for(auto x: print_buf) {
		cout << x << endl;
	}
}