#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main() {
	string s, p;
	cin >> s >> p;
	string s_2 = s + s;
	if(s_2.find(p) != string::npos) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}	