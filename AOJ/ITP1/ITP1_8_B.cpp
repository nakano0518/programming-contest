#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while(getline(cin, s)){
		if(s == "0") {
			break;
		}
		int sum = 0;
		for(int i = 0; i < s.size(); i++) {
			sum += int(s[i] - '0');
		}
		cout << sum << endl;
	}
}