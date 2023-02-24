#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main() {
	string s, a;
	while(cin >> s) {
		a += s;
	}
	transform(a.begin(), a.end(), a.begin(), ::tolower);

	map<char, int> counter;
	for(char c = 'a'; c <= 'z'; c++) {
		counter[c] = 0;
	}


	for (int i = 0; i < a.size(); i++) {
		if(counter.count(a[i]) != 0) {
			counter[a[i]]++;
		}
	}

	for(auto x: counter) {
		cout << x.first << " : " << x.second << endl;
	}
}	