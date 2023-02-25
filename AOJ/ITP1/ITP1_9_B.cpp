#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string s;
	int m, h;
	vector<string> buff;
	while(true) {
		cin >> s >> m;
		if(s == "-") break;
		for(int i = 0; i < m; i++) {
			cin >> h;
			s = s.substr(h, s.size() - h) + s.substr(0, h);
		}
		buff.push_back(s);
	}
	
	for(auto x: buff) {
		cout << x << endl;
	}
}	