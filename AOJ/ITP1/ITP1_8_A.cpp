#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);

	for(auto x: s) {
		if(islower(x)) {
			x = toupper(x);
		}
		else if(isupper(x)) {
			x = tolower(x);
		}
		cout << x;
	}
	cout << endl;
}